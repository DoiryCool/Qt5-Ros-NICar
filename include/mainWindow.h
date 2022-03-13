#ifndef __MAINWINDOW_H_
#define __MAINWINDOW_H_
//QT
#include <QTime>
#include <QString>
#include <QScreen>
#include <QProcess>
#include <QHostAddress>
#include <QPlainTextEdit>
#include <QAbstractSocket>
#include <QNetworkInterface>
//std
#include <thread>
#include <cstdlib>
#include <fstream>
#include <jsoncpp/json/json.h>
//
#include "socketCommunication.h"
#include "../ui/ui_mainWindow.h"
#include "qNode.h"
#include "imagePro.hpp"

using std::ifstream;

#endif

class mainWindow : public QMainWindow
{
    Q_OBJECT
    
private:
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenRect = screen->availableGeometry();

    int sizeWidth = screenRect.width() * 0.718;
    int sizeHeight = screenRect.height() * 0.718;
    int btWidth1 = sizeWidth * 0.04;
    int btHeight1 = sizeHeight * 0.04;
    int lbWidth1 = sizeWidth * 0.04;
    int lbHeight1 = sizeHeight * 0.04;
    bool status = false;
    cv::VideoCapture capture;

    //settings
    QString defaultRosIp;
    QString defaultPort;

    //IP_Set
    QString currentRosIp;
    QString currentPort;
    QString localIP;
    QString RosMasterURL;

    socketCommunication socketIns;

    Ui::MainWindow* ui;
    qNode qnode;
    imagePro imageManager;
    QProcess * cmdHandle;

public:
    mainWindow(void);
    void readSettings(void);
    void windowInit(void);
    bool terminal_info(QString);
    QString remoteInfo(QString);

    void subImageTopic(QString top_name);

    void initTopicList();
    void initPlot();

    void keyPressEvent(QKeyEvent *event);
public slots:
    void sendMessage(void);
    void clear_li_sendM(void);
    void bt_connectR_clicked(void);
    void connectToMaster(void);
    void saveValues(void);
    void showRosMes(QString);
    //Image
    void updateImage(QImage);
    void slot_bt_play_clicked(void);
    void playLocalCamera(void);
    //topicLists
    void slot_bt_refreshTop_clicked(void);
    //orientation
    void updateImu(QVariant);
    void updateTemperature(QString);
    //imagePro
    void slot_imageProChecked(void);
    void slot_bt_saveImg_clicked(void);
    //terminal
    void runComand(void);
    void terminal_output(void);
    void clear_li_terminal(void);

signals:

};
