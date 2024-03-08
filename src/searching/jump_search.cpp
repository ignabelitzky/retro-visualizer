#include "../../inc/searching/jump_search.h"

CJumpSearch::CJumpSearch(){}

void CJumpSearch::runSearch(int array[],int originalArray[], int size, int searchNode) {
    int countStep = 0;
    int copiedOriginalArray[size];
    copy( originalArray, originalArray+size, copiedOriginalArray );        // to display original array in visualization
    bool isFound = false;


     // Finding block size to be jumped
    int step = sqrt(size);

    // Finding the block where element is present (if it is present)
    int prev = 0;

    countStep = ASearch::visualizeProcessingSearch("\n\tJUMP SEARCH", 
                                                    array, copiedOriginalArray,
                                                    size, countStep, 
                                                    searchNode, array[prev]);

    while (array[min(step, size)-1] < searchNode)
    {
        countStep = ASearch::visualizeProcessingSearch("\n\tJUMP SEARCH",
                                                        array, copiedOriginalArray,
                                                        size, countStep,
                                                        searchNode, array[prev]);
        prev = step;
        step += sqrt(size);
        if (prev >= size)
            //return;
            break;
    }

    // Doing a linear search for searchNode in block beginning with prev.
    while (array[prev] < searchNode)
    {
        countStep = ASearch::visualizeProcessingSearch("\n\tJUMP SEARCH",
                                                        array, copiedOriginalArray,
                                                        size, countStep,
                                                        searchNode, array[prev]);
        prev++;
        // If we reached next block or end of array, element is not present.
        if (prev == min(step, size))
            //return;
            break;
    }
    // If element is found
    if (array[prev] == searchNode){
        countStep = ASearch::visualizeProcessingSearch("\n\tJUMP SEARCH",
                                                        array, copiedOriginalArray,
                                                        size, countStep,
                                                        searchNode, array[prev]);
        isFound = true;
        return;
    }

    if(!isFound)
        cout<<"-> NOT FOUND\n";
}