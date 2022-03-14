#ifndef __SOCKET_COMMUNICATION_H
#define __SOCKET_COMMUNICATION_H

#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/shm.h>
#include <string>

#define MYPORT  11312
#define BUFFER_SIZE 1024

#endif

class socketCommunication
{
public:
    socketCommunication(void);
    ~socketCommunication(void);
    bool socketInit(char *, unsigned short);
    std::string sendMessage(std::string);
    int connectStatus(void);
    void setConnectStatus(int);
    std::string connectToRos(void);

private:
    unsigned short SERVER_PORT;
    char *SERVER_IP;
    char strbuffer[1024];
    int sock, recvBytes;
    sockaddr_in serv_addr;

    int connectStatusNum;
};