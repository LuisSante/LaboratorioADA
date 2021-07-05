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
    int max = 2<<29;
    for(int i=1 ; i<=max ; i++)
        cout<<"Fibo("<<i<<") "<<fibo_tabla(i)<<endl;
    return 0;
}