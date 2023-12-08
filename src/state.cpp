#include "../inc/state.h"

AState::AState() {
    this->setIsFinished(false);
    this->setNextState(-1);     // -1: no stage selected
}

void AState::setIsFinished(bool b) {
    this->isFinished = b;
}
int AState::getIsFinished() {
    return this->isFinished;
}

void AState::setNextState(int stateID) {
    this->nextState = stateID;
}
int AState::getNextState() {
    return this->nextState;
}

void AState::renderLogo() {
    cout << "\n       _______  _______ _________ _______  _______\n";
    cout << "      (  ____ )(  ____ \\\\__   __/(  ____ )(  ___  )\n";
    cout << "      | (    )|| (    \\/   ) (   | (    )|| (   ) |\n";
    cout << "      | (____)|| (__       | |   | (____)|| |   | |\n";
    cout << "      |     __)|  __)      | |   |     __)| |   | |\n";
    cout << "      | (\\ (   | (         | |   | (\\ (   | |   | |\n";
    cout << "      | ) \\ \\__| (____/\\   | |   | ) \\ \\__| (___) |\n";
    cout << "      |/   \\__/(_______/   )_(   |/   \\__/(_______)\n";
}