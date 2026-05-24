#include <iostream>
#include <winsock2.h>
#pragma comment(lib,"ws2_32.lib")

using namespace std;

int main() {
    WSADATA ws;
    WSAStartup(MAKEWORD(2,2), &ws);

    SOCKET serverSocket;

    serverSocket = socket(AF_INET, SOCK_STREAM, 0);

    sockaddr_in server;

    server.sin_family = AF_INET;
    server.sin_addr.s_addr = INADDR_ANY;
    server.sin_port = htons(8080);

    bind(serverSocket, (sockaddr*)&server, sizeof(server));

    listen(serverSocket, 3);

    cout << "Server Running..." << endl;

    SOCKET clientSocket;

    clientSocket = accept(serverSocket, NULL, NULL);

    cout << "Client Connected" << endl;

    char buffer[1024];

    recv(clientSocket, buffer, sizeof(buffer), 0);

    cout << buffer << endl;

    closesocket(serverSocket);
    WSACleanup();
}
