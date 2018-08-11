#include <iostream>
#include <cstdlib>

#include "mergesort.h"

MergeSort::MergeSort(){} // needed for C++ b/c of OOD
void MergeSort::printArr(int arr[], int size)
{
    for(int i = 0; i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void MergeSort::mergesort(int arr[],int l, int r)
{
    if(l<r)
    {
        int m = (l+r)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        cout<<"MERGE HAS BEEN REACHED"<<endl;
        merge(arr,l,m,r);
    }

}

void MergeSort::merge(int arr[], int l, int m, int r)
{
    int newl,newm,newr;
    int n1 = m-l+1;     // the range of first sub-array
    int n2 = r-m;       // the range of second sub-array
    int L[n1],R[n2];    //sub-arrays

    for(newl=0;newl< n1; newl++)
    {
        L[newl] = arr[l+newl];
    }
    for(newm=0;newm<n2;newm++)
    {
        R[newm] = arr[m+1+newm];
    }

    newl=0;
    newm=0;
    newr=l;

    while(newl<n1 && newm<n2)
    {
        if(L[newl] <= R[newm])
        {
            arr[newr] = L[newl];
            newl++;
        }
        else
        {
            arr[newr] = R[newm];
            newm++;
        }
        newr++;
    }
    while(newl<n1)
    {
        arr[newr] = L[newl];
        newl++;
        newr++;
    }
    while(newm<n2)
    {
        arr[newr] = R[newm];
        newm++;
        newr++;
    }
}
