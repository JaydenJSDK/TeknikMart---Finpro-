#ifndef SERVER_HANDLER_H
#define SERVER_HANDLER_H

#include <iostream>
#include <winsock2.h>

using namespace std;

class ServerHandler {

public:

    static void handleClient(
        SOCKET clientSocket
    );
};

#endif
