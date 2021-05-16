#include "maxheap.h"
#include "heapsort.h"

void heapSort(vector <int> &vect)
{
    MaxHeap maxHeap;
    maxHeap.setMaxHeap(vect);
    vect= maxHeap.sortHeap();
}
