#ifndef QUICK_SORT_H
#define QUICK_SORT_H

#include "sort.h"

class CQuickSort : public ASort {
    public:
        CQuickSort();

        void runSort(int array[],int originalArray[], int size, int low, int high);

        int partition (int array[], int low, int high, int size, int originalArray[]);
};

#endif // QUICK_SORT_H