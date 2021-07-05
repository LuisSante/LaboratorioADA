#include<iostream>

using namespace std;

long long fibo_mod(long long  n, int mod){
    int F[n+1];
    F[0] = 0;
    F[1] = 1;
    for(int i=2 ; i<=n ; i++)
        F[i] = F[i-1] + F[i-2];
        return F[n]%mod;
}

int main(){
    int max = 2<<29;
    int mod = 2<<19;
    for(int i = 1; i<=max ; i++)
        cout<<"F("<<i<<")%2^20-> "<<fibo_mod(i,mod)<<endl;
    return 0;
}