#include "maxheap.h"
#include <iostream>
#include <bits/stdc++.h>


using namespace std;

MaxHeap::MaxHeap()
{
    this->heapSize=0;
}

MaxHeap::~MaxHeap()
{

}

int MaxHeap::getHeapSize()
{
    return heapSize;
}


void MaxHeap::setMaxHeap(vector <int> vect)
{
    MaxHeap::vect=vect;
    MaxHeap::heapSize=vect.size();
    MaxHeap::buildMaxHeap();

}

vector<int> MaxHeap::getMaxHeap()
{
    return vect;
}




void MaxHeap::buildMaxHeap()
{
    for(int i=MaxHeap::heapSize/2 ; i>=0 ; i--)
        heapify(i);

}

void MaxHeap::heapify(int i)
{
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    int largest;
    if( l<=MaxHeap::heapSize-1 && MaxHeap::vect[l] > MaxHeap::vect[i])
        largest=l;

    else
        largest = i;
    if(r<=MaxHeap::heapSize-1 && MaxHeap::vect[r] > MaxHeap::vect[largest])
        largest=r;

    if( largest != i )
    {
        swap(MaxHeap::vect[i],MaxHeap::vect[largest]);
        heapify(largest);
    }
}


vector<int> MaxHeap::sortHeap()
{
    int tempSize=MaxHeap::heapSize;
    vector <int> tempVector=MaxHeap::vect;


    for(int i=MaxHeap::heapSize-1; i>0 ;i-- )
    {
        swap(MaxHeap::vect[0],MaxHeap::vect[i]);
        MaxHeap::heapSize--;
        MaxHeap::heapify(0);
    }

    vect.swap(MaxHeap::vect);
    MaxHeap::heapSize=tempSize;

    return vect;
}


