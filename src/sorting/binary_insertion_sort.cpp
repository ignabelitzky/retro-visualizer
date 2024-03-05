#include "../../inc/sorting/binary_insertion_sort.h"

CBinaryInsertionSort::CBinaryInsertionSort():ASort(){}

// A binary search based function to find the position where item should be inserted in a[low..high]
int CBinaryInsertionSort::binarySearch(int array[], int item, int low, int high) {
    if (high <= low)
        return (item > array[low]) ? (low + 1) : low;           // return (low+1) if (item>array[low], else return (low)

    int mid = (low + high) / 2;

    if (item == array[mid])
        return mid + 1;

    if (item > array[mid])
        return binarySearch(array, item, mid + 1, high);
    return binarySearch(array, item, low, mid - 1);
}

void CBinaryInsertionSort::runSort(int array[], int size) {
    int countStep = 0;
    int originalArray[size];
    copy( array, array+size, originalArray );      // copy array, syntax: copy(source_array, source_array + source_array_size, destination_array)

    int i, j, selected, location;

    for (i = 1; i < size; ++i){
        j = i - 1;
        selected = array[i];

        location = this->binarySearch(array, selected, 0, j);       // uses binary search to find location where selected sould be inseretd

        cout << "-> CHECK Selected("<<selected<<") - Location(" << location <<") ";
        countStep = ASort::visualizeProcessingSort("BINARY INSERTION SORT",
                                                    array, originalArray,
                                                    size, countStep);
        while (j >= location)           // Move all elements after location to create space
        {
            cout << "-> SORT Selected("<<selected<<") - Current(" << array[j] <<")";
            array[j + 1] = array[j];
            countStep = ASort::visualizeProcessingSort("BINARY INSERTION SORT",
                                                        array, originalArray,
                                                        size, countStep);
            j--;
        }
        cout << "-> UPDATE Selected(" << selected <<") - Location(" << location <<") ";
        array[j + 1] = selected;

        countStep = ASort::visualizeProcessingSort("BINARY INSERTION SORT",
                                                    array, originalArray,
                                                    size, countStep);
    }
}