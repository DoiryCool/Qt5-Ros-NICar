/********************************************************************************
** Form generated from reading UI file 'mainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tbw_main;
    QWidget *tb_camera;
    QLabel *lb_camImage;
    QWidget *tb_rviz;
    QTextBrowser *tx_showInfo;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *li_sendM;
    QPushButton *bt_sendM;
    QPushButton *bt_clearSendM;
    QTabWidget *tbw_sub;
    QWidget *tab_con;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *gb_connections;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lb_ipAdd;
    QLineEdit *li_ipAdd;
    QSpacerItem *horizontalSpacer_5;
    QLabel *lb_ipPort;
    QLineEdit *li_ipPort;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *bt_connectR;
    QSpacerItem *horizontalSpacer;
    QPushButton *bt_saveUrl;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *statusColor;
    QLabel *lb_statusSig;
    QLabel *lb_status;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lb_localIp;
    QLineEdit *li_localIpShow;
    QGroupBox *gb_topicLists;
    QPushButton *bt_refreshTopicsLists;
    QListWidget *lt_topics;
    QWidget *tab_cv;
    QGroupBox *groupBox_5;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *comba_imageTopics;
    QPushButton *bt_playCam;
    QGroupBox *gb_imagePro;
    QCheckBox *cb_2gray;
    QCheckBox *cb_2binary;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_3;
    QComboBox *comba_2binary_type;
    QGridLayout *gridLayout;
    QSlider *hs_2binary_maxval;
    QLabel *lb_2binary_threshold;
    QLabel *lb_2binary_maxval;
    QSlider *hs_2binary_threshold;
    QDoubleSpinBox *sb_2binary_threshold;
    QDoubleSpinBox *sb_2binary_maxval;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout_2;
    QLabel *lb_2canny_ht;
    QLabel *lb_2canny_ks;
    QSlider *hs_2canny_ht;
    QDoubleSpinBox *sb_2canny_ht;
    QLabel *lb_2canny_lt;
    QDoubleSpinBox *sb_2canny_lt;
    QSlider *hs_2canny_lt;
    QComboBox *comba_2canny_ks;
    QCheckBox *cb_2canny;
    QWidget *tab_pointSet;
    QGroupBox *gb_baseInfo;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *lb_x;
    QLabel *lb_y;
    QLineEdit *li_y;
    QLabel *lb_z;
    QLineEdit *li_z;
    QLineEdit *li_x;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget5;
    QFormLayout *formLayout_2;
    QLabel *lb_temperature;
    QLineEdit *li_temperature;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout_3;
    QLabel *lb_line_x;
    QLineEdit *li_line_x;
    QLabel *lb_line_y;
    QLineEdit *li_line_y;
    QLabel *lb_line_z;
    QLineEdit *li_line_z;
    QGroupBox *groupBox_4;
    QFormLayout *formLayout_4;
    QLabel *lb_angel_x;
    QLineEdit *li_angle_x;
    QLabel *lb_angel_y;
    QLineEdit *li_angle_y;
    QLabel *lb_angel_z;
    QLineEdit *li_angle_z;
    QLabel *authersaid;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1167, 716);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tbw_main = new QTabWidget(centralwidget);
        tbw_main->setObjectName(QString::fromUtf8("tbw_main"));
        tbw_main->setGeometry(QRect(0, 0, 581, 432));
        tbw_main->setTabPosition(QTabWidget::North);
        tb_camera = new QWidget();
        tb_camera->setObjectName(QString::fromUtf8("tb_camera"));
        lb_camImage = new QLabel(tb_camera);
        lb_camImage->setObjectName(QString::fromUtf8("lb_camImage"));
        lb_camImage->setGeometry(QRect(0, 0, 581, 401));
        lb_camImage->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        lb_camImage->setLineWidth(0);
        lb_camImage->setAlignment(Qt::AlignCenter);
        tbw_main->addTab(tb_camera, QString());
        tb_rviz = new QWidget();
        tb_rviz->setObjectName(QString::fromUtf8("tb_rviz"));
        tbw_main->addTab(tb_rviz, QString());
        tx_showInfo = new QTextBrowser(centralwidget);
        tx_showInfo->setObjectName(QString::fromUtf8("tx_showInfo"));
        tx_showInfo->setGeometry(QRect(0, 440, 581, 211));
        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 640, 581, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        li_sendM = new QLineEdit(horizontalLayoutWidget_2);
        li_sendM->setObjectName(QString::fromUtf8("li_sendM"));

        horizontalLayout_2->addWidget(li_sendM);

        bt_sendM = new QPushButton(horizontalLayoutWidget_2);
        bt_sendM->setObjectName(QString::fromUtf8("bt_sendM"));
        bt_sendM->setEnabled(false);

        horizontalLayout_2->addWidget(bt_sendM);

        bt_clearSendM = new QPushButton(horizontalLayoutWidget_2);
        bt_clearSendM->setObjectName(QString::fromUtf8("bt_clearSendM"));

        horizontalLayout_2->addWidget(bt_clearSendM);

        tbw_sub = new QTabWidget(centralwidget);
        tbw_sub->setObjectName(QString::fromUtf8("tbw_sub"));
        tbw_sub->setEnabled(true);
        tbw_sub->setGeometry(QRect(620, 30, 531, 401));
        tbw_sub->setTabPosition(QTabWidget::East);
        tab_con = new QWidget();
        tab_con->setObjectName(QString::fromUtf8("tab_con"));
        layoutWidget = new QWidget(tab_con);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 461, 361));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        gb_connections = new QGroupBox(layoutWidget);
        gb_connections->setObjectName(QString::fromUtf8("gb_connections"));
        layoutWidget1 = new QWidget(gb_connections);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 30, 401, 97));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(1);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lb_ipAdd = new QLabel(layoutWidget1);
        lb_ipAdd->setObjectName(QString::fromUtf8("lb_ipAdd"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lb_ipAdd->sizePolicy().hasHeightForWidth());
        lb_ipAdd->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(lb_ipAdd);

        li_ipAdd = new QLineEdit(layoutWidget1);
        li_ipAdd->setObjectName(QString::fromUtf8("li_ipAdd"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(li_ipAdd->sizePolicy().hasHeightForWidth());
        li_ipAdd->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(li_ipAdd);

        horizontalSpacer_5 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        lb_ipPort = new QLabel(layoutWidget1);
        lb_ipPort->setObjectName(QString::fromUtf8("lb_ipPort"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lb_ipPort->sizePolicy().hasHeightForWidth());
        lb_ipPort->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(lb_ipPort);

        li_ipPort = new QLineEdit(layoutWidget1);
        li_ipPort->setObjectName(QString::fromUtf8("li_ipPort"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(li_ipPort->sizePolicy().hasHeightForWidth());
        li_ipPort->setSizePolicy(sizePolicy3);
        li_ipPort->setMaximumSize(QSize(51, 16777215));

        horizontalLayout_4->addWidget(li_ipPort);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        bt_connectR = new QPushButton(layoutWidget1);
        bt_connectR->setObjectName(QString::fromUtf8("bt_connectR"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(bt_connectR->sizePolicy().hasHeightForWidth());
        bt_connectR->setSizePolicy(sizePolicy4);
        bt_connectR->setMaximumSize(QSize(90, 16777215));

        horizontalLayout->addWidget(bt_connectR);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        bt_saveUrl = new QPushButton(layoutWidget1);
        bt_saveUrl->setObjectName(QString::fromUtf8("bt_saveUrl"));
        sizePolicy4.setHeightForWidth(bt_saveUrl->sizePolicy().hasHeightForWidth());
        bt_saveUrl->setSizePolicy(sizePolicy4);
        bt_saveUrl->setMaximumSize(QSize(90, 16777215));

        horizontalLayout->addWidget(bt_saveUrl);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        statusColor = new QLabel(layoutWidget1);
        statusColor->setObjectName(QString::fromUtf8("statusColor"));
        statusColor->setMaximumSize(QSize(10, 10));
        statusColor->setStyleSheet(QString::fromUtf8("background-color:rgb(164, 0, 0)"));

        horizontalLayout_3->addWidget(statusColor);

        lb_statusSig = new QLabel(layoutWidget1);
        lb_statusSig->setObjectName(QString::fromUtf8("lb_statusSig"));

        horizontalLayout_3->addWidget(lb_statusSig);

        lb_status = new QLabel(layoutWidget1);
        lb_status->setObjectName(QString::fromUtf8("lb_status"));

        horizontalLayout_3->addWidget(lb_status);


        horizontalLayout_7->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        lb_localIp = new QLabel(layoutWidget1);
        lb_localIp->setObjectName(QString::fromUtf8("lb_localIp"));
        lb_localIp->setMaximumSize(QSize(65, 16777215));

        horizontalLayout_6->addWidget(lb_localIp);

        li_localIpShow = new QLineEdit(layoutWidget1);
        li_localIpShow->setObjectName(QString::fromUtf8("li_localIpShow"));
        li_localIpShow->setEnabled(false);

        horizontalLayout_6->addWidget(li_localIpShow);


        horizontalLayout_7->addLayout(horizontalLayout_6);


        verticalLayout->addLayout(horizontalLayout_7);

        gb_topicLists = new QGroupBox(gb_connections);
        gb_topicLists->setObjectName(QString::fromUtf8("gb_topicLists"));
        gb_topicLists->setGeometry(QRect(0, 170, 459, 191));
        bt_refreshTopicsLists = new QPushButton(gb_topicLists);
        bt_refreshTopicsLists->setObjectName(QString::fromUtf8("bt_refreshTopicsLists"));
        bt_refreshTopicsLists->setGeometry(QRect(400, 0, 61, 21));
        lt_topics = new QListWidget(gb_topicLists);
        lt_topics->setObjectName(QString::fromUtf8("lt_topics"));
        lt_topics->setGeometry(QRect(0, 20, 461, 171));

        verticalLayout_2->addWidget(gb_connections);

        tbw_sub->addTab(tab_con, QString());
        tab_cv = new QWidget();
        tab_cv->setObjectName(QString::fromUtf8("tab_cv"));
        groupBox_5 = new QGroupBox(tab_cv);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(20, 10, 471, 51));
        layoutWidget2 = new QWidget(groupBox_5);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 20, 471, 27));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        comba_imageTopics = new QComboBox(layoutWidget2);
        comba_imageTopics->setObjectName(QString::fromUtf8("comba_imageTopics"));

        horizontalLayout_5->addWidget(comba_imageTopics);

        bt_playCam = new QPushButton(layoutWidget2);
        bt_playCam->setObjectName(QString::fromUtf8("bt_playCam"));
        bt_playCam->setEnabled(false);
        sizePolicy4.setHeightForWidth(bt_playCam->sizePolicy().hasHeightForWidth());
        bt_playCam->setSizePolicy(sizePolicy4);

        horizontalLayout_5->addWidget(bt_playCam);

        gb_imagePro = new QGroupBox(tab_cv);
        gb_imagePro->setObjectName(QString::fromUtf8("gb_imagePro"));
        gb_imagePro->setGeometry(QRect(20, 60, 471, 331));
        cb_2gray = new QCheckBox(gb_imagePro);
        cb_2gray->setObjectName(QString::fromUtf8("cb_2gray"));
        cb_2gray->setGeometry(QRect(20, 40, 92, 23));
        cb_2binary = new QCheckBox(gb_imagePro);
        cb_2binary->setObjectName(QString::fromUtf8("cb_2binary"));
        cb_2binary->setGeometry(QRect(20, 70, 92, 23));
        layoutWidget3 = new QWidget(gb_imagePro);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(20, 90, 341, 93));
        verticalLayout_3 = new QVBoxLayout(layoutWidget3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        comba_2binary_type = new QComboBox(layoutWidget3);
        comba_2binary_type->addItem(QString());
        comba_2binary_type->addItem(QString());
        comba_2binary_type->addItem(QString());
        comba_2binary_type->addItem(QString());
        comba_2binary_type->addItem(QString());
        comba_2binary_type->addItem(QString());
        comba_2binary_type->setObjectName(QString::fromUtf8("comba_2binary_type"));

        verticalLayout_3->addWidget(comba_2binary_type);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        hs_2binary_maxval = new QSlider(layoutWidget3);
        hs_2binary_maxval->setObjectName(QString::fromUtf8("hs_2binary_maxval"));
        sizePolicy1.setHeightForWidth(hs_2binary_maxval->sizePolicy().hasHeightForWidth());
        hs_2binary_maxval->setSizePolicy(sizePolicy1);
        hs_2binary_maxval->setMaximum(255);
        hs_2binary_maxval->setValue(255);
        hs_2binary_maxval->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(hs_2binary_maxval, 2, 2, 1, 1);

        lb_2binary_threshold = new QLabel(layoutWidget3);
        lb_2binary_threshold->setObjectName(QString::fromUtf8("lb_2binary_threshold"));
        sizePolicy.setHeightForWidth(lb_2binary_threshold->sizePolicy().hasHeightForWidth());
        lb_2binary_threshold->setSizePolicy(sizePolicy);
        lb_2binary_threshold->setMaximumSize(QSize(70, 16777215));
        lb_2binary_threshold->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lb_2binary_threshold, 1, 0, 1, 1);

        lb_2binary_maxval = new QLabel(layoutWidget3);
        lb_2binary_maxval->setObjectName(QString::fromUtf8("lb_2binary_maxval"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(lb_2binary_maxval->sizePolicy().hasHeightForWidth());
        lb_2binary_maxval->setSizePolicy(sizePolicy5);
        lb_2binary_maxval->setMaximumSize(QSize(70, 16777215));
        lb_2binary_maxval->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lb_2binary_maxval, 2, 0, 1, 1);

        hs_2binary_threshold = new QSlider(layoutWidget3);
        hs_2binary_threshold->setObjectName(QString::fromUtf8("hs_2binary_threshold"));
        sizePolicy1.setHeightForWidth(hs_2binary_threshold->sizePolicy().hasHeightForWidth());
        hs_2binary_threshold->setSizePolicy(sizePolicy1);
        hs_2binary_threshold->setMaximum(255);
        hs_2binary_threshold->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(hs_2binary_threshold, 1, 2, 1, 1);

        sb_2binary_threshold = new QDoubleSpinBox(layoutWidget3);
        sb_2binary_threshold->setObjectName(QString::fromUtf8("sb_2binary_threshold"));
        sb_2binary_threshold->setMinimumSize(QSize(40, 0));
        sb_2binary_threshold->setMaximumSize(QSize(50, 16777215));
        sb_2binary_threshold->setDecimals(2);
        sb_2binary_threshold->setMinimum(0.000000000000000);
        sb_2binary_threshold->setMaximum(255.000000000000000);
        sb_2binary_threshold->setValue(0.000000000000000);

        gridLayout->addWidget(sb_2binary_threshold, 1, 1, 1, 1);

        sb_2binary_maxval = new QDoubleSpinBox(layoutWidget3);
        sb_2binary_maxval->setObjectName(QString::fromUtf8("sb_2binary_maxval"));
        sb_2binary_maxval->setMaximumSize(QSize(50, 16777215));
        sb_2binary_maxval->setMaximum(255.000000000000000);
        sb_2binary_maxval->setValue(255.000000000000000);

        gridLayout->addWidget(sb_2binary_maxval, 2, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        layoutWidget4 = new QWidget(gb_imagePro);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(20, 210, 341, 92));
        gridLayout_2 = new QGridLayout(layoutWidget4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        lb_2canny_ht = new QLabel(layoutWidget4);
        lb_2canny_ht->setObjectName(QString::fromUtf8("lb_2canny_ht"));
        sizePolicy.setHeightForWidth(lb_2canny_ht->sizePolicy().hasHeightForWidth());
        lb_2canny_ht->setSizePolicy(sizePolicy);
        lb_2canny_ht->setMaximumSize(QSize(70, 16777215));
        lb_2canny_ht->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lb_2canny_ht, 1, 0, 1, 1);

        lb_2canny_ks = new QLabel(layoutWidget4);
        lb_2canny_ks->setObjectName(QString::fromUtf8("lb_2canny_ks"));
        sizePolicy5.setHeightForWidth(lb_2canny_ks->sizePolicy().hasHeightForWidth());
        lb_2canny_ks->setSizePolicy(sizePolicy5);
        lb_2canny_ks->setMaximumSize(QSize(70, 16777215));
        lb_2canny_ks->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lb_2canny_ks, 2, 0, 1, 1);

        hs_2canny_ht = new QSlider(layoutWidget4);
        hs_2canny_ht->setObjectName(QString::fromUtf8("hs_2canny_ht"));
        sizePolicy1.setHeightForWidth(hs_2canny_ht->sizePolicy().hasHeightForWidth());
        hs_2canny_ht->setSizePolicy(sizePolicy1);
        hs_2canny_ht->setMaximum(255);
        hs_2canny_ht->setValue(100);
        hs_2canny_ht->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(hs_2canny_ht, 1, 2, 1, 1);

        sb_2canny_ht = new QDoubleSpinBox(layoutWidget4);
        sb_2canny_ht->setObjectName(QString::fromUtf8("sb_2canny_ht"));
        sb_2canny_ht->setMinimumSize(QSize(40, 0));
        sb_2canny_ht->setMaximumSize(QSize(50, 16777215));
        sb_2canny_ht->setDecimals(2);
        sb_2canny_ht->setMinimum(0.000000000000000);
        sb_2canny_ht->setMaximum(255.000000000000000);
        sb_2canny_ht->setValue(100.000000000000000);

        gridLayout_2->addWidget(sb_2canny_ht, 1, 1, 1, 1);

        lb_2canny_lt = new QLabel(layoutWidget4);
        lb_2canny_lt->setObjectName(QString::fromUtf8("lb_2canny_lt"));
        sizePolicy.setHeightForWidth(lb_2canny_lt->sizePolicy().hasHeightForWidth());
        lb_2canny_lt->setSizePolicy(sizePolicy);
        lb_2canny_lt->setMaximumSize(QSize(70, 16777215));
        lb_2canny_lt->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lb_2canny_lt, 0, 0, 1, 1);

        sb_2canny_lt = new QDoubleSpinBox(layoutWidget4);
        sb_2canny_lt->setObjectName(QString::fromUtf8("sb_2canny_lt"));
        sb_2canny_lt->setMinimumSize(QSize(40, 0));
        sb_2canny_lt->setMaximumSize(QSize(50, 16777215));
        sb_2canny_lt->setDecimals(2);
        sb_2canny_lt->setMinimum(0.000000000000000);
        sb_2canny_lt->setMaximum(255.000000000000000);
        sb_2canny_lt->setValue(10.000000000000000);

        gridLayout_2->addWidget(sb_2canny_lt, 0, 1, 1, 1);

        hs_2canny_lt = new QSlider(layoutWidget4);
        hs_2canny_lt->setObjectName(QString::fromUtf8("hs_2canny_lt"));
        sizePolicy1.setHeightForWidth(hs_2canny_lt->sizePolicy().hasHeightForWidth());
        hs_2canny_lt->setSizePolicy(sizePolicy1);
        hs_2canny_lt->setMaximum(255);
        hs_2canny_lt->setValue(10);
        hs_2canny_lt->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(hs_2canny_lt, 0, 2, 1, 1);

        comba_2canny_ks = new QComboBox(layoutWidget4);
        comba_2canny_ks->addItem(QString());
        comba_2canny_ks->addItem(QString());
        comba_2canny_ks->addItem(QString());
        comba_2canny_ks->setObjectName(QString::fromUtf8("comba_2canny_ks"));
        QSizePolicy sizePolicy6(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(comba_2canny_ks->sizePolicy().hasHeightForWidth());
        comba_2canny_ks->setSizePolicy(sizePolicy6);
        comba_2canny_ks->setMaximumSize(QSize(50, 16777215));

        gridLayout_2->addWidget(comba_2canny_ks, 2, 1, 1, 1);

        cb_2canny = new QCheckBox(gb_imagePro);
        cb_2canny->setObjectName(QString::fromUtf8("cb_2canny"));
        cb_2canny->setGeometry(QRect(20, 190, 92, 23));
        tbw_sub->addTab(tab_cv, QString());
        tab_pointSet = new QWidget();
        tab_pointSet->setObjectName(QString::fromUtf8("tab_pointSet"));
        tbw_sub->addTab(tab_pointSet, QString());
        gb_baseInfo = new QGroupBox(centralwidget);
        gb_baseInfo->setObjectName(QString::fromUtf8("gb_baseInfo"));
        gb_baseInfo->setGeometry(QRect(620, 440, 501, 231));
        groupBox = new QGroupBox(gb_baseInfo);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 20, 151, 131));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        lb_x = new QLabel(groupBox);
        lb_x->setObjectName(QString::fromUtf8("lb_x"));

        formLayout->setWidget(0, QFormLayout::LabelRole, lb_x);

        lb_y = new QLabel(groupBox);
        lb_y->setObjectName(QString::fromUtf8("lb_y"));

        formLayout->setWidget(1, QFormLayout::LabelRole, lb_y);

        li_y = new QLineEdit(groupBox);
        li_y->setObjectName(QString::fromUtf8("li_y"));
        li_y->setEnabled(true);
        li_y->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, li_y);

        lb_z = new QLabel(groupBox);
        lb_z->setObjectName(QString::fromUtf8("lb_z"));

        formLayout->setWidget(2, QFormLayout::LabelRole, lb_z);

        li_z = new QLineEdit(groupBox);
        li_z->setObjectName(QString::fromUtf8("li_z"));
        li_z->setEnabled(true);
        li_z->setReadOnly(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, li_z);

        li_x = new QLineEdit(groupBox);
        li_x->setObjectName(QString::fromUtf8("li_x"));
        li_x->setEnabled(true);
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        li_x->setFont(font);
        li_x->setStyleSheet(QString::fromUtf8(""));
        li_x->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, li_x);

        groupBox_2 = new QGroupBox(gb_baseInfo);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 150, 141, 80));
        layoutWidget5 = new QWidget(groupBox_2);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(10, 40, 131, 27));
        formLayout_2 = new QFormLayout(layoutWidget5);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        lb_temperature = new QLabel(layoutWidget5);
        lb_temperature->setObjectName(QString::fromUtf8("lb_temperature"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, lb_temperature);

        li_temperature = new QLineEdit(layoutWidget5);
        li_temperature->setObjectName(QString::fromUtf8("li_temperature"));
        li_temperature->setEnabled(true);
        li_temperature->setDragEnabled(true);
        li_temperature->setReadOnly(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, li_temperature);

        groupBox_3 = new QGroupBox(gb_baseInfo);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(150, 20, 151, 131));
        formLayout_3 = new QFormLayout(groupBox_3);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        lb_line_x = new QLabel(groupBox_3);
        lb_line_x->setObjectName(QString::fromUtf8("lb_line_x"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, lb_line_x);

        li_line_x = new QLineEdit(groupBox_3);
        li_line_x->setObjectName(QString::fromUtf8("li_line_x"));
        li_line_x->setEnabled(true);
        li_line_x->setReadOnly(true);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, li_line_x);

        lb_line_y = new QLabel(groupBox_3);
        lb_line_y->setObjectName(QString::fromUtf8("lb_line_y"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, lb_line_y);

        li_line_y = new QLineEdit(groupBox_3);
        li_line_y->setObjectName(QString::fromUtf8("li_line_y"));
        li_line_y->setEnabled(true);
        li_line_y->setReadOnly(true);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, li_line_y);

        lb_line_z = new QLabel(groupBox_3);
        lb_line_z->setObjectName(QString::fromUtf8("lb_line_z"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, lb_line_z);

        li_line_z = new QLineEdit(groupBox_3);
        li_line_z->setObjectName(QString::fromUtf8("li_line_z"));
        li_line_z->setEnabled(true);
        li_line_z->setReadOnly(true);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, li_line_z);

        groupBox_4 = new QGroupBox(gb_baseInfo);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(300, 20, 151, 131));
        formLayout_4 = new QFormLayout(groupBox_4);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        lb_angel_x = new QLabel(groupBox_4);
        lb_angel_x->setObjectName(QString::fromUtf8("lb_angel_x"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, lb_angel_x);

        li_angle_x = new QLineEdit(groupBox_4);
        li_angle_x->setObjectName(QString::fromUtf8("li_angle_x"));
        li_angle_x->setEnabled(true);
        li_angle_x->setReadOnly(true);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, li_angle_x);

        lb_angel_y = new QLabel(groupBox_4);
        lb_angel_y->setObjectName(QString::fromUtf8("lb_angel_y"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, lb_angel_y);

        li_angle_y = new QLineEdit(groupBox_4);
        li_angle_y->setObjectName(QString::fromUtf8("li_angle_y"));
        li_angle_y->setEnabled(true);
        li_angle_y->setReadOnly(true);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, li_angle_y);

        lb_angel_z = new QLabel(groupBox_4);
        lb_angel_z->setObjectName(QString::fromUtf8("lb_angel_z"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, lb_angel_z);

        li_angle_z = new QLineEdit(groupBox_4);
        li_angle_z->setObjectName(QString::fromUtf8("li_angle_z"));
        li_angle_z->setEnabled(true);
        li_angle_z->setReadOnly(true);

        formLayout_4->setWidget(2, QFormLayout::FieldRole, li_angle_z);

        authersaid = new QLabel(centralwidget);
        authersaid->setObjectName(QString::fromUtf8("authersaid"));
        authersaid->setEnabled(false);
        authersaid->setGeometry(QRect(840, 670, 321, 20));
        authersaid->setText(QString::fromUtf8("reserved by gujunwei email:jerrygu.gjw@gmail.com"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1167, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tbw_main->setCurrentIndex(0);
        tbw_sub->setCurrentIndex(0);
        comba_imageTopics->setCurrentIndex(-1);
        comba_2binary_type->setCurrentIndex(0);
        comba_2canny_ks->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "NICar", nullptr));
        lb_camImage->setText(QApplication::translate("MainWindow", "NO SIGNAL", nullptr));
        tbw_main->setTabText(tbw_main->indexOf(tb_camera), QApplication::translate("MainWindow", "Camera", nullptr));
        tbw_main->setTabText(tbw_main->indexOf(tb_rviz), QApplication::translate("MainWindow", "Rviz", nullptr));
        bt_sendM->setText(QApplication::translate("MainWindow", "Send", nullptr));
        bt_clearSendM->setText(QApplication::translate("MainWindow", "Clear", nullptr));
        gb_connections->setTitle(QApplication::translate("MainWindow", "Ros_Master_URL", nullptr));
        lb_ipAdd->setText(QApplication::translate("MainWindow", "IP:", nullptr));
        li_ipAdd->setText(QString());
        li_ipAdd->setPlaceholderText(QString());
        lb_ipPort->setText(QApplication::translate("MainWindow", "Port:", nullptr));
        li_ipPort->setText(QString());
        li_ipPort->setPlaceholderText(QString());
        bt_connectR->setText(QApplication::translate("MainWindow", "Connect", nullptr));
        bt_saveUrl->setText(QApplication::translate("MainWindow", "Save", nullptr));
        statusColor->setText(QString());
        lb_statusSig->setText(QApplication::translate("MainWindow", "Status:", nullptr));
        lb_status->setText(QApplication::translate("MainWindow", "Offline", nullptr));
        lb_localIp->setText(QApplication::translate("MainWindow", "Local IP:", nullptr));
        gb_topicLists->setTitle(QApplication::translate("MainWindow", "Topics", nullptr));
        bt_refreshTopicsLists->setText(QApplication::translate("MainWindow", "Refresh", nullptr));
        tbw_sub->setTabText(tbw_sub->indexOf(tab_con), QApplication::translate("MainWindow", "Connection", nullptr));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Camera", nullptr));
        comba_imageTopics->setCurrentText(QString());
        bt_playCam->setText(QApplication::translate("MainWindow", "Play", nullptr));
        gb_imagePro->setTitle(QApplication::translate("MainWindow", "Image Process", nullptr));
        cb_2gray->setText(QApplication::translate("MainWindow", "2Gray", nullptr));
        cb_2binary->setText(QApplication::translate("MainWindow", "2Binary", nullptr));
        comba_2binary_type->setItemText(0, QApplication::translate("MainWindow", "CV_THRESH_BINARY", nullptr));
        comba_2binary_type->setItemText(1, QApplication::translate("MainWindow", "CV_THRESH_BINARY_INV", nullptr));
        comba_2binary_type->setItemText(2, QApplication::translate("MainWindow", "CV_THRESH_TRUNC", nullptr));
        comba_2binary_type->setItemText(3, QApplication::translate("MainWindow", "CV_THRESH_TOZERO", nullptr));
        comba_2binary_type->setItemText(4, QApplication::translate("MainWindow", "CV_THRESH_TOZERO_INV", nullptr));
        comba_2binary_type->setItemText(5, QApplication::translate("MainWindow", "CV_THRESH_OTSU", nullptr));

        comba_2binary_type->setCurrentText(QApplication::translate("MainWindow", "CV_THRESH_BINARY", nullptr));
        lb_2binary_threshold->setText(QApplication::translate("MainWindow", "Threshold", nullptr));
        lb_2binary_maxval->setText(QApplication::translate("MainWindow", "MaxValue", nullptr));
        lb_2canny_ht->setText(QApplication::translate("MainWindow", "High Thre", nullptr));
        lb_2canny_ks->setText(QApplication::translate("MainWindow", "Ker Size", nullptr));
        lb_2canny_lt->setText(QApplication::translate("MainWindow", "Low Thre", nullptr));
        comba_2canny_ks->setItemText(0, QApplication::translate("MainWindow", "3", nullptr));
        comba_2canny_ks->setItemText(1, QApplication::translate("MainWindow", "5", nullptr));
        comba_2canny_ks->setItemText(2, QApplication::translate("MainWindow", "7", nullptr));

        comba_2canny_ks->setCurrentText(QApplication::translate("MainWindow", "3", nullptr));
        cb_2canny->setText(QApplication::translate("MainWindow", "2Canny", nullptr));
        tbw_sub->setTabText(tbw_sub->indexOf(tab_cv), QApplication::translate("MainWindow", "CV", nullptr));
        tbw_sub->setTabText(tbw_sub->indexOf(tab_pointSet), QApplication::translate("MainWindow", "Point", nullptr));
        gb_baseInfo->setTitle(QApplication::translate("MainWindow", "  NICar INFO", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "\346\226\271\345\220\221", nullptr));
        lb_x->setText(QApplication::translate("MainWindow", "X :", nullptr));
        lb_y->setText(QApplication::translate("MainWindow", "Y :", nullptr));
        lb_z->setText(QApplication::translate("MainWindow", "Z :", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\346\270\251\345\272\246", nullptr));
        lb_temperature->setText(QApplication::translate("MainWindow", "T(C)  :", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\347\272\277\345\212\240\351\200\237\345\272\246", nullptr));
        lb_line_x->setText(QApplication::translate("MainWindow", "X :", nullptr));
        lb_line_y->setText(QApplication::translate("MainWindow", "Y :", nullptr));
        lb_line_z->setText(QApplication::translate("MainWindow", "Z :", nullptr));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\350\247\222\351\200\237\345\272\246", nullptr));
        lb_angel_x->setText(QApplication::translate("MainWindow", "X :", nullptr));
        lb_angel_y->setText(QApplication::translate("MainWindow", "Y :", nullptr));
        lb_angel_z->setText(QApplication::translate("MainWindow", "Z :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
