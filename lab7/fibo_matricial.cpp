#include<iostream>

using namespace std;

int** multiplication_matrix(int A[][2],  int _size){
    static int B[2][2];

    B[0][0] = A[0][0] * A[0][0] + A[0][1] * A[1][0];
    B[0][1] = A[0][0] * A[0][1] + A[0][1] * A[1][1];
    B[1][0] = A[1][0] * A[0][0] + A[1][1] * A[1][0];
    B[1][1] = A[1][0] * A[0][1] + A[1][1] * A[1][1];

    return B;
}

int fibo_matricial(int A[][2] ,  int _size){

    if(_size == 2)
        return **A;
    return fibo_matricial(A, _size/2);
}

int print_matrix(int A[2][2]){
    for(int i=0; i<2 ; i++){
        for(int j=0; j<2 ; j++){
            cout << A[i][j] << " ";
        }
        cout<<endl;
    }
}

int main(){
    int _size = 10;
    int mod = 2<<19;
    int A[2][2] = {{0 ,1 },{1 , 1}};
    return 0;
}