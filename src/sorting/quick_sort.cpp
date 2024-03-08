#include "../../inc/sorting/quick_sort.h"

CQuickSort::CQuickSort():ASort(){}

// Pick last element as pivot
/* This function takes last element as pivot, places the pivot element at 
its correct position in sorted array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right of pivot */
int CQuickSort::partition (int array[], int low, int high, int size, int originalArray[]) {
    int pivot = array[high]; // pivot
    int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far

    int countStep = 0;
    int copiedOriginalArray[size];
    copy( originalArray, originalArray+size, copiedOriginalArray );      // copy array, syntax: copy(source_array, source_array + source_array_size, destination_array)

    for (int j = low; j <= high - 1; j++)
    {
        cout <<"-> CHECK Current("<<array[j]<<") - Pivot("<<pivot<<")";
        countStep = ASort::visualizeProcessingSort("\tQUICK SORT", array, copiedOriginalArray, size, countStep);

        // If current element is smaller than the pivot
        if (array[j] < pivot)
        {

            i++; // increment index of smaller element
            cout <<"-> SWAP Current("<<array[j]<<") - Last Element("<<array[i]<<") - Pivot("<<pivot<<")";
            this->swap(&array[i], &array[j]);

            countStep = ASort::visualizeProcessingSort("\tQUICK SORT", array, copiedOriginalArray, size, countStep);
        }
    }
    cout <<"-> SWAP Pivot("<<array[high]<<") - Last Element("<<array[i+1]<<")";
    this->swap(&array[i + 1], &array[high]);

    // to visualize
    countStep = ASort::visualizeProcessingSort("\tQUICK SORT", array, copiedOriginalArray, size, countStep);

    return (i + 1);
}


/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
void CQuickSort::runSort(int array[],int originalArray[], int size, int low, int high) {

    if (low < high){
        /* pi is partitioning index, arr[p] is now
        at right place */
        int pi = partition(array, low, high, size, originalArray);

        // Separately sort elements before
        // partition and after partition
        this->runSort(array, originalArray, size, low, pi - 1);
        this->runSort(array, originalArray, size, pi + 1, high);
    }
}