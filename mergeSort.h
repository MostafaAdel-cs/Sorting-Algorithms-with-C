#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#ifndef MERGESORT_H_INCLUDED
#define MERGESORT_H_INCLUDED

void mergeSort(vector<int> &vect,int first,int last);
void mergeVect(vector<int> left,vector<int> right,vector<int> &vect,int locationOfInsertion);

#endif // MERGESORT_H_INCLUDED
