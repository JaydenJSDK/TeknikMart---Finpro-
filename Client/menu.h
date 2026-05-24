#ifndef MENU_H
#define MENU_H

#include <iostream>
using namespace std;

class Menu {

public:

    static void showMenu() {

        cout << "===== TEKNIK MART ====="
             << endl;

        cout << "1. Add Product"
             << endl;

        cout << "2. View Product"
             << endl;

        cout << "3. Search Product"
             << endl;

        cout << "4. Sort Product"
             << endl;

        cout << "5. Chat Seller"
             << endl;

        cout << "6. Logout"
             << endl;

        cout << "Choose Menu : ";
    }
};

#endif