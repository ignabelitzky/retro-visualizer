#ifndef SORT_H
#define SORT_H

#include <iostream>
#include <string>
using namespace std;

class ASort {
    public:
        ASort();

        void swap(int* num1, int* num2);
        void swap(int& num1, int& num2);
        void printArray(int array[], int size);
        void visualizeSort(int array[], int size);
        int visualizeProcessingSort(string sortName, int array[], 
                                    int originalArray[], int size, 
                                    int count_step);
};

#endif // SORT_H