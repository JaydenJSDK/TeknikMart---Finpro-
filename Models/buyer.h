#ifndef BUYER_H
#define BUYER_H

#include "User.h"

class Buyer : public User {

public:

    Buyer(string n, string np)
        : User(n, np) {}

    void showMenu() override {

        cout << "===== BUYER MENU ====="
             << endl;

        cout << "1. Search Product"
             << endl;

        cout << "2. Buy Product"
             << endl;

        cout << "3. Logout"
             << endl;
    }
};

#endif