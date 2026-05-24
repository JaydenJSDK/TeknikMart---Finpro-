#ifndef SOCKETMANAGER_H
#define SOCKETMANAGER_H

#include <iostream>
#include <winsock2.h>

#pragma comment(lib,"ws2_32.lib")

using namespace std;

class SocketManager {

public:

    static SOCKET createServer(
        int port
    );

    static SOCKET createClient(
        string ip,
        int port
    );
};

#endif
