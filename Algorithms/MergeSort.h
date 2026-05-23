#ifndef MERGESORT_H
#define MERGESORT_H

#include <iostream>
#include "../models/Product.h"

using namespace std;

class MergeSort {

public:

    // Merge Function
    static void merge(
        Product arr[],
        int left,
        int mid,
        int right
    ) {

        int n1 = mid - left + 1;
        int n2 = right - mid;

        Product* L = new Product[n1];
        Product* R = new Product[n2];

        // Copy data ke array kiri
        for(int i = 0; i < n1; i++) {
            L[i] = arr[left + i];
        }

        // Copy data ke array kanan
        for(int j = 0; j < n2; j++) {
            R[j] = arr[mid + 1 + j];
        }

        int i = 0;
        int j = 0;
        int k = left;

        // Merge array
        while(i < n1 && j < n2) {

            if(L[i].getPrice()
                <=
               R[j].getPrice()) {

                arr[k] = L[i];
                i++;
            }

            else {

                arr[k] = R[j];
                j++;
            }

            k++;
        }

        // Sisa array kiri
        while(i < n1) {
            arr[k] = L[i];
            i++;
            k++;
        }

        // Sisa array kanan
        while(j < n2) {
            arr[k] = R[j];
            j++;
            k++;
        }

        delete[] L;
        delete[] R;
    }

    // Merge Sort Recursive
    static void sort(
        Product arr[],
        int left,
        int right
    ) {

        if(left < right) {

            int mid = left + (right - left) / 2;

            // Sort kiri
            sort(arr, left, mid);

            // Sort kanan
            sort(arr, mid + 1, right);

            // Merge
            merge(arr, left, mid, right);
        }
    }
};

#endif