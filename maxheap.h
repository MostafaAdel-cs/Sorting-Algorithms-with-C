#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//this class gets a vector and turns it to max heap
//it is meant for using in heap sort only so not all heap functionalities are added

#ifndef MAXHEAP_H
#define MAXHEAP_H


class MaxHeap
{
    public:
        MaxHeap();
        virtual ~MaxHeap();
        int getHeapSize();
        void setMaxHeap(vector<int> vect);
        vector<int> getMaxHeap();
        vector<int> sortHeap();

    private:
        vector <int> vect;
        int heapSize;
        void buildMaxHeap();
        void heapify(int i);

};

#endif // MAXHEAP_H
