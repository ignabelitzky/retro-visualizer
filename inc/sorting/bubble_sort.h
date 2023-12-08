#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

#include "sort.h"

class CBubbleSort:public ASort {
    public:
        CBubbleSort();

        void runSort(int array[], int size);   // The main function to implement Bubble Sort
};

#endif // BUBBLE_SORT_H