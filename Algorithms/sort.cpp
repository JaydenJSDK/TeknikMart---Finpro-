#include "Sort.h"

void bubbleSort(
    Product arr[],
    int n
) {

    for(int i = 0;
        i < n - 1;
        i++) {

        for(int j = 0;
            j < n - i - 1;
            j++) {

            if(arr[j].getPrice()
               >
               arr[j + 1].getPrice()) {

                Product temp = arr[j];

                arr[j] = arr[j + 1];

                arr[j + 1] = temp;
            }
        }
    }
}