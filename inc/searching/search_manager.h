#ifndef SEARCH_MANAGER_H
#define SEARCH_MANAGER_H

#include "../state.h"

class CSearchManager : public AState {
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