#ifndef __ROS_NODE_H_
#define __ROS_NODE_H_
// Qt5 LIbraries
#include <QString>
#include <QObject>
#include <QMap>
#include <QMetaType>
#include <QVariant>
#include <QThread>
// Ros Libraries
#include "ros/ros.h"
#include "std_msgs/String.h"
#include <sensor_msgs/Imu.h>
#include <sensor_msgs/Temperature.h>
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.h>
// std Libraries
#include <string>
// CV-utils
#include "image_process.hpp"

static QVector<int> imageVector;
struct imuVector
{
    float x;
    float y;
    float z;
    boost::array<float, 9> covariance;
};

struct imuMsg
{
    imuVector Orientation;
    imuVector angularVelocity;
    imuVector linearAcceleration;
};

Q_DECLARE_METATYPE(imuVector)
Q_DECLARE_METATYPE(imuMsg)

class RosNode : public QThread
{
    Q_OBJECT
private:
    const std::string master_url;
    // imu
    sensor_msgs::Imu currentImu;
    // temper
    sensor_msgs::Temperature currentTemp;

    ros::Subscriber imu_sub;
    ros::Subscriber temper_sub;
    image_transport::Subscriber image_sub;
    cv_bridge::CvImagePtr cv_ptr;
    cv::Mat des;
    ImageProcess imageManager;

public:
    RosNode(void);
    ~RosNode(void);
    bool nodeInit(const std::string &master_url, const std::string &host_url);
    void topicsManager();
    void run();
    // Images
    void sub_image(QString);
    void sub_stop_image();
    void imageCallback(const sensor_msgs::ImageConstPtr &);
    cv::Mat getPicture(void);
    // showTopics
    QMap<QString, QString> get_topic_list();
    // imu
    void imuCallback(const sensor_msgs::Imu::ConstPtr &);
    // temperature
    void tempCallback(const sensor_msgs::Temperature::ConstPtr &);

Q_SIGNALS:
    void sendImage(QImage);
    void sendImu(QVariant);
    void sendTemperature(QString);
    void sendInfoMes(QString);
    void rosShutdown();

public:
    imgConfig img;
};

#endif