#include "O_n2.h"
#include <iostream>
#include <bits/stdc++.h>
#include "heapsort.h"
#include "mergeSort.h"
#include "quicksort.h"
#include <chrono>
#include<time.h>


using namespace std;
using namespace std::chrono;


int main()
{
    int n=100;
    //adjust n for different sizes of vector
    vector <int> vect1=generateRandomVector(n,10000,-10000);
    vector <int> vect2=generateRandomVector(n,10000,-10000);
    vector <int> vect3=generateRandomVector(n,10000,-10000);
    vector <int> vect4=generateRandomVector(n,10000,-10000);
    vector <int> vect5=generateRandomVector(n,10000,-10000);
    vector <int> vect6=generateRandomVector(n,10000,-10000);
    cout<<"n="<<n<<"\n";

    cout<<"O(n^2) Algorithm times=\n";
    // Get starting timepoint
    auto start = high_resolution_clock::now();
    bubbleSort(vect1);
    // Get ending timepoint
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<seconds>(stop - start);

    cout << "Time taken by Bubble Sort: "<< duration.count() << " seconds\n";


    start = high_resolution_clock::now();
    insertionSort(vect2);
    // Get ending timepoint
    stop = high_resolution_clock::now();
    duration = duration_cast<seconds>(stop - start);

    cout << "Time taken by Insertion Sort: "<< duration.count() << " seconds\n";



    start = high_resolution_clock::now();
    selectionSort(vect3);
    // Get ending timepoint
    stop = high_resolution_clock::now();
    duration = duration_cast<seconds>(stop - start);

    cout << "Time taken by Selection Sort: "<< duration.count() << " seconds\n";




    cout<<"O(n*log(n) Algorithm times=\n";
    // Get starting timepoint
    start = high_resolution_clock::now();
    mergeSort(vect4,0,n-1);
    // Get ending timepoint
    stop = high_resolution_clock::now();
    auto duration1 = duration_cast<milliseconds>(stop - start);

    cout << "Time taken by Merge Sort: "<< duration.count() << " milliseconds\n";


    start = high_resolution_clock::now();
    heapSort(vect5);
    // Get ending timepoint
    stop = high_resolution_clock::now();
    duration1 = duration_cast<seconds>(stop - start);

    cout << "Time taken by Heap Sort: "<< duration.count() << " milliseconds\n";


    start = high_resolution_clock::now();
    quickSort(vect6,0,n-1);
    // Get ending timepoint
    stop = high_resolution_clock::now();
    duration1 = duration_cast<seconds>(stop - start);

    cout << "Time taken by Quick Sort: "<< duration.count() << " milliseconds\n";


    return 0;
}
