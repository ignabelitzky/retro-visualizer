#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H

#include "search.h"

class CBinarySearch : public ASearch {
    public:
        CBinarySearch();

        void runSearch(int array[], int originalArray[], int size, int searchNode,  
                        int leftNode, int rightNode);
};

#endif // BINARY_SEARCH_H