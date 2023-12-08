#include "../../inc/sorting/bubble_sort.h"

CBubbleSort::CBubbleSort():ASort(){}

// Function to implement Bubble Sort
void CBubbleSort::runSort(int array[], int size) {
    int countStep = 0;
    int originalArray[size];

    copy( array, array+size, originalArray );   // Copy array, syntax: copy(source_array, source_array + source_array_size, destination_array)

    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++)
        {
            cout << "-> CHECK Current(" << array[j] << ") - Next("<< array[j+1] <<") ";
            countStep = ASort::visualizeProcessingSort("BUBBLE SORT",array,originalArray,size,countStep);

            if(array[j]>array[j+1]) // Check if previous value > next value
            {             
                cout << "-> SWAP Current("<<array[j]<<") - Next("<<array[j+1]<<")";
                this->swap(&array[j],&array[j+1]);

                countStep = ASort::visualizeProcessingSort("BUBBLE SORT",array,originalArray,size,countStep);
            }
        }
    }
}