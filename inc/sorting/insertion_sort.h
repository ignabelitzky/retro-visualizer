#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

#include "sort.h"

class CInsertionSort : public ASort {
    public:
        CInsertionSort();

        void runSort(int array[], int size);
};

#endif // INSERTION_SORT_H