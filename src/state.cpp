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
