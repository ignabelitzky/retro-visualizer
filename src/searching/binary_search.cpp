#include "../../inc/searching/binary_search.h"

CBinarySearch::CBinarySearch(){}

// A recursive binary search function. 
// It returns location of x in given array arr[l..r] is present, otherwise -1
void CBinarySearch::runSearch(int array[], int originalArray[], int size, 
                                int searchNode, int leftNode, int rightNode) {
    int countStep = 0;
    int copiedOriginalArray[size];
    copy( originalArray, originalArray+size, copiedOriginalArray ); // Display original array in visualization
    bool isFound = false;

    int mid = leftNode + (rightNode - leftNode) / 2;
    countStep = ASearch::visualizeProcessingSearch("\n\tBINARY SEARCH", 
                                                    array, copiedOriginalArray, 
                                                    size, countStep, 
                                                    searchNode, array[mid]);

    if (rightNode >= leftNode) {

        // If the element is present at the middle itself
        if (array[mid] == searchNode){
            //return mid;
            isFound = true;
            return;
        }

        // If element is smaller than mid, then it can only be present in left subarray
        if (array[mid] > searchNode){
            //return binarySearch(array, leftNode, mid - 1, searchNode);

            countStep = ASearch::visualizeProcessingSearch("\n\tBINARY SEARCH", 
                                                            array, copiedOriginalArray,
                                                            size, countStep, 
                                                            searchNode, array[mid]);
            this->runSearch(array, copiedOriginalArray, size, searchNode, 
                            leftNode, mid - 1);
            return;
        }

        // Else the element can only be present in right subarray
        //return binarySearch(array, mid + 1, rightNode, searchNode);
        countStep = ASearch::visualizeProcessingSearch("\n\tBINARY SEARCH", 
                                                        array, copiedOriginalArray,
                                                        size, countStep,
                                                        searchNode, array[mid]);

        this->runSearch(array, copiedOriginalArray, size, searchNode, mid + 1, rightNode);
        return;
    }

    countStep = ASearch::visualizeProcessingSearch("\n\tBINARY SEARCH",
                                                    array, copiedOriginalArray,
                                                    size, countStep,
                                                    searchNode, array[mid]);

    if(!isFound)
        cout<<"-> NOT FOUND\n";
}