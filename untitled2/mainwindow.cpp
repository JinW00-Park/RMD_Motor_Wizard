#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "socket_can.hpp"

SOCKET_CAN_PROTO C_P;
u_int32_t RTX = 0;
int16_t tq_val=0;
struct can_frame recv_frame;
bool id_table[33]={0};


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

    if(RTX == 0){
        ui->label->setText("SET socket");
        RTX = C_P.CAN_INIT_("can0");
    }
    else{
       ui->label->setText("Socket Port Already setted");
    }

}


void MainWindow::on_Run_Button_clicked()
{

    QVariant get_target_id = ui->comboBox->currentData();
    u_int32_t target_id = get_target_id.toInt()+180;

    ui->label->setText("Running modee");
    u_int8_t run_data[8]={0x88,00,00,00,00,00,00,00};
    C_P.CAN_WRITE_8BYTES(RTX,target_id,run_data,_PRINT);
}


void MainWindow::on_Go_Button_clicked()
{
    QVariant get_target_id = ui->comboBox->currentData();
    u_int32_t target_id = get_target_id.toInt()+180;

    ui->label->setText("Run Mottor");
    u_int8_t tq_data[8]={0xa1,0,0,0,0xff,0,0,0};
    tq_data[5] = (tq_val &0xff00)>>8;
    tq_data[4] = (tq_val &0x00ff);
    C_P.CAN_WRITE_8BYTES(RTX,target_id,tq_data,_PRINT);
}


void MainWindow::on_slider_valueChanged(int value)
{
    tq_val = value;
    ui->val->setNum(value);
}

void MainWindow::on_Sreach_Button_clicked()
{
    //clear all items
    ui->comboBox->clear();
    ui->ID_BOX->clear();

    // clear id table
    std::fill(id_table,id_table+33,0);

    // bring range value
    u_int32_t start_id = ui->ID_NUM->value() + 180 ;
    u_int32_t end_id = ui->ID_NUM_2->value() + 180 ;
    QString text;

    // set data frmae
    u_int8_t tq_data[8]={0x79,0,0x01,0,0,0,0,0};

    // Search Motor ID and add item on combo box
    for(u_int32_t ID =start_id; ID<end_id+1; ID++){
        C_P.CAN_WRITE_8BYTES(RTX, ID, tq_data, _NON_PRINT);                 // This code work like Ping
        ssize_t NN_byte = C_P.CAN_RECV_8BYTES(RTX, ID, &recv_frame);        // Get motor reply data (timeO: 0.5sec, r-filter: ID)

        //std::cout << "a = " << hex<< ID << "     dlc: "<<(int)recv_frame.can_dlc<<endl; //test code

        if((NN_byte!=0) && (0x140+recv_frame.data[4]== ID)){                // ID detect qualification
            //std::cout<<"Detect ID"<< hex << (int)recv_frame.data[4]<< std::endl;       // test code
            id_table[recv_frame.data[4]]= 1;
            text = QString::number(140+(int)recv_frame.data[4]);                // set string
            ui->textBrowser->append(" ID "+text+" Detected!");               // Display on textbrowser
            ui->comboBox->addItem(QString::number(140+recv_frame.data[4]),140+recv_frame.data[4]); //add ID for select motor
            ui->ID_BOX->addItem(QString::number(140+recv_frame.data[4]),140+recv_frame.data[4]);   //add ID for ID change
        }
        sleep(0.1);                                                        // for communication stability
    }//ed for
}

void MainWindow::on_pushButton_2_clicked()
{
    // buffer
    u_int8_t id_set_data[8]={0x79,0,0x00,0,0,0,0,0};

    // now id
    QVariant get_now_id = ui->ID_BOX->currentData();
    u_int32_t now_id = get_now_id.toInt();

    // new id
    u_int32_t new_id  = ui->ID_NUM_3->value();

    // text buffers
    QString now_id_txt, new_id_txt;
/*
    for(int k =0; k<33; k++){

        std::cout<< "table["<<k<<"]: "<<id_table[k]<<std::endl;
    }*/

    if(id_table[new_id-140]!=1){

        if(new_id >172 || new_id == now_id || new_id<0){
            ui->label_2->setText("Something Worng! Can not change ID!");
            new_id = now_id;
        }

        else{
            id_table[new_id-140]=1;
            id_table[now_id-140]=0;


            id_set_data[4] = (new_id-140) & 0xff;
            id_set_data[5] = ((new_id-140) & 0xff00)>>8;
            ui->label_2->setNum( get_now_id.toInt() );
            C_P.CAN_WRITE_8BYTES(RTX, now_id+180, id_set_data, _NON_PRINT);

            ssize_t NN_byte = C_P.CAN_RECV_8BYTES(RTX, new_id+180, &recv_frame);
            sleep(2);
            NN_byte = C_P.CAN_RECV_8BYTES(RTX,0x141, &recv_frame);

            if((NN_byte!=0) && (0x140+recv_frame.data[4]== new_id+180)){
                ui->label_2->setText("ID changed");

                now_id_txt = QString::number(now_id);
                new_id_txt = QString::number(140+(int)recv_frame.data[4]);                // set string
                ui->textBrowser_2->append(" ID "+now_id_txt+ "  changed to  " +new_id_txt );               // Display on textbrowser

                // change item to new ID
                QVariant err = now_id;
                int find_index = find_index =ui->ID_BOX->findData(err);
                ui->ID_BOX->setItemData(find_index,new_id);
                ui->ID_BOX->setItemText(find_index, QString::number(new_id));

                find_index = find_index =ui->comboBox->findData(err);
                ui->comboBox->setItemData(find_index,new_id);
                ui->comboBox->setItemText(find_index, QString::number(new_id));

            }// ed if

        } //ed else

    } //ed table check if
    else{
         ui->textBrowser_2->append("New ID already existed!");
    }

}// end fnc
