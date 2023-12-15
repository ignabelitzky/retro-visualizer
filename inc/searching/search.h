#ifndef SEARCH_H
#define SEARCH_H

#include <iostream>
#include <string>
#include <unistd.h>         // Used for usleep()

using namespace std;

class ASearch {
    public:
        ASearch();

        void swap(int *num1, int *num2);
        void printArray(int array[], int size);
        void visualizeOriginalArray(int array[], int size);
        void visualizeSearch(int array[], int size, int searchNode, int checkNode);
        int visualizeProcessingSearch(string searchName, int array[], 
                                        int originalArray[],int size, 
                                        int countStep, int searchNode, 
                                        int checkNode);
};

#endif // SEARCH_H
