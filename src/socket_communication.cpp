#include "../include/socket_communication.h"
#include <iostream>
#include <QDebug>
#include <QString>
#include <sstream>

socketCommunication::socketCommunication()
{
}

bool socketCommunication::socketInit(char *ip, unsigned short port)
{
    SERVER_IP = ip;
    SERVER_PORT = port;
    int sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (sock == -1)
    {
        setConnectStatus(-1);
        return false;
    }
    else
    {
        struct sockaddr_in serv_addr;
        memset(&serv_addr, 0, sizeof(serv_addr));
        serv_addr.sin_family = AF_INET;
        serv_addr.sin_addr.s_addr = inet_addr("192.168.123.36");
        serv_addr.sin_port = htons(11312);
        int cRes = connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr));
        if (cRes == -1)
        {
            setConnectStatus(-2);
            return false;
        }
        else
        {
            return true;
        }
    }
}

std::string socketCommunication::sendMessage(std::string Mes)
{
    std::string returnStr;
    char sendC[4096];
    int len = Mes.copy(sendC, 4096);
    if (write(sock, sendC, len) < 0)
    {
        qDebug() << "Failed to send!";
    }
    if (0 == strcmp("hi", Mes.c_str()))
    {
        char recvBuf[4024] = {};
        int reLen = recv(sock, recvBuf, 4024, 0);
        returnStr = recvBuf;
        return reLen + "";
    }
    else if (0 == strcmp("version", Mes.c_str()))
    {
        char recvBuf[4024] = {};
        int reLen = recv(sock, recvBuf, 4024, 0);
        returnStr = recvBuf;
        qDebug() << QString::fromStdString("tttt");
        return returnStr;
    }
    else if (0 == strcmp("exit", Mes.c_str()))
    {
        char recvBuf[4024] = {};
        int reLen = recv(sock, recvBuf, 4024, 0);
        returnStr = Mes;
        return returnStr;
    }
    else
    {
        return len + "";
    }

    close(sock);
    return 0;
}

void socketCommunication::setConnectStatus(int num)
{
    connectStatusNum = num;
}

int socketCommunication::connectStatus()
{
    return connectStatusNum;
}

socketCommunication::~socketCommunication(void)
{
    close(sock);
}
