#ifndef GENERADOR_SORT_H
#define GENERADOR_SORT_H
#include<iostream>
#include<ctime>
#include<stdlib.h>

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

#endif