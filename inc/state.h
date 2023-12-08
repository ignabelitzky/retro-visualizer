#ifndef STATE_H
#define STATE_H

#include <iostream>
using namespace std;

// Abstract (a blueprint with some implementations, cannot be instantiated)
class AState {
    private:
        bool isStarted;
        bool isRunning;
        bool isFinished;
        int nextState;

    public:
        AState();

        void setIsFinished(bool b);
        int getIsFinished();

        void setNextState(int stateID);
        int getNextState();

        void setIsStarted(bool b);
        bool getIsStarted();

        void setIsRunning(bool b);
        bool getIsRunning();

        void renderLogo();

        virtual void update() = 0; // pure virtual func (abstract method)
        virtual void render() = 0; // pure virtual func (abstract method)
};  // * Don't forget `;`

#endif  // STATE_H
