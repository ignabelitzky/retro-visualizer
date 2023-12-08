#ifndef MENU_H
#define MENU_H

// #include <unistd.h> // For `usleep()`

#include "./state.h"

// Derived class from abstract `State`
class CMenu : public AState {
    public:
        CMenu();

        // `virtual` can only be used inside class definition
        virtual void update() override {
            this->render();

            int menuOption;
            cout << "\nWhich number do you choose? ";
            cin >> menuOption;

            if (menuOption == 1 || menuOption == 2 || 
                menuOption == 3 || menuOption == 4 ||
                menuOption == 0) {
                this->setNextState(menuOption);
                this->setIsFinished(true);
            }
            else
                cout << "Wrong input, try again !";
        }

        virtual void render() override {
            AState::renderLogo();
            cout << "*―――――――――――――――――――――――――――――――――――――――――――――――――――――――*\n";
            cout << "│                       MAIN MENU                       │\n";
            cout << "*―――――――――――――――――――――――――――――――――――――――――――――――――――――――*\n";
            cout << "│                 1. Sorting Visualizer                 │\n";
            cout << "│                 2. Searching Visualizer               │\n";
            cout << "│                 3. About                              │\n";
            cout << "│                 0. Exit                               │\n";
            cout << "*―――――――――――――――――――――――――――――――――――――――――――――――――――――――*\n";
        }
};

#endif // MENU_H
