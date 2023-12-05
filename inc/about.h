#ifndef ABOUT_H
#define ABOUT_H

#include <iostream>

using namespace std;

#include "./state.h"

// Derived class from abstract `State`
class CAbout : public AState {
    public:
        CAbout();

        // `virtual` can only be used inside class definition
        virtual void update() override {
            this->render();

            int menuOption;
            cout << "\nWhich number do you choose? ";
            cin >> menuOption;

            if (menuOption == 1 || menuOption == 2 || menuOption == 0) {
                this->setNextState(menuOption);
                this->setIsFinished(true);
            }
            else 
                cout << "Wrong input, try again !";
        }

        virtual void render() override {
            cout << "*―――――――――――――――――――――――――――――――――――――――――――――――――――――*\n";
            cout << "│                         ABOUT                       │\n";
            cout << "*―――――――――――――――――――――――――――――――――――――――――――――――――――――*\n";
            cout << "│                  Author : Crux Cook                 │\n";
            cout << "│                  Github : cruxcook                  │\n";
            cout << "*―――――――――――――――――――――――――――――――――――――――――――――――――――――*\n";
            cout << "│       1. Menu          2. About          0. Exit    │\n";
            cout << "*―――――――――――――――――――――――――――――――――――――――――――――――――――――*\n";
        }
};

#endif // ABOUT_H
