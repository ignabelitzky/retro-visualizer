#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

#include "sort.h"

class CSelectionSort: public ASort
{
public:
    CSelectionSort();

    void runSort(int array[], int size); // The main function to implement Selection Sort
};

#endif // SELECTION_SORT_H