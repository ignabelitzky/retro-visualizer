#include "../../inc/sorting/selection_sort.h"

CSelectionSort::CSelectionSort():ASort(){}

// Function to implement Selection sort
void CSelectionSort::runSort(int array[], int size) {
    int countStep = 0;
    int originalArray[size];

    copy( array, array+size, originalArray ); // Copy array, syntax copy(source_array, source_array + source_array_size, destination_array)

    for (int i = 0; i < size-1; i++) { // One by one move boundary of unsorted subarray
    
        int minNumber = i;  // Find the minimum element in unsorted array

        for (int j = i+1; j < size; j++){
            cout << "-> CHECK Min(" << array[minNumber] <<") - Current("<<array[j]<<")";
            countStep = ASort::visualizeProcessingSort("\tSELECTION SORT",array,originalArray,size,countStep);

            if (array[j] < array[minNumber]){   // Swap current min with the new min if found out
                cout << "-> UPDATE Min("<<array[j]<<")";
                minNumber = j;

                countStep = ASort::visualizeProcessingSort("\tSELECTION SORT",array,originalArray,size,countStep);
            }
        }
        cout << "-> SWAP Min(" << array[minNumber] <<") - Sorted Array's Last Element("<< array[i]<<")";
        this->swap(&array[minNumber], &array[i]);   // Swap the found minimum element with the first element in sorted subarray

        countStep = ASort::visualizeProcessingSort("\tSELECTION SORT", array,originalArray,size,countStep);
    }
}