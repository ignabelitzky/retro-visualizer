#ifndef SORT_MANAGER_H
#define SORT_MANAGER_H

#include "../state.h"
#include "bubble_sort.h"

class CSortManager: public AState,
                    public CBubbleSort {
    private:
        CBubbleSort bubbleSort;

    public:
        CSortManager();

        void load();
        void play();
        void replay();

        void chooseSort();
        void runSort(int i);

        virtual void update() override {
            this->render();
            this->load();
            this->play();
        }

        virtual void render() override {
            system("clear");
            cout << "*―――――――――――――――――――――――――――――――――――――――――――――――――――――――*\n";
            cout << "│                   SORTING VISUALIZER                  │\n";
            cout << "*―――――――――――――――――――――――――――――――――――――――――――――――――――――――*\n";
        }
};

#endif // SORT_MANAGER_H