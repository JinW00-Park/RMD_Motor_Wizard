#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "qcustomplot.h"
#include "axistag.h"
//#include <QPixmap>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_Go_Button_clicked();

    void on_Run_Button_clicked();

    void on_slider_valueChanged(int value);

    void on_Sreach_Button_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void timerSlot();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_Zero_button_clicked();

    void on_clear_button_clicked();

private:
    Ui::MainWindow *ui;
    QTimer mDataTimer;
    //QCustomPlot *mPlot;
    QPointer<QCPGraph> mGraph1;
    QPointer<QCPGraph> mGraph2;
    QPointer<QCPGraph> mGraph3;
    QPointer<QCPGraph> mGraph4;
    AxisTag *mTag1;
    AxisTag *mTag2;
    AxisTag *mTag3;
    AxisTag *mTag4;
    QPixmap sensor_status;

};

#endif // MAINWINDOW_H
