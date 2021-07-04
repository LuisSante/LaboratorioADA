//Luis Felipe Sante Taipe
#ifndef QUICK_H
#define QUICK_H

#include<iostream>
#include<fstream>
#include<string>
#include<chrono>
#include<algorithm>

using namespace std;

int particion(int B[] , int p , int r){
    int x = B[r];//pivote
    int i = p - 1;
    for(int j = p ; j <= r -1 ; j++){
        if(B[j] <= x){
            i++;
            swap(B[i],B[j]);
        }
    }
    swap(B[i+1],B[r]);
    return i+1;
}

void quicksort(int B[] , int p , int r){
    if(p < r){
        int q = particion(B,p,r);
        quicksort(B, p, q-1);
        quicksort(B, q+1 , r);
    }
}

#endif