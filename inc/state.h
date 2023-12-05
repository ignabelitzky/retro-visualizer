#ifndef STATE_H
#define STATE_H

// Abstract (a blueprint with some implementations, cannot be instantiated)  
class AState {      
    private:
        bool isFinished;
        int nextState;

    public:
        AState();

        void setIsFinished(bool b);
        int getIsFinished();

        void setNextState(int stateID);
        int getNextState();

        virtual void update() = 0;  // pure virtual func (abstract method)
        virtual void render() = 0; // pure virtual func (abstract method)
};  // * Don't forget `;`

#endif  // STATE_H
