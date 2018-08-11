/*
* File: mergesort.h
* Author: Chadd Frasier
* Date: 5/21/18
*
* This is a mergesort class
**/
#ifndef MERGESORT_H
#define MERGESORT_H

using namespace std;
class MergeSort{

public:
    MergeSort();
    void printArr(int arr[], int size);
    void mergesort(int arr[],int l, int r);
    void merge(int arr[], int l, int m, int r);
};
#endif // MERGESORT_H
