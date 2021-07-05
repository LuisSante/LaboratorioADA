#include<iostream>

using namespace std;
int A[][2];
int B[2][2];

int multiplication_matrix(){

    B[0][0] = A[0][0] * A[0][0] + A[0][1] * A[1][0];
    B[0][1] = A[0][0] * A[0][1] + A[0][1] * A[1][1];
    B[1][0] = A[1][0] * A[0][0] + A[1][1] * A[1][0];
    B[1][1] = A[1][0] * A[0][1] + A[1][1] * A[1][1];

    return **B;
}

int fibo_matricial(int A[][2] ,  int _size){

    if(_size == 1){
        return **A;
    }

    else{
        int max = fibo_matricial(A, _size/2)*fibo_matricial(A, _size/2);
    }

}

int main(){
    int _size = 10;
    int mod = 2<<19;
    int A[2][2] = {{0 ,1 },{1 , 1}};
    
    return 0;
}