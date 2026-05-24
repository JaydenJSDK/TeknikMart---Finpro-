#include "SocketManager.h"

SOCKET SocketManager::createServer(
    int port
) {

    WSADATA ws;

    WSAStartup(MAKEWORD(2,2), &ws);

    SOCKET serverSocket;

    serverSocket =
        socket(AF_INET,
               SOCK_STREAM,
               0);

    sockaddr_in server;

    server.sin_family = AF_INET;

    server.sin_addr.s_addr =
        INADDR_ANY;

    server.sin_port = htons(port);

    bind(
        serverSocket,
        (sockaddr*)&server,
        sizeof(server)
    );

    listen(serverSocket, 3);

    return serverSocket;
}

SOCKET SocketManager::createClient(
    string ip,
    int port
) {

    WSADATA ws;

    WSAStartup(MAKEWORD(2,2), &ws);

    SOCKET clientSocket;

    clientSocket =
        socket(AF_INET,
               SOCK_STREAM,
               0);

    sockaddr_in server;

    server.sin_family = AF_INET;

    server.sin_port =
        htons(port);

    server.sin_addr.s_addr =
        inet_addr(ip.c_str());

    connect(
        clientSocket,
        (sockaddr*)&server,
        sizeof(server)
    );

    return clientSocket;
}
