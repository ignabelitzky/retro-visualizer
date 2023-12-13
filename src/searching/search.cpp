#include "../../inc/searching/search.h"

ASearch::ASearch(){}

// ! Repeat function, Sort also has `swap`
void ASearch::swap(int *num1, int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

// ! Repeat function, Sort also has `printArray`
void ASearch::printArray(int array[], int size){
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

void ASearch::visualizeOriginalArray(int array[], int size){
    string visualization;
    for (int i = 0; i < size; i++){
        switch(array[i]){
            case 1:
            visualization+="\t 1 ─\n";
            break;
            case 2:
            visualization+="\t 2 ──\n";
            break;
            case 3:
            visualization+="\t 3 ───\n";
            break;
            case 4:
            visualization+="\t 4 ────\n";
            break;
            case 5:
            visualization+="\t 5 ─────\n";
            break;
            case 6:
            visualization+="\t 6 ──────\n";
            break;
            case 7:
            visualization+="\t 7 ───────\n";
            break;
            case 8:
            visualization+="\t 8 ────────\n";
            break;
            case 9:
            visualization+="\t 9 ─────────\n";
            break;
            case 10:
            visualization+="\t10 ──────────\n";
            break;
            case 11:
            visualization+="\t11 ───────────\n";
            break;
            case 12:
            visualization+="\t12 ────────────\n";
            break;
            case 13:
            visualization+="\t13 ─────────────\n";
            break;
            case 14:
            visualization+="\t14 ──────────────\n";
            break;
        }
    }

    cout << visualization << "\n";
}

void ASearch::visualizeSearch(int array[], int size, int searchNode, int checkNode){
    string visualization;

    for (int i = 0; i < size; i++){
        switch(array[i]){
            case 1:
                if(checkNode == array[i]){
                    if(searchNode == checkNode){
                        visualization+="\tFOUND ->  1 ─\n";
                    }else
                        visualization+=" 1 ─\n";
                }else
                    visualization+="\t 1 ─\n";
            break;
            case 2:
                if(checkNode == array[i]){
                    if(searchNode == checkNode)
                        visualization+="\tFOUND ->  2 ──\n";
                    else
                        visualization+=" 2 ──\n";
                }else
                    visualization+="\t 2 ──\n";
            break;
            case 3:
                if(checkNode == array[i]){
                    if(searchNode == checkNode )
                        visualization+="\tFOUND ->  3 ───\n";
                    else
                        visualization+=" 3 ───\n";
                }else
                    visualization+="\t 3 ───\n";
            break;
            case 4:
                if(checkNode == array[i]){
                    if(searchNode == checkNode)
                        visualization+="\tFOUND ->  4 ────\n";
                    else
                        visualization+=" 4 ────\n";
                }else
                    visualization+="\t 4 ────\n";
            break;
            case 5:
               if(checkNode == array[i]){
                   if(searchNode == checkNode)
                       visualization+="\tFOUND ->  5 ─────\n";
                   else
                        visualization+=" 5 ─────\n";
                }else
                    visualization+="\t 5 ─────\n";
            break;
            case 6:
                if(checkNode == array[i]){
                    if(searchNode == checkNode)
                        visualization+="\tFOUND ->  6 ──────\n";
                    else
                        visualization+=" 6 ──────\n";
                }else
                    visualization+="\t 6 ──────\n";
            break;
            case 7:
                if(checkNode == array[i]){
                    if(searchNode == checkNode)
                        visualization+="\tFOUND ->  7 ───────\n";
                    else
                        visualization+=" 7 ───────\n";
                }else
                    visualization+="\t 7 ───────\n";
            break;
            case 8:
                if(checkNode == array[i]){
                    if(searchNode == checkNode)
                        visualization+="\tFOUND ->  8 ────────\n";
                    else
                        visualization+=" 8 ────────\n";
                }else
                    visualization+="\t 8 ────────\n";
            break;
            case 9:
                if(checkNode == array[i]){
                    if(searchNode == checkNode)
                        visualization+="\tFOUND ->  9 ─────────\n";
                    else
                        visualization+=" 9 ─────────\n";
                }else
                    visualization+="\t 9 ─────────\n";
            break;
            case 10:
                if(checkNode == array[i]){
                    if(searchNode==checkNode)
                        visualization+="\tFOUND -> 10 ──────────\n";
                    else
                        visualization+="\t\t10 ──────────\n";
                }else
                    visualization+="\t10 ──────────\n";
            break;
            case 11:
                if(checkNode == array[i]){
                   if(searchNode==checkNode )
                       visualization+="\tFOUND -> 11 ───────────\n";
                   else
                    visualization+="\t\t11 ───────────\n";
                }else
                    visualization+="\t11 ───────────\n";
            break;
            case 12:
                if(checkNode == array[i]){
                    if(searchNode==checkNode)
                        visualization+="\tFOUND -> 12 ────────────\n";
                    else
                        visualization+="\t\t12 ────────────\n";
                }else
                    visualization+="\t12 ────────────\n";
            break;
            case 13:
                if(checkNode == array[i]){
                   if(searchNode==checkNode)
                       visualization+="\tFOUND -> 13 ─────────────\n";
                   else
                    visualization+="\t\t13 ─────────────\n";
                }else
                    visualization+="\t13 ─────────────\n";
            break;
            case 14:
                if(checkNode == array[i]){
                    if(searchNode==checkNode)
                        visualization+="\tFOUND -> 14 ──────────────\n";
                    else
                        visualization+="\t\t14 ──────────────\n";
                }else
                    visualization+="\t14 ──────────────\n";
            break;
        }
    }

    cout << visualization << "\n";
}

/*
array[]: array to be searched
originalArray[]: copy of array[] to display original version
size: size of array
countStep: increase number to count each step

searchNode: value of node to search
checkNode: check current value of node
*/
int ASearch::visualizeProcessingSearch(string searchName, int array[], 
                                        int originalArray[], int size, 
                                        int countStep, int searchNode, 
                                        int checkNode){
    system("clear");
    cout << "-> SEARCH ("<<searchNode<<")";
    cout << "\n\t"<<searchName<<"\n\n";
    cout << "Original\n";
    this->visualizeOriginalArray(originalArray,size);
    countStep++;
    cout << "Pass " << countStep;
    cout << endl;
    this->visualizeSearch(array,size,searchNode,checkNode);
    usleep(200000); // 1s = 1,000,000 ; delaying system 0.5s (0.5x1000000) to display animation

    return countStep;
}