/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QFrame *line;
    QComboBox *comboBox;
    QFrame *line_2;
    QCustomPlot *Qplot;
    QLabel *label_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *Run_Button;
    QPushButton *Go_Button;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QSlider *slider;
    QLabel *val;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QSpinBox *ID_NUM;
    QSpinBox *ID_NUM_2;
    QPushButton *Sreach_Button;
    QTextBrowser *textBrowser;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *ID_BOX;
    QSpinBox *ID_NUM_3;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QTextBrowser *textBrowser_2;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *ID_BOX_2;
    QPushButton *pushButton_3;
    QFrame *line_3;
    QCustomPlot *Qplot_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *IMG_label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1068, 1037);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 130, 231, 31));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(20, 300, 1011, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(80, 20, 86, 25));
        comboBox->setEditable(true);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(502, 0, 31, 621));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        Qplot = new QCustomPlot(centralWidget);
        Qplot->setObjectName(QStringLiteral("Qplot"));
        Qplot->setGeometry(QRect(540, 360, 471, 271));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(910, 320, 101, 31));
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(210, 10, 291, 112));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        Run_Button = new QPushButton(layoutWidget);
        Run_Button->setObjectName(QStringLiteral("Run_Button"));

        verticalLayout->addWidget(Run_Button);

        Go_Button = new QPushButton(layoutWidget);
        Go_Button->setObjectName(QStringLiteral("Go_Button"));

        verticalLayout->addWidget(Go_Button);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 170, 461, 40));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        slider = new QSlider(layoutWidget1);
        slider->setObjectName(QStringLiteral("slider"));
        slider->setMinimum(-2000);
        slider->setMaximum(2000);
        slider->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(slider);

        val = new QLabel(layoutWidget1);
        val->setObjectName(QStringLiteral("val"));
        val->setLayoutDirection(Qt::LeftToRight);
        val->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(val);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(60, 340, 401, 251));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        ID_NUM = new QSpinBox(layoutWidget2);
        ID_NUM->setObjectName(QStringLiteral("ID_NUM"));
        ID_NUM->setMinimum(141);
        ID_NUM->setMaximum(172);

        horizontalLayout->addWidget(ID_NUM);

        ID_NUM_2 = new QSpinBox(layoutWidget2);
        ID_NUM_2->setObjectName(QStringLiteral("ID_NUM_2"));
        ID_NUM_2->setMinimum(141);
        ID_NUM_2->setMaximum(173);
        ID_NUM_2->setValue(145);

        horizontalLayout->addWidget(ID_NUM_2);

        Sreach_Button = new QPushButton(layoutWidget2);
        Sreach_Button->setObjectName(QStringLiteral("Sreach_Button"));

        horizontalLayout->addWidget(Sreach_Button);


        verticalLayout_3->addLayout(horizontalLayout);

        textBrowser = new QTextBrowser(layoutWidget2);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout_3->addWidget(textBrowser);

        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(560, 20, 451, 271));
        verticalLayout_5 = new QVBoxLayout(layoutWidget3);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        ID_BOX = new QComboBox(layoutWidget3);
        ID_BOX->setObjectName(QStringLiteral("ID_BOX"));

        horizontalLayout_2->addWidget(ID_BOX);

        ID_NUM_3 = new QSpinBox(layoutWidget3);
        ID_NUM_3->setObjectName(QStringLiteral("ID_NUM_3"));
        ID_NUM_3->setMinimum(141);
        ID_NUM_3->setMaximum(170);

        horizontalLayout_2->addWidget(ID_NUM_3);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        pushButton_2 = new QPushButton(layoutWidget3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_4->addWidget(pushButton_2);

        label_2 = new QLabel(layoutWidget3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_2);


        horizontalLayout_3->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_3);

        textBrowser_2 = new QTextBrowser(layoutWidget3);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));

        verticalLayout_5->addWidget(textBrowser_2);

        layoutWidget4 = new QWidget(centralWidget);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(550, 320, 192, 28));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        ID_BOX_2 = new QComboBox(layoutWidget4);
        ID_BOX_2->setObjectName(QStringLiteral("ID_BOX_2"));

        horizontalLayout_4->addWidget(ID_BOX_2);

        pushButton_3 = new QPushButton(layoutWidget4);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_4->addWidget(pushButton_3);

        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(10, 630, 1011, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        Qplot_2 = new QCustomPlot(centralWidget);
        Qplot_2->setObjectName(QStringLiteral("Qplot_2"));
        Qplot_2->setGeometry(QRect(200, 660, 721, 291));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(60, 700, 98, 25));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(60, 670, 98, 25));
        IMG_label = new QLabel(centralWidget);
        IMG_label->setObjectName(QStringLiteral("IMG_label"));
        IMG_label->setGeometry(QRect(40, 740, 131, 91));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1068, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Hello", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "num", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Socket Bind", Q_NULLPTR));
        Run_Button->setText(QApplication::translate("MainWindow", "running_mod", Q_NULLPTR));
        Go_Button->setText(QApplication::translate("MainWindow", "run", Q_NULLPTR));
        val->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        Sreach_Button->setText(QApplication::translate("MainWindow", "ID Search", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Change ID", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "test val", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "read encoder", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "read sensor", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "bind can8", Q_NULLPTR));
        IMG_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
