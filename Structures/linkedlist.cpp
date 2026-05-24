#include "LinkedList.h"

void LinkedList::insert(Product p) {

    Node* newNode = new Node(p);

    if(head == NULL) {

        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

void LinkedList::display() {

    Node* temp = head;

    while(temp != NULL) {

        temp->data.display();

        temp = temp->next;
    }
}

Node* LinkedList::getHead() {

    return head;
}
