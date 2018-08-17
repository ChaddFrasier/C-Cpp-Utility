/**
    Author: Chadd Frasier
    Date: 8/16/18

    Basic Quicksort Alg for integers in C
    */
#include "quicksort.h"

void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = Partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

/* Partition()
    This method uses the high value as the pivot and then counts to check how many elements in the array are less than or equal to the pivot
    Then sets the location of the pivot based on the count + 1 because we know that is the location of the pivot
    */
int Partition(int arr[], int low, int high){
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swapInt(&arr[i], &arr[j]);
        }
    }
    swapInt(&arr[i + 1], &arr[high]);
    return (i + 1);
}


void swapInt(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
    //delete t;
}


void printArray(int arr[], int n){
    int i;
    for (i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
