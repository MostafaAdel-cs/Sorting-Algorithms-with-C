#include "mergeSort.h"
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void mergeSort(vector<int> &vect,int first,int last)
{
    int mid;
    if(first<last)
    {
        mid=(first+last)/2;
        mergeSort(vect,first,mid);
        mergeSort(vect,mid+1,last);
        vector <int> left;
        vector <int> right;

        for(int i=first;i<=mid;i++)
            left.push_back(vect[i]);
        for(int i=mid+1;i<=last;i++)
            right.push_back(vect[i]);
        mergeVect(left,right,vect,first);

    }
}
void mergeVect(vector<int> left,vector<int> right,vector<int> &vect,int locationOfInsertion)
{
    int nL=left.size(),nR=right.size();
    int i=0,j=0;
    while (i<nL && j<nR)
    {
        if(left[i]<=right[j])
        {
            vect[locationOfInsertion]=left[i];
            i++;
        }
        else
        {
            vect[locationOfInsertion]=right[j];
            j++;
        }
        locationOfInsertion++;
    }

    while (i<nL)
    {
        vect[locationOfInsertion]=left[i];
        locationOfInsertion++;
        i++;
    }

    while (j<nR)
    {
        vect[locationOfInsertion]=right[j];
        locationOfInsertion++;
        j++;
    }
}
