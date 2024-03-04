#include "../../inc/sorting/sort_manager.h"

#include <algorithm>        // random_shuffle(array, array + array_size)

CSortManager::CSortManager():AState(){}

void CSortManager::load(){
    this->setIsStarted(true);
    this->setIsRunning(true);
}

void CSortManager::play(){
    if(this->getIsStarted()){
        this->chooseSort();

        if(!this->getIsRunning()){  // when a game finished, move to Replay/Exit event
            this->replay();
        }
    }
}

void CSortManager::replay(){
    int userInput;
    cout << "Do you want to replay or exit ? (Replay-1|Exit-0) ";
    cin >> userInput;
    if(userInput==1 || userInput==0){
        if(userInput==0){               // EXIT
            this->setNextState(4);      // exit to Main Menu
            this->setIsFinished(true);
        }else{                          // REPLAY
            this->setNextState(1);      // renew current game state by starting
            this->setIsFinished(true);  // over to a new state but same game/state id
        }
    }else{
        cout << "☠ Wrong input, please try again ☠\n\n";
        this->replay();
    }
}

void CSortManager::chooseSort(){
    int userInput;
    cout << "\n\t\t1. Bubble Sort";
    cout << "\n\t\t2. Selection Sort";
    cout << "\n\t\t3. Insertion Sort";
    cout << "\n\t\t0. Exit to main menu";
    cout << "\n\n\t\tEnter number of your choice: ";
    cin >> userInput;

    if(userInput == 0){
        this->setNextState(4);  // exit to Main Menu
        this->setIsFinished(true);
    }else if( userInput == 1 || userInput == 2 || userInput == 3){
        this->runSort(userInput);

        //---------------GAME FINISHED
        this->setIsRunning(false);  // When game finished, turn on flag to move to Replay/Exit event
    }else{
        cout << "\n☠ Wrong input, please try again ☠\n\n";
        this->chooseSort();
    }
}

void CSortManager::runSort(int i){
    int arraySize;
    cout << "\nHow many elements in array to sort (2-14)? ";
    cin >> arraySize;
    if(arraySize>=2 && arraySize<=14){
        int array[arraySize];
        for (int i=0; i < arraySize;i++)
            array[i] = i+1; // Array starts from 0, but can't display 0 in visualization so +1 for value

        random_shuffle(array, array + arraySize);    // organize elements randomly

        int originalArray[arraySize];                    // make a copy of original array
        copy( array, array+arraySize, originalArray );   // to display in case 5 (quick sort)

        switch(i){
            case 1:
                bubbleSort.runSort(array, arraySize);
            break;
            case 2:
                selectionSort.runSort(array, arraySize);
            break;
            case 3:
                insertionSort.runSort(array, arraySize);
            break;
        }

    }else{
        cout << "\n☠ Wrong input, please try again ☠\n\n";
        this->runSort(i);
    }
}