#include <iostream>

#include "menu.h"

#include "../models/Product.h"

#include "../structures/LinkedList.h"

#include "../algorithms/Search.h"

using namespace std;

int main() {

    LinkedList productList;

    string loginName;
    string loginNPM;

    cout << "===== LOGIN ====="
         << endl;

    cout << "Input Name : ";
    getline(cin, loginName);

    cout << "Input NPM : ";
    getline(cin, loginNPM);

    cout << "Login Success!"
         << endl;

    int choice;

    do {

        Menu::showMenu();

        cin >> choice;

        cin.ignore();

        switch(choice) {

        // =====================
        // ADD PRODUCT
        // =====================

        case 1: {

            int id;
            string name;
            int price;

            cout << "===== ADD PRODUCT ====="
                 << endl;

            cout << "Input Product ID : ";
            cin >> id;

            cin.ignore();

            cout << "Input Product Name : ";
            getline(cin, name);

            cout << "Input Product Price : ";
            cin >> price;

            Product p(
                id,
                name,
                price
            );

            productList.insert(p);

            cout << "Product Added!"
                 << endl;

            break;
        }

        // =====================
        // VIEW PRODUCT
        // =====================

        case 2: {

            cout << "===== PRODUCT LIST ====="
                 << endl;

            productList.display();

            break;
        }

        // =====================
        // SEARCH PRODUCT
        // =====================

        case 3: {

            string keyword;

            cout << "===== SEARCH PRODUCT ====="
                 << endl;

            cout << "Input Product Name : ";

            getline(cin, keyword);

            linearSearch(
                productList,
                keyword
            );

            break;
        }

        // =====================
        // SORT PRODUCT
        // =====================

        case 4: {
        
            Node* temp =
                productList.getHead();
        
            Product arr[100];
        
            int n = 0;
        
            // Linked List -> Array
            while(temp != NULL) {
        
                arr[n] = temp->data;
        
                temp = temp->next;
        
                n++;
            }
        
            // Bubble Sort
            bubbleSort(arr, n);
        
            cout << "===== SORTED PRODUCT ====="
                 << endl;
        
            for(int i = 0; i < n; i++) {
        
                arr[i].display();
            }
        
            break;
        }

        // =====================
        // CHAT SELLER
        // =====================

        case 5: {

            string message;

            cout << "===== CHAT SELLER ====="
                 << endl;

            cout << "Input Message : ";

            getline(cin, message);

            cout << "Message Sent : "
                 << message
                 << endl;

            break;
        }

        // =====================
        // LOGOUT
        // =====================

        case 6:

            cout << "Logout Success!"
                 << endl;

            break;

        // =====================
        // INVALID
        // =====================

        default:

            cout << "Invalid Menu!"
                 << endl;
        }

        cout << endl;

    } while(choice != 6);

    return 0;
}
