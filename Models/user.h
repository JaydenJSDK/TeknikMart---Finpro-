#ifndef USER_H
#define USER_H

#include <iostream>
using namespace std;

class User {
protected:
    string name;
    string npm;

public:

    // Constructor
    User(string n, string np) {
        name = n;
        npm = np;
    }

    // Getter
    string getName() {
        return name;
    }

    string getNPM() {
        return npm;
    }

    // Pure Virtual Function
    virtual void showMenu() = 0;
};

#endif