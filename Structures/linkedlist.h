#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "../models/Product.h"

class Node {

public:
    Product data;
    Node* next;

    Node(Product p) {

        data = p;
        next = NULL;
    }
};

class LinkedList {

private:
    Node* head;

public:

    LinkedList() {
        head = NULL;
    }

    void insert(Product p);

    void display();

    Node* getHead();
};

#endif