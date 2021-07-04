#include<iostream>
#include<chrono>
#include<fstream>
#include "generador_sort.h"
#include "merge.h"
#include "quick.h"

using namespace std;

int main(){

    int _size = 10000;
    int *arr = new int [_size];
    int razon = _size/10;
    double time, time2;

    ofstream salida{"Q_VS_M_ordenado.txt", ios::out};

    for(size_t lenght = razon; lenght <= _size; lenght+=razon){
        llenar(arr, lenght);
        auto begin = chrono::steady_clock::now();
        quicksort(arr, 0, lenght-1);
        auto end = chrono::steady_clock::now();
        time = double(chrono::duration_cast <chrono::microseconds> (end - begin).count());

        auto begin2 = chrono::steady_clock::now();
        mergeSort(arr, 0, lenght-1);
        auto end2 = chrono::steady_clock::now();
        time2 = double(chrono::duration_cast <chrono::microseconds> (end2 - begin2).count());
        salida << lenght << "\t" << time << "\t" << time2 << "\t" << endl;
  
    }

    return 0;
}