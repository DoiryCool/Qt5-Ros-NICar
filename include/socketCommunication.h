#ifndef __SOCKETCOMMUNICATION_H
#define __SOCKETCOMMUNICATION_H

#include <iostream>
#include <string.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string>

#define MAXSIZE 1024

#endif

class socketCommunication
{
public:
    socketCommunication(void);
    ~socketCommunication(void);
    void createSocket(char *, unsigned short);
    std::string sendMessage(std::string);
    int connectStatus(void);
    void setConnectStatus(int);

private:
    unsigned short SERVER_PORT;
    
    char *SERVER_IP;
    char strbuffer[MAXSIZE];
    int sock, recvBytes;
    sockaddr_in serv_addr;

    int connectStatusNum;
};