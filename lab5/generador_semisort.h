#ifndef GENERADOR_SEMI_SORT_H
#define GENERADOR_SEMI_SORT_H
#include<iostream>
#include<ctime>
#include<stdlib.h>
#include<algorithm>

using namespace std;

void ORDENAR_CRECIENTE(int Aux[], int n){
    int i, key, j;

    for (i = 1; i < n; i++){
        key = Aux[i];
        j = i - 1;

        while (j >= 0 && Aux[j] > key){
            Aux[j + 1] = Aux[j];
            j = j - 1;
        }
        Aux[j + 1] = key;
    }
}

void llenar(int *A , int n_elem){
    int max = n_elem;
    srand(time(0));
    for (int i=0; i<n_elem; i++){
        *(A+i) = rand()% (2*max+1)-max;
    }
    ORDENAR_CRECIENTE(A,n_elem);
}

void array_semisort(int *A ,  int n_elem){
    llenar(A, n_elem);
    srand(time(0));
    int tam = sizeof(A)/sizeof(A[0]);
    int semi_sort = tam / 10;
    int lim = 0;
    while(lim < semi_sort){
        int left_side = rand() % (n_elem-1);
        int right_side = rand() % (n_elem - 1);
        swap(left_side, right_side);
        lim++;
    }
}

#endif