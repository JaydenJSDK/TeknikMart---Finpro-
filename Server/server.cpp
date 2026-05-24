#include <iostream>

#include "server_handler.h"

#include "../networking/SocketManager.h"

using namespace std;

int main() {

    SOCKET serverSocket =
        SocketManager::createServer(
            8080
        );

    cout << "Server Running..."
         << endl;

    while(true) {

        SOCKET clientSocket =
            accept(
                serverSocket,
                NULL,
                NULL
            );

        cout << "Client Connected!"
             << endl;

        ServerHandler::handleClient(
            clientSocket
);
    }

    closesocket(serverSocket);

    WSACleanup();

    return 0;
}
