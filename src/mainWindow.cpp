#include "../include/mainWindow.h"

mainWindow::mainWindow(void)
    : ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    readSettings();
    windowInit();

    foreach (QHostAddress address, QNetworkInterface::allAddresses())
    {
        if (address.protocol() == QAbstractSocket::IPv4Protocol)
        {
            QString addre = address.toString();
            if (addre.split(".")[0] == "192" || addre.split(".")[0] == "10" || addre.split(".")[0] == "172")
            {
                localIP = addre;
            }
        }
    }

    ui->li_localIpShow->setText(localIP);
    QObject::connect(ui->bt_connectR, SIGNAL(clicked(void)), this, SLOT(bt_connectR_clicked(void)));
    QObject::connect(ui->bt_saveUrl, SIGNAL(clicked(void)), this, SLOT(saveValues(void)));

    QObject::connect(ui->bt_sendM, SIGNAL(clicked(void)), this, SLOT(sendMessage(void)));
    QObject::connect(ui->bt_clearSendM, SIGNAL(clicked(void)), this, SLOT(clear_li_sendM(void)));

    QObject::connect(&qnode, SIGNAL(sendInfoMes(QString)), this, SLOT(showRosMes(QString)));
    QObject::connect(&qnode, SIGNAL(sendImage(QImage)), this, SLOT(updateImage(QImage)));
    QObject::connect(&qnode, SIGNAL(sendImu(QVariant)), this, SLOT(updateImu(QVariant)));
    QObject::connect(&qnode, SIGNAL(sendTemperature(QString)), this, SLOT(updateTemperature(QString)));

    QObject::connect(ui->bt_playCam, SIGNAL(clicked(void)), this, SLOT(bt_play_clicked(void)));
    QObject::connect(ui->cb_2gray, SIGNAL(clicked(void)), this, SLOT(imageProChecked(void)));
    QObject::connect(ui->cb_2binary, SIGNAL(clicked(void)), this, SLOT(imageProChecked(void)));
    QObject::connect(ui->cb_2canny, SIGNAL(clicked(void)), this, SLOT(imageProChecked(void)));
    QObject::connect(ui->cb_enhancement, SIGNAL(clicked(void)), this, SLOT(imageProChecked(void)));
    QObject::connect(ui->hs_2binary_threshold, SIGNAL(valueChanged(int)), this, SLOT(imageProChecked(void)));
    QObject::connect(ui->hs_2binary_maxval, SIGNAL(valueChanged(int)), this, SLOT(imageProChecked(void)));
    QObject::connect(ui->comba_2binary_type, SIGNAL(currentTextChanged(QString)), this, SLOT(imageProChecked(void)));

    QObject::connect(ui->hs_2canny_lt, SIGNAL(valueChanged(int)), this, SLOT(imageProChecked(void)));
    QObject::connect(ui->hs_2canny_ht, SIGNAL(valueChanged(int)), this, SLOT(imageProChecked(void)));
    QObject::connect(ui->comba_2canny_ks, SIGNAL(currentTextChanged(QString)), this, SLOT(imageProChecked(void)));

    QObject::connect(ui->bt_refreshTopicsLists, SIGNAL(clicked()), this, SLOT(refreshTopLists(void)));
}

void mainWindow::readSettings(void)
{
    Json::Reader reader;
    Json::Value root;
    std::ifstream inFile("src/nicar_gui/src/settings.json", std::ios::binary);

    if (!inFile.is_open())
    {
        return;
    }
    if (reader.parse(inFile, root))
    {
        defaultRosIp = QString::fromStdString(root["defaultRosIp"].asString());
        defaultPort = QString::fromStdString(root["port"].asString());
        currentRosIp = defaultRosIp;
        currentPort = defaultPort;
        ui->li_ipAdd->setPlaceholderText(currentRosIp);
        ui->li_ipPort->setPlaceholderText(currentPort);
    }
}

void mainWindow::windowInit()
{
    setWindowTitle("ROS");
    setWindowIcon(QIcon("src/nicar_gui/pictures/icon.jpeg"));
    this->move((screenRect.width() - this->width()) / 2,
               (screenRect.height() - this->height()) / 2);
}

void mainWindow::connectToMaster(void)
{
    if (!ui->li_ipAdd->text().isEmpty())
    {
        currentRosIp = ui->li_ipAdd->text();
    }
    if (!ui->li_ipPort->text().isEmpty())
    {
        currentPort = ui->li_ipPort->text();
    }

    RosMasterURL.append("http://" + currentRosIp + ":" + currentPort);

    if (qnode.nodeInit(RosMasterURL.toStdString(), localIP.toStdString()))
    {
        ui->statusColor->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 164, 0)"));
        ui->lb_status->setText("Online");
        ui->bt_sendM->setEnabled(true);
        ui->li_ipAdd->setReadOnly(true);
        ui->bt_playCam->setEnabled(true);
        ui->li_ipPort->setReadOnly(true);
        ui->bt_connectR->setText("Disconnect");
        ui->li_ipAdd->setText(currentRosIp);
        ui->li_ipPort->setText(currentPort);
        status = true;
        initTopicList();
    }
    else
    {
        ui->tx_showInfo->append(showInfo("Error 1001: Connect failed"));
    }
}

QString mainWindow::showInfo(QString qstr)
{
    QTime currentTime = QTime::currentTime();
    QString showtext;
    showtext.append("[" + currentTime.toString() + "]  :   " + qstr);
    return showtext;
}

QString mainWindow::remoteInfo(QString qstr)
{
    QTime currentTime = QTime::currentTime();
    QString showtext;
    showtext.append("[" + currentTime.toString() + "]" + currentRosIp + "  :   " + qstr);
    return showtext;
}

void mainWindow::initTopicList()
{
    ui->lt_topics->clear();
    ui->comba_imageTopics->clear();
    ui->lt_topics->addItem(QString("%1   (%2)").arg("Name", "Type"));
    QMap<QString, QString> topic_list = qnode.get_topic_list();
    for (QMap<QString, QString>::iterator iter = topic_list.begin(); iter != topic_list.end(); iter++)
    {
        ui->lt_topics->addItem(QString("%1   (%2)").arg(iter.key(), iter.value()));
        if (iter.key().split("/")[1] == "camera")
        {
            ui->comba_imageTopics->addItem(QString("%1").arg(iter.key()));
        }
    }
}

/*********************************
 *             SLOTS             *
 * ******************************/
// connected to ros
void mainWindow::bt_connectR_clicked(void)
{
    if (status == false)
    {
        connectToMaster();
    }
    else
    {
        ui->statusColor->setStyleSheet(QString::fromUtf8("background-color:rgb(164, 0, 0)"));
        ui->lb_status->setText("Offline");
        ui->bt_sendM->setEnabled(false);
        ui->li_ipAdd->setReadOnly(false);
        ui->li_ipPort->setReadOnly(false);
        ui->tx_showInfo->append(showInfo("Disconnected!"));
        ui->bt_connectR->setText("Connect");
        ui->lt_topics->clear();
        qnode.~qNode();
        status = false;
    }
}

void mainWindow::saveValues(void)
{
    Json::Value root;
    Json::Reader reader;
    std::ifstream outFile("src/nicar_gui/src/settings.json");
    if (!outFile.is_open())
    {
        ui->tx_showInfo->append(showInfo("Open settings failed"));
        return;
    }
    if (reader.parse(outFile, root))
    {
        if (ui->li_ipAdd->text().toStdString() != "")
        {
            root["defaultRosIp"] = ui->li_ipAdd->text().toStdString();
            root["port"] = ui->li_ipPort->text().toStdString();
            currentRosIp = ui->li_ipAdd->text();
            currentPort = ui->li_ipPort->text();

            Json::StyledWriter writer;
            std::string strWrite = writer.write(root);
            std::ofstream ofs;
            ofs.open("src/upper_machine/src/settings.json");
            ofs << strWrite;
            ofs.close();

            ui->tx_showInfo->append(showInfo("ROS_Master_IP Saved!"));
        }
        else
        {
            ui->tx_showInfo->append(showInfo("Not Saved!"));
        }
    }
}

// socket commu(To be improved)
void mainWindow::sendMessage(void)
{
    std::thread task01(&socketCommunication::sendMessage, socketIns, ui->li_sendM->text().toStdString().c_str());
    task01.detach();
    ui->tx_showInfo->append(remoteInfo(QString::fromStdString(socketIns.sendMessage("t2"))));
    ui->li_sendM->clear();
}

void mainWindow::clear_li_sendM(void)
{
    ui->li_sendM->clear();
}

// Ros Topics
void mainWindow::updateTemperature(QString tempVal)
{
    ui->li_temperature->setText(tempVal + " ℃");
}

void mainWindow::showRosMes(QString fromR)
{
    ui->tx_showInfo->append(remoteInfo(fromR));
}

void mainWindow::updateImage(QImage img)
{
    ui->lb_camImage->setPixmap(QPixmap::fromImage(img).scaled(ui->lb_camImage->width(), ui->lb_camImage->height()));
}

void mainWindow::bt_play_clicked(void)
{
    if (ui->bt_playCam->text() == "Play")
    {
        ui->bt_playCam->setText("Cancel");
        qnode.sub_image(ui->comba_imageTopics->currentText().mid(1));
    }
    else
    {
        qnode.sub_stop_image();
        ui->bt_playCam->setText("Play");
    }
}

void mainWindow::updateImu(QVariant getData)
{
    imuMsg imuM = getData.value<imuMsg>();
    ui->li_x->setText(QString("%1").arg(imuM.Orientation.x));
    ui->li_y->setText(QString("%1").arg(imuM.Orientation.y));
    ui->li_z->setText(QString("%1").arg(imuM.Orientation.z));
    ui->li_line_x->setText(QString("%1").arg(imuM.linearAcceleration.x));
    ui->li_line_y->setText(QString("%1").arg(imuM.linearAcceleration.y));
    ui->li_line_z->setText(QString("%1").arg(imuM.linearAcceleration.z));
    ui->li_angle_x->setText(QString("%1").arg(imuM.angularVelocity.x));
    ui->li_angle_y->setText(QString("%1").arg(imuM.angularVelocity.y));
    ui->li_angle_z->setText(QString("%1").arg(imuM.angularVelocity.z));
}

// topicsLists
void mainWindow::refreshTopLists(void)
{
    initTopicList();
}

void mainWindow::imageProChecked(void)
{
    if (ui->cb_2gray->isChecked())
    {
        qnode.img._grayConfig = true;
    }
    else
    {
        qnode.img._grayConfig = false;
    }

    if (ui->cb_2binary->isChecked())
    {
        qnode.img._binaryConfig._ifBinary = true;
        qnode.img._binaryConfig.threshold = ui->hs_2binary_threshold->value();
        qnode.img._binaryConfig.max_value = ui->hs_2binary_maxval->value();
        qnode.img._binaryConfig.threshold_type = ui->comba_2binary_type->currentIndex();

        ui->sb_2binary_threshold->setValue(ui->hs_2binary_threshold->value());
        ui->sb_2binary_maxval->setValue(ui->hs_2binary_maxval->value());
    }
    else
    {
        qnode.img._binaryConfig._ifBinary = false;
    }
    if (ui->cb_2canny->isChecked())
    {
        qnode.img._cannyConfig._ifCanny = true;
        qnode.img._cannyConfig.lowThreshold = ui->hs_2canny_lt->value();
        qnode.img._cannyConfig.highThreshold = ui->hs_2canny_ht->value();
        qnode.img._cannyConfig.Kernel_size = ui->comba_2canny_ks->currentText().toInt();

        ui->sb_2canny_lt->setValue(ui->hs_2canny_lt->value());
        ui->sb_2canny_ht->setValue(ui->hs_2canny_ht->value());
    }
    else
    {
        qnode.img._cannyConfig._ifCanny = false;
    }
    if (ui->cb_enhancement->isChecked())
    {
       qnode.img._logEnhance = true;
    }
    else
    {
        qnode.img._logEnhance = false;
    }
}