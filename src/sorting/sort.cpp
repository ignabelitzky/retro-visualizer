#include "../../inc/sorting/sort.h"

#include <unistd.h>         // Used for usleep()

ASort::ASort(){}

void ASort::swap(int* num1, int* num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
void ASort::swap(int& num1, int& num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void ASort::printArray(int array[], int size) {
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

void ASort::visualizeSort(int array[], int size) {
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

/*
array[]: array to be sorted
originalArray[]: copy of array[] to display the original version
size: size of array
countStep: increase number to count each step
*/
int ASort::visualizeProcessingSort(string sortName, int array[], 
                                    int originalArray[], int size, 
                                    int countStep){
    system("clear");
    cout << "\n\n\t"<<sortName<<"\n\n";
    cout << "Original\n";
    this->visualizeSort(originalArray, size);
    countStep++;
    cout << "Pass " << countStep;
    cout << endl;
    this->visualizeSort(array, size);
    usleep(100000); // 1s = 1,000,000 ; delaying system 0.5s (0.5x1000000) to display animation

    return countStep;
}