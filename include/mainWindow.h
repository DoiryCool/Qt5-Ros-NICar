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
#include <signal.h>
#include <unistd.h>
#include <boost/process.hpp>
//
#include "socket_communication.h"
#include "../ui/ui_mainWindow.h"
#include "ros_node.h"
#include "image_process.hpp"

using std::ifstream;
namespace bp = boost::process;

#endif

class mainWindow : public QMainWindow
{
    Q_OBJECT
    
private:
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenRect = screen->availableGeometry();

    int m_sizeWidth = screenRect.width() * 0.718;
    int m_sizeHeight = screenRect.height() * 0.718;
    int m_btWidth1 = m_sizeWidth * 0.04;
    int m_btHeight1 = m_sizeHeight * 0.04;
    int m_lbWidth1 = m_sizeWidth * 0.04;
    int m_lbHeight1 = m_sizeHeight * 0.04;
    bool m_rosStatus = false;
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
    RosNode qnode;
    ImageProcess imageManager;
    QProcess * cmdHandle;
    QProcess * decompressedCommand;
    QProcess * killNode = new QProcess;
    
public:
    mainWindow(void);
    ~mainWindow(void);
    bool startProcess(std::string);
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
    void imageDecompressed(void);
    //topicLists
    void slot_bt_refreshTop_clicked(void);
    //orientation
    void updateImu(QVariant);
    void updateTemperature(QString);
    //ImageProcess
    void slot_imageProChecked(void);
    void slot_bt_saveImg_clicked(void);
    //terminal
    void runComand(void);
    void terminal_output(void);
    void clear_li_terminal(void);

signals:

};
