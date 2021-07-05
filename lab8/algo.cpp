#include <iostream>

using namespace std;
int matriz[14][14];
int temp(int index);
void square_index(int matriz[14][14]){
    for (int i = 0; i < 14; i++){
        for (int j = 0; j < 14; j++)
        {
            matriz[i][j] = 0;
        }
    }
    matriz[13][13] = 1;
}

int numb_square(int index, int n){
    int alpha =  matriz[index+1][index+1];
    int cont = 0;
    int n_square = n*n;
    if (matriz[index+1][index+1] == 0)
        alpha = temp(index+1);
        cont = alpha + n_square;
    return cont;
}

int temp(int index){
    int answer = numb_square(index, 14-index);
    return answer;
}

int square(int i, int j){
    int index;
    if (matriz[i][j] != 0)
        return matriz[i][j];
    else{
        if(i<j)
            index = i;
        index = j;
    }   
    return temp(index);
}

void print(int A[][14]){
    for(int i=0; i < 14; i++){
        for(int j=0; j < 14; j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int i, j;
    cout<< "i:";  
    cin>> i; 
    cout<< "j:"; 
    cin>> j; 
    square_index(matriz);
    cout<< square(i, j)<<" cuadrados"<<endl;
    return 0;
}