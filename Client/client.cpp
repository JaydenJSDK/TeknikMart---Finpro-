#include <iostream>

#include "menu.h"

using namespace std;

int main() {

    string name;
    string npm;

    cout << "===== LOGIN ====="
         << endl;

    cout << "Input Name : ";
    cin >> name;

    cout << "Input NPM : ";
    cin >> npm;

    cout << "Login Success!"
         << endl;

    int choice;

    do {

        Menu::showMenu();

        cin >> choice;

        switch(choice) {

        case 1:
            cout << "Add Product"
                 << endl;
            break;

        case 2:
            cout << "View Product"
                 << endl;
            break;

        case 3:
            cout << "Search Product"
                 << endl;
            break;

        case 4:
            cout << "Sort Product"
                 << endl;
            break;

        case 5:
            cout << "Chat Seller"
                 << endl;
            break;

        case 6:
            cout << "Logout Success!"
                 << endl;
            break;

        default:
            cout << "Invalid Menu!"
                 << endl;
        }

    } while(choice != 6);

    return 0;
}