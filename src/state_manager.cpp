#include "../inc/state_manager.h"

CStateManager::CStateManager() {
    this->setIsRunning(true);
    this->setState(1);  // 1: Main menu; 2: About; 0: Exit
}

void CStateManager::setIsRunning(bool b) {
    this->isRunning = b;
}
bool CStateManager::getIsRunning() {
    return this->isRunning;
}

void CStateManager::setState(int stateID) {
    this->state = stateID;
}
int CStateManager::getState() {
    return this->state;
}


void CStateManager::runState() {
    cout << "...Running...";

    while (this->getIsRunning())
    {
        this->updateState();
        // usleep(1000);
        system("clear");
    }
}

void CStateManager::updateState() {
    cout << "...Updating...\n";

    switch (this->getState()) {
    case 1:
        if (!menu.getIsFinished())
            menu.update();
        else {
            this->setState(menu.getNextState());
            menu.setIsFinished(false);
        }
        break;
    case 2:
        if (!about.getIsFinished())
            about.update();
        else {
            this->setState(about.getNextState());
            about.setIsFinished(false);
        }
        break;
    case 0:
        this->exitState();
        break;
    }
}

void CStateManager::exitState() {
    cout << "...Exiting...\n";

    int userAction;
    cout << "Exit (1: Yes | 0: No)? ";
    cin >> userAction;

    if (userAction == 1)
        this->setIsRunning(false);
    else if (userAction == 0)
        this->setState(1); // Come back to the main menu
    else
        cout << "Wrong input, try again !";
}
