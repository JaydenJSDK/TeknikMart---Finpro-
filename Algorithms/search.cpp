#include <iostream>

#include "Search.h"

using namespace std;

void linearSearch(
    LinkedList &list,
    string keyword
) {

    Node* temp = list.getHead();

    while(temp != NULL) {

        if(temp->data.getName()
           == keyword) {

            cout << "Product Found:"
                 << endl;

            temp->data.display();

            return;
        }

        temp = temp->next;
    }

    cout << "Product Not Found"
         << endl;
}
