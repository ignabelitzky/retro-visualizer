#ifndef ABOUT_H
#define ABOUT_H

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

            if (menuOption == 3 || menuOption == 4 || menuOption == 0) {
                this->setNextState(menuOption);
                this->setIsFinished(true);
            }
            else
                cout << "Wrong input, try again !";
        }

        virtual void render() override {
            AState::renderLogo();
            cout << "*―――――――――――――――――――――――――――――――――――――――――――――――――――――*\n";
            cout << "│                         ABOUT                       │\n";
            cout << "*―――――――――――――――――――――――――――――――――――――――――――――――――――――*\n";
            cout << "│                  Author : Crux Cook                 │\n";
            cout << "│                  Github : cruxcook                  │\n";
            cout << "*―――――――――――――――――――――――――――――――――――――――――――――――――――――*\n";
            cout << "│       3. About          4. Menu          0. Exit    │\n";
            cout << "*―――――――――――――――――――――――――――――――――――――――――――――――――――――*\n";
        }
};

#endif // ABOUT_H
