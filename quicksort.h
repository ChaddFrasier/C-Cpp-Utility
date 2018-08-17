#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <stdio.h>
#include <stdlib.h>

void quicksort(int arr[], int low, int high);
int Partition(int arr[], int low, int high);
void swapInt(int* a, int* b);
void printArray(int arr[], int n);

#endif // QUICKSORT_H
