#ifndef SEARCH_MANAGER_H
#define SEARCH_MANAGER_H

#include "../state.h"
#include "linear_search.h"
#include "binary_search.h"

// Sort out array before implementing binary search (can use any sorting algorithms)
#include "../sorting/bubble_sort.h" //! Replace this with Binary Insertion Sort

class CSearchManager : public AState,
                        public CBubbleSort, 
                        public CLinearSearch, public CBinarySearch {
    private:
        CLinearSearch linearSearch;
        CBinarySearch binarySearch;

        CBubbleSort bubbleSort;
        
    public:
        CSearchManager();

        void load();
        void play();
        void replay();

        void chooseSearch();
        void runSearch(int i);

        virtual void update() override {
            this->render();
            this->load();
            this->play();
        }

        virtual void render() override {
            system("clear");
            cout << "*―――――――――――――――――――――――――――――――――――――――――――――――――――――――*\n";
            cout << "│                  SEARCHING VISUALIZER                 │\n";
            cout << "*―――――――――――――――――――――――――――――――――――――――――――――――――――――――*\n";
        }
};

#endif // SEARCH_MANAGER_H