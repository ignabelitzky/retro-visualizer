#include "../../inc/searching/search_manager.h"

#include <algorithm>        // random_shuffle(array, array + array_size)

CSearchManager::CSearchManager():AState(){}

void CSearchManager::load(){
    this->setIsStarted(true);
    this->setIsRunning(true);
}

void CSearchManager::play(){
    if(this->getIsStarted()){
        this->chooseSearch();

        if(!this->getIsRunning()){  // when a game finished, move to Replay/Exit event
            this->replay();
        }
    }
}

void CSearchManager::replay(){
    int userInput;
    cout << "Do you want to replay or exit ? (Replay-1|Exit-0) ";
    cin >> userInput;
    if(userInput==1 || userInput==0){
        if(userInput==0){             // exit game
            this->setNextState(4);        // exit to main menu
            this->setIsFinished(true);
        }else{                          // replay
            this->setNextState(2);        // renew current game state by
            this->setIsFinished(true);    // pointing to the new state but same game (state) id
        }
    }else{
        cout << "☠ Wrong input, please try again ☠\n\n";
        this->replay();
    }
}

void CSearchManager::chooseSearch(){
    int userInput;
    cout << "\n\t\t1. Search";
    cout << "\n\t\t0. Exit to main menu";
    cout << "\n\n\t\tEnter number of your choice: ";
    cin >> userInput;

    if(userInput == 0){
        this->setNextState(4);        // exit to Main Menu
        this->setIsFinished(true);
    }else if(userInput == 1){
        this->runSearch(userInput);

        //--------------GAME FINISHED
        this->setIsRunning(false);  // When game finished, turn on flag to move to Replay/Exit event
    }else{
        cout << "\n☠ Wrong input, please try again ☠\n\n";
        this->chooseSearch();
    }

}

void CSearchManager::runSearch(int i){
    int numbersOfElements, searchNode;

    cout << "\n\t\tHow many elements in array to sort (2-13)? ";
    cin >> numbersOfElements;

    int array[numbersOfElements];   // Create a random array
    for (int i=0; i < numbersOfElements;i++)
        array[i] = i+1; // Array starts from 0, but can't display 0 in visualization so +1 for value

    random_shuffle(array, array + numbersOfElements);     // Shuffle elements randomly

    if(numbersOfElements>=2 && numbersOfElements<=13){
        cout<<"\n\t\t\t";
        for (int i=0; i < numbersOfElements;i++)          // to display random array
            cout<<array[i]<<" ";

        cout << "\n\n\tWhich number are you looking for? ";
        cin >> searchNode;

        int originalArray[numbersOfElements];                    // make a copy of original array
        copy( array, array+numbersOfElements, originalArray );   // to display in case 5 (quick sort)

        switch(i){
            case 1:
                cout << "...Run Search...";
            break;
        }
    }else{
        cout << "\n☠ Wrong input, please try again ☠\n\n";
        this->runSearch(i);
    }
}