#include<iostream>
#include<algorithm>
#include<math.h>
#include<fstream>
#include "generador.h"

using namespace std;

int maxAlgorithm(int *arr, int n, int &cont){
    int max = arr[0];
    for(int i=1; i<n; ++i)
        if(arr[i] > max){
            max = arr[i];
            cont += 1;
        }
    return max;
}

int main(){
    
    int _size = (2<<19);
    int* arr = new int [_size];
    int vectores = 200;

    ofstream salida{"max.txt", ios::out};

    for(int exp = 8; exp <= 20; exp++){
        int size_ = (2<<exp-1);
        float promedio = 0;
        int cont;

        for (size_t i = 0; i < vectores; i++){
            llenar(arr, size_);
            cont = 0;
            maxAlgorithm(arr, size_, cont);
            promedio += cont;
        }
        promedio = float(promedio/200);

        salida << size_ << "\t" << promedio << "\t" << log(size_) << endl;
    }
    return 0;

    return 0;
}
