//Luis Felipe Sante Taipe
#ifndef GENERADOR_H
#define GENERADOR_H

#include<iostream>
#include<ctime>
#include<fstream>
#include<stdlib.h>

using namespace std;

void llenar(int *A, int _size){
    int max = _size;
    srand(time(0));
    for (int i=0; i<_size; i++){
        *(A+i) = rand()% (2*max+1)-max;
    }
}

#endif