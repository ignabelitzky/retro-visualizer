#ifndef LINEAR_SEARCH_H
#define LINEAR_SEARCH_H

#include "search.h"

class CLinearSearch : public ASearch {
    public:
        CLinearSearch();

        void runSearch(int array[], int size, int searchNode);
};

#endif // LINEAR_SEARCH_H