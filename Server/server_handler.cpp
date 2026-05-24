#include <iostream>

#include "server_handler.h"

using namespace std;

void ServerHandler::handleClient(
    SOCKET clientSocket
) {

    char buffer[1024];

    recv(
        clientSocket,
        buffer,
        sizeof(buffer),
        0
    );

    cout << "Client Message : "
         << buffer
         << endl;

    string response =
        "Request Received";

    send(
        clientSocket,
        response.c_str(),
        response.length(),
        0
    );
}
