#ifndef BINARY_INSERTION_SORT_H
#define BINARY_INSERTION_SORT_H

#include "sort.h"

class CBinaryInsertionSort : public ASort {
    public:
        CBinaryInsertionSort();

        void runSort(int array[], int size);

        int binarySearch(int array[], int item, int low, int high); //? x2check if can implement CBinarySearch
};

#endif // BINARY_INSERTION_SORT_H