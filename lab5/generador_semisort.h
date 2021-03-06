#ifndef GENERADOR_SEMI_SORT_H
#define GENERADOR_SEMI_SORT_H
#include<iostream>
#include<ctime>
#include<stdlib.h>
#include<algorithm>

using namespace std;

void llenar(int *A , int n_elem){
    int max = n_elem;
    for (int i=0; i<n_elem; i++){
        *(A+i) = i;
    }
}

void array_semisort(int *A ,  int n_elem){
    llenar(A, n_elem);
    int semi_sort = n_elem / 10;
    int lim = 0;
    while(lim <= semi_sort){
        int left_side = rand() % (n_elem-1);
        int right_side = rand() % (n_elem - 1);
        swap(A[left_side], A[right_side]);
        lim++;
    }
}

#endif