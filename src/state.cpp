#include "../inc/state.h"

AState::AState() {
    this->setIsStarted(false);
    this->setIsRunning(false);
    this->setIsFinished(false); // Check if the current state is still running
    this->setNextState(-1);     // -1: no state selected
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

void AState::setIsStarted(bool b){
    this->isStarted = b;
}
bool AState::getIsStarted(){
    return this->isStarted;
}

void AState::setIsRunning(bool b){
    this->isRunning = b;
}
bool AState::getIsRunning(){
    return this->isRunning;
}

void AState::renderLogo() {
    system("clear");
    cout << "\n       _______  _______ _________ _______  _______\n";
    cout << "      (  ____ )(  ____ \\\\__   __/(  ____ )(  ___  )\n";
    cout << "      | (    )|| (    \\/   ) (   | (    )|| (   ) |\n";
    cout << "      | (____)|| (__       | |   | (____)|| |   | |\n";
    cout << "      |     __)|  __)      | |   |     __)| |   | |\n";
    cout << "      | (\\ (   | (         | |   | (\\ (   | |   | |\n";
    cout << "      | ) \\ \\__| (____/\\   | |   | ) \\ \\__| (___) |\n";
    cout << "      |/   \\__/(_______/   )_(   |/   \\__/(_______)\n";
}