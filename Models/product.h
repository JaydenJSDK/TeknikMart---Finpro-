#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
using namespace std;

class Product {
private:
    int id;
    string name;
    int price;

public:
    Product() {}

    Product(int i, string n, int p) {
        id = i;
        name = n;
        price = p;
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

    void display() {
        cout << id << " - " << name
             << " - Rp" << price << endl;
    }
};

#endif