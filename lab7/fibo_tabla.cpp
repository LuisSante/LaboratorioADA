#include<iostream>

using namespace std;

double fibo_tabla(double n){
    double F[int(n)+1];
    F[0] = 0;
    F[1] = 1;
    for(int i=2 ; i<=n ; i++)
        F[i] = F[i-1] + F[i-2];
    return F[int(n)];
}

int main(){
    int max = 32;
    cout<<fibo_tabla(max)<<" ";
    return 0;
}