#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include "../models/Product.h"

using namespace std;

class Node {
public:
    Product data;
    Node* next;

    // Constructor Node
    Node(Product p) {
        data = p;
        next = NULL;
    }
};

class LinkedList {

private:
    Node* head;

public:

    // Constructor
    LinkedList() {
        head = NULL;
    }

    // Insert Product
    void insert(Product p) {

        Node* newNode = new Node(p);

        // Kalau list kosong
        if(head == NULL) {
            head = newNode;
            return;
        }

        // Traversal ke node terakhir
        Node* temp = head;

        while(temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    // Display Semua Product
    void display() {

        if(head == NULL) {
            cout << "Product Empty!" << endl;
            return;
        }

        Node* temp = head;

        while(temp != NULL) {

            temp->data.display();
            cout << "-------------------" << endl;

            temp = temp->next;
        }
    }

    // Search Product
    Node* search(string keyword) {

        Node* temp = head;

        while(temp != NULL) {

            if(temp->data.getName() == keyword) {
                return temp;
            }

            temp = temp->next;
        }

        return NULL;
    }

    // Update Stock
    void updateStock(string keyword, int qty) {

        Node* productNode = search(keyword);

        if(productNode != NULL) {

            int currentStock =
                productNode->data.getStock();

            productNode->data.updateStock(qty);

            cout << "Stock Updated!" << endl;
            cout << "Old Stock : "
                 << currentStock << endl;

            cout << "New Stock : "
                 << productNode->data.getStock()
                 << endl;
        }

        else {
            cout << "Product Not Found!" << endl;
        }
    }

    // Delete Product
    void deleteProduct(string keyword) {

        // Kalau kosong
        if(head == NULL) {
            cout << "Linked List Empty!" << endl;
            return;
        }

        // Kalau head yang dihapus
        if(head->data.getName() == keyword) {

            Node* deleteNode = head;

            head = head->next;

            delete deleteNode;

            cout << "Product Deleted!" << endl;
            return;
        }

        Node* current = head;
        Node* previous = NULL;

        while(current != NULL &&
              current->data.getName() != keyword) {

            previous = current;
            current = current->next;
        }

        // Kalau tidak ketemu
        if(current == NULL) {
            cout << "Product Not Found!" << endl;
            return;
        }

        previous->next = current->next;

        delete current;

        cout << "Product Deleted!" << endl;
    }

    // Getter Head
    Node* getHead() {
        return head;
    }
};

#endif