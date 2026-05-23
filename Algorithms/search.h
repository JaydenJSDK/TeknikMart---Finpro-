#ifndef SEARCH_H
#define SEARCH_H

#include <iostream>
#include "../structures/LinkedList.h"

using namespace std;

class Search {

public:

    // Linear Search Product
    static Node* linearSearch(
        LinkedList &list,
        string keyword
    ) {

        Node* temp = list.getHead();

        while(temp != NULL) {

            if(temp->data.getName() == keyword) {
                return temp;
            }

            temp = temp->next;
        }

        return NULL;
    }
};

#endif