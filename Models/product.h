#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
using namespace std;

class Product {

private:
    int id;
    string name;
    int price;
    int stock;
    string sellerName;

public:

    Product() {}

    Product(
        int i,
        string n,
        int p,
        int s,
        string seller
    ) {

        id = i;
        name = n;
        price = p;
        stock = s;
        sellerName = seller;
    }

    int getId() {
        return id;
    }

    string getName() {
        return name;
    }

    int getPrice() {
        return price;
    }

    int getStock() {
        return stock;
    }

    string getSeller() {
        return sellerName;
    }

    void updateStock(int qty) {
        stock -= qty;
    }

    void display() {

        cout << "ID      : " << id << endl;
        cout << "Name    : " << name << endl;
        cout << "Price   : Rp" << price << endl;
        cout << "Stock   : " << stock << endl;
        cout << "Seller  : " << sellerName << endl;
    }
};

#endif