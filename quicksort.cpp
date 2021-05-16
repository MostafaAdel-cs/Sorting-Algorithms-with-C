#include "quicksort.h"
#include <iostream>
#include <bits/stdc++.h>
#include <time.h>

using namespace std;



int doPartition(vector<int> &vect,int first,int last)
{
    int pivot=vect[last];
    int i=first-1;
    for (int j=first; j<last; j++)
    {
        if (vect[j] <= pivot)
        {
            i++;
            swap(vect[i],vect[j]);
        }
    }
    swap(vect[i+1],vect[last]);
    return i+1;
}


void quickSort(vector<int> &vect,int first,int last)
{
    int pivot;

    if(first<last)
    {
        pivot=doPartition(vect,first,last);
        if(pivot-first<pivot-last)
        {
            quickSort(vect,first,pivot-1);
        }
        else
        {
            quickSort(vect,pivot+1,last);
        }
    }
}
