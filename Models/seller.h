#ifndef SELLER_H
#define SELLER_H

#include "User.h"

class Seller : public User {

public:

    Seller(string n, string np)
        : User(n, np) {}

    void showMenu() override {

        cout << "===== SELLER MENU =====" << endl;
        cout << "1. Upload Product" << endl;
        cout << "2. Update Stock" << endl;
        cout << "3. Logout" << endl;
    }
};

#endif