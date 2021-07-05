#include<iostream>
#include<algorithm>
#include<math.h>
#include<fstream>
#include "generador.h"

using namespace std;

int particion (int *arr, int p, int r, int &cont){
    int pivot = arr[r];
    int i = p - 1; 
 
    for (int j = p; j <= r - 1; j++){
        if (arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]); 
            cont++;
        }
    }
    swap(arr[i + 1], arr[r]); 
    cont++;
    return i + 1;
}

void quickSort(int *arr, int p, int r, int &cont){
    if (p < r){
        int q = particion(arr, p, r, cont);
        quickSort(arr, p, q - 1, cont);
        quickSort(arr, q + 1, r, cont);
    }
}

int main(){
    
    int _size = 10000;
    int razon = _size/10;
    int vectores = 200;
    int *arr = new int [_size];

    ofstream salida{"quicksort.txt", ios::out};

    for (size_t lenght = razon; lenght <= _size ; lenght += razon){
        float prom = 0;

        for (size_t i = 0; i < vectores; i++){
            llenar(arr, lenght);
            int cont = 0;
            quickSort(arr, 0, lenght-1, cont);
            prom += cont;
        }
        prom = prom/((float)vectores);
        salida << lenght << "\t" << prom << "\t" << (lenght * log(lenght)) << endl;

    }
    return 0;
}