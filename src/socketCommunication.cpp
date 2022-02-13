#include "../include/socketCommunication.h"

socketCommunication::socketCommunication()
{

}

void socketCommunication::createSocket(char *ip, unsigned short port)
{
    SERVER_IP = ip;
    SERVER_PORT = port;
    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) == -1)
    {
        setConnectStatus(-1);
        close(sock);
    }
    bzero(&serv_addr, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(SERVER_PORT);
    serv_addr.sin_addr.s_addr = inet_addr(SERVER_IP);

    if (connect(sock, (sockaddr *)&serv_addr, sizeof(sockaddr)) == -1)
    {
        setConnectStatus(-2);
        close(sock);
    }
     setConnectStatus(1);
}

std::string socketCommunication::sendMessage(std::string Mes)
{
    const char *buf = (char*)Mes.data();
    const int buflen = strlen(buf);
    send(sock,buf,buflen,0);
    recv(sock,strbuffer,buflen,0);
    return strbuffer;
}


void socketCommunication::setConnectStatus(int num)
{
    connectStatusNum = num;
}

int socketCommunication::connectStatus()
{
    return connectStatusNum;
}

socketCommunication::~socketCommunication(void){
    close(sock);
}