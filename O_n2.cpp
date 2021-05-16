#include "O_n2.h"
#include <iostream>
#include <bits/stdc++.h>

using namespace std;


vector<int> generateRandomVector(int n,int maxValue,int minValue)
{
    vector<int> vect;
    srand(time(0));
    for(int i=0;i<n;i++)
        vect.push_back( rand()%(maxValue - minValue + 1) + minValue );
    return vect;
}


void printVector(vector <int> vect)
{
    for(int i=0; i<vect.size(); i++)
    {
        printf("%d\t",vect[i]);
    }
    printf("\n");
}


void bubbleSort(vector <int> &vect)
{
    int n=vect.size();
    int flag=0;
    for(int i=1; i<n; i++)
    {
        flag=0;
        for(int j=0; j<n-i; j++)
        {
            if(vect[j] > vect[j+1])
            {
                swap(vect[j],vect[j+1]);
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
}

void insertionSort(vector <int> &vect)
{
    int n=vect.size();
    int key,hole;
    for(int i=0; i<n; i++)
    {
        key=vect[i];
        hole=i;
        while( hole>0 && vect[hole-1]>key)
        {
            vect[hole]=vect[hole-1];
            hole--;
        }
        vect[hole]=key;
    }

}

void selectionSort(vector <int> &vect)
{
    int n=vect.size();
    int iMin;
    for(int i=0; i<n-1; i++)
    {
        iMin=i;
        for(int j=i+1 ; j<n ; j++)
        {
            if(vect[j]<vect[iMin])
                iMin=j;
        }
        if(i!=iMin)
            swap(vect[i],vect[iMin]);
    }
}


