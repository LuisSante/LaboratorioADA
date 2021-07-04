#include<iostream>
#include "insertion.h"
#include "merge.h"
#include "quick.h"
#include "generador_semisort.h"

using namespace std;

int main(){

    int _size = 10000;
    int *arr = new int [_size];
    int *arr2 = new int [_size];
    int *arr3 = new int [_size];
    int razon = _size/10;
    double time, time2, time3;

    ofstream salida{"I_vs_Q_vs_M_semi.txt", ios::out};

    for(size_t lenght = razon; lenght <= _size; lenght+=razon){

        array_semisort(arr, lenght);
        auto begin = chrono::steady_clock::now();
        insertion_sort(arr, lenght-1);
        auto end = chrono::steady_clock::now();
        time = double(chrono::duration_cast <chrono::microseconds> (end - begin).count());

        array_semisort(arr2, lenght);
        auto begin2 = chrono::steady_clock::now();
        quicksort(arr2, 0, lenght-1);
        auto end2 = chrono::steady_clock::now();
        time2 = double(chrono::duration_cast <chrono::microseconds> (end2 - begin2).count());

        array_semisort(arr3, lenght); 
        auto begin3 = chrono::steady_clock::now();
        mergeSort(arr3, 0, lenght-1);
        auto end3 = chrono::steady_clock::now();
        time3 = double(chrono::duration_cast <chrono::microseconds> (end3 - begin3).count());
        
        salida << lenght << "\t" << time << "\t" << time2 <<"\t" << time3 << "\t" << endl;       
    }

    return 0;
}