#include "../../inc/searching/linear_search.h"

CLinearSearch::CLinearSearch(){}

void CLinearSearch::runSearch(int array[], int size, int searchNode) {
    int countStep = 0;
    int originalArray[size];
    copy( array, array+size, originalArray );
    bool isFound = false;

    int i;
    for (i = 0; i < size; i++){
        if (array[i] == searchNode){
            countStep = ASearch::visualizeProcessingSearch("\n\tLINEAR SEARCH",
                                                            array, originalArray,
                                                            size, countStep, 
                                                            searchNode,array[i]);
            isFound = true;
            return;
        }
        countStep = ASearch::visualizeProcessingSearch("\n\tLINEAR SEARCH", 
                                                        array, originalArray,
                                                        size, countStep,
                                                        searchNode, array[i]);
    }

    if(!isFound)
        cout<<"-> NOT FOUND\n";
}