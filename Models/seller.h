#define SELLER_H

#include "User.h"

class Seller : public User {

public:

    Seller(string n, string np)
        : User(n, np) {}

    void showMenu() override {

        cout << "Seller Menu" << endl;
    }
};

#endif