#include "../../inc/sorting/insertion_sort.h"

using namespace std;

CInsertionSort::CInsertionSort():ASort() {}

// A function to implement insertion sort
void CInsertionSort::runSort(int array[], int size) {
    int countStep = 0;
    int originalArray[size];

    copy( array, array+size, originalArray );      // copy array, syntax: copy(source_array, source_array + source_array_size, destination_array)

    for (int i = 1; i < size; i++){
        int key = array[i];
        int j = i - 1;

        cout << "-> CHECK Key(" << key <<") ";
        countStep = ASort::visualizeProcessingSort("\tINSERTION SORT",array,originalArray,size,countStep);

        while (j >= 0 && array[j] > key)        // if the current element is > key, move the current element to the back, make it a sorted array
        {
            cout << "-> SORT Key("<<key<<") - Current(" << array[j] <<") ";
            array[j + 1] = array[j];                // update the current element ..
            countStep = ASort::visualizeProcessingSort("\tINSERTION SORT",array,originalArray,size,countStep);

            j--;                                    // ..by moving backward to the previous elements until the loop failed (current element < key)
        }
        cout << "-> UPDATE Key(" << key <<") ";
        array[j + 1] = key;             // keep moving key until the end of the array

        countStep = ASort::visualizeProcessingSort("\tINSERTION SORT",array,originalArray,size,countStep);
    }
}