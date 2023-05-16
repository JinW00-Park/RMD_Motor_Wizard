#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "socket_can.hpp"

SOCKET_CAN_PROTO C_P;
u_int32_t RTX = 0;
int16_t tq_val=0;
struct can_frame recv_frame;
struct can_frame recv_frame2;

bool id_table[33]={0};
char flag_test = 0;
int test_num=0;

u_int8_t tqq_data[8]={0xa1,0,0,0,0,0,0,0};
int16_t tqq_val=0;


//000000000000000000000000000000000000000
u_int8_t old_val = 0;

int16_t encoder_rev[2] = {0};
u_int16_t encoder_deg = 0;
int32_t motor_deg_hex = 0;
float motor_deg_dec = 0;

//00/000000000000000000000000000000000000


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Timer setting
    connect(&mDataTimer, SIGNAL(timeout()), this, SLOT(timerSlot()));
    mDataTimer.start(3);


    /* draw axis*/
    ui->Qplot->yAxis->setTickLabels(false);
    connect(ui->Qplot->yAxis2, SIGNAL(rangeChanged(QCPRange)), ui->Qplot->yAxis, SLOT(setRange(QCPRange))); // left axis only mirrors inner right axis
    ui->Qplot->yAxis2->setVisible(true);
    ui->Qplot->axisRect()->addAxis(QCPAxis::atRight);
    ui->Qplot->axisRect()->axis(QCPAxis::atRight, 0)->setPadding(35); // add some padding to have space for tags
    ui->Qplot->axisRect()->axis(QCPAxis::atRight, 1)->setPadding(35); // add some padding to have space for tags

    // create graphs:
    mGraph1 = ui->Qplot->addGraph(ui->Qplot->xAxis, ui->Qplot->axisRect()->axis(QCPAxis::atRight, 0));
    mGraph2 = ui->Qplot->addGraph(ui->Qplot->xAxis, ui->Qplot->axisRect()->axis(QCPAxis::atRight, 1));
    mGraph1->setPen(QPen(QColor(250, 120, 0)));
    mGraph2->setPen(QPen(QColor(0, 180, 60)));

    // create tags with newly introduced AxisTag class (see axistag.h/.cpp):
    mTag1 = new AxisTag(mGraph1->valueAxis());
    mTag1->setPen(mGraph1->pen());
    mTag2 = new AxisTag(mGraph2->valueAxis());
    mTag2->setPen(mGraph2->pen());



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
    u_int8_t tq_data[8]={0xa1,0,0,0,0,0,0,0};
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
    ui->ID_BOX_2->clear();

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

        if((NN_byte!=0) && (0x140+recv_frame.data[4]== (int32_t)ID)){                // ID detect qualification
            //std::cout<<"Detect ID"<< hex << (int)recv_frame.data[4]<< std::endl;       // test code
            id_table[recv_frame.data[4]]= 1;
            text = QString::number(140+(int)recv_frame.data[4]);                // set string
            ui->textBrowser->append(" ID "+text+" Detected!");               // Display on textbrowser
            ui->comboBox->addItem(QString::number(140+recv_frame.data[4]),140+recv_frame.data[4]); //add ID for select motor
            ui->ID_BOX->addItem(QString::number(140+recv_frame.data[4]),140+recv_frame.data[4]);   //add ID for ID change
            ui->ID_BOX_2->addItem(QString::number(140+recv_frame.data[4]),140+recv_frame.data[4]);
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

        // Check ID range 141~172[dec]
        if(new_id >172 || new_id == now_id || new_id < 141){
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

            if((NN_byte!=0) && (0x140+recv_frame.data[4]== (int32_t)new_id+180)){
                ui->label_2->setText("ID changed");

                now_id_txt = QString::number(now_id);
                new_id_txt = QString::number(140+(int)recv_frame.data[4]);                // set string
                ui->textBrowser_2->append(" ID "+now_id_txt+ "  changed to  " +new_id_txt );               // Display on textbrowser

                // change item to new ID
                QVariant fnd_id = now_id;
                int find_index =ui->ID_BOX->findData(fnd_id);
                ui->ID_BOX->setItemData(find_index,new_id);
                ui->ID_BOX->setItemText(find_index, QString::number(new_id));

                find_index = ui->comboBox->findData(fnd_id);
                ui->comboBox->setItemData(find_index,new_id);
                ui->comboBox->setItemText(find_index, QString::number(new_id));

                find_index = ui->ID_BOX_2->findData(fnd_id);
                ui->ID_BOX_2->setItemData(find_index,new_id);
                ui->ID_BOX_2->setItemText(find_index, QString::number(new_id));

            }// ed if

        } //ed else

    } //ed table check if
    else{
         ui->textBrowser_2->append("New ID already existed!");
    }

}// end fnc

void MainWindow::on_pushButton_3_clicked()
{

    //mPlot = new QCustomPlot(this);
    //setCentralWidget(ui->Qplot);

    // configure plot to have two right axes:

    flag_test = (flag_test==1) ? 0 : 1;
    if(flag_test){
        ui->pushButton_3->setText("STOP");
    }
    else{
        ui->pushButton_3->setText("Read Encoder");
    }



}
void MainWindow::timerSlot()
{
    if(flag_test){
        // get ID to the left of "Socket bind button"
        QVariant get_target_id = ui->ID_BOX_2->currentData();
        u_int32_t target_id = get_target_id.toInt()+180;

        // TX Torque data
        tqq_data[5] = (tq_val &0xff00)>>8;
        tqq_data[4] = (tq_val &0x00ff);
        C_P.CAN_WRITE_8BYTES(RTX,target_id,tqq_data,_PRINT);

        // Read Toeque data
        ssize_t NN_byte = C_P.CAN_RECV_8BYTES(RTX, target_id, &recv_frame2);        // Get motor reply data (timeO: 0.5sec, r-filter: ID)

        /*** Calculate encoder ***/
        // parse encoder data
        encoder_deg = ((recv_frame2.data[7]<<8) + recv_frame2.data[6]);

        // CW revolution check
        if(((old_val & 0xf0) == 0xf0) && ((recv_frame2.data[7] & 0xf0) == 0x00)){
             encoder_rev[0] ++;
         }
        // CCW revolution check
         else if(((old_val & 0xf0) == 0x00) && ((recv_frame2.data[7] & 0xf0) == 0xf0)){
             encoder_rev[0] --;
         }

        // Display encoder rev val on label
        ui->label_3->setNum(encoder_rev[0]);

        /*** Calculate revolution Degree of motor to degree ***/
        // CW
        if(encoder_rev[0] >=0){
            motor_deg_dec = ((float)(encoder_rev[0]*40)) + ((float)encoder_deg/(float)0xffff)*40.0;
        }
        // CCW
        else{
            motor_deg_dec = ((float)((encoder_rev[0]+1)*40)) - ((float)(0xffff-encoder_deg)/(float)0xffff)*40.0;
        }

        // Only one revolution
        if(encoder_rev[0]>=9 || encoder_rev[0]<= (-9)){
            encoder_rev[0] = 0;
        }


        old_val = recv_frame2.data[7];
        std::cout<<"test rev  "<< dec <<encoder_rev[0]<<std::endl;


        // calculate and add a new data point to each graph:
        mGraph1->addData(mGraph1->dataCount(),motor_deg_dec);
        mGraph2->addData(mGraph2->dataCount(), ((float)encoder_deg/(float)0xffff)*40.0);

        // make key axis range scroll with the data:
        ui->Qplot->xAxis->rescale();
        mGraph1->rescaleValueAxis(false, true);
        mGraph2->rescaleValueAxis(false, true);
        ui->Qplot->xAxis->setRange(ui->Qplot->xAxis->range().upper, 100, Qt::AlignRight);

        // update the vertical axis tag positions and texts to match the rightmost data point of the graphs:
        double graph1Value = mGraph1->dataMainValue(mGraph1->dataCount()-1);
        double graph2Value = mGraph2->dataMainValue(mGraph2->dataCount()-1);

        mTag1->updatePosition(graph1Value);
        mTag2->updatePosition(graph2Value);
        mTag1->setText(QString::number(graph1Value, 'f', 2));
        mTag2->setText(QString::number(graph2Value, 'f', 2));

    }// fleg option if
        ui->Qplot->replot();

}


