#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <iostream>
using namespace std;

class Transaction {

private:
    string buyerName;
    string productName;
    int quantity;
    int totalPrice;

public:

    Transaction(
        string buyer,
        string product,
        int qty,
        int total
    ) {

        buyerName = buyer;
        productName = product;
        quantity = qty;
        totalPrice = total;
    }

    void displayTransaction() {

        cout << "Buyer  : "
             << buyerName << endl;

        cout << "Product: "
             << productName << endl;

        cout << "Qty    : "
             << quantity << endl;

        cout << "Total  : Rp"
             << totalPrice << endl;
    }
};

#endif