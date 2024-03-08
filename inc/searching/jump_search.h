#ifndef JUMP_SEARCH_H
#define JUMP_SEARCH_H

#include "search.h"

class CJumpSearch : public ASearch {
    public:
        CJumpSearch();

        void runSearch(int array[],int originalArray[], int size, int searchNode);
};

#endif // JUMP_SEARCH_H