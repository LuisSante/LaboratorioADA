#include<iostream>

using namespace std;

int fibonacci(int n){
    if(n<2) 
        return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int max = 2<<30;
    for(int i=1 ; i<=max ; i++){
        cout<<"F("<<i<<")"<<fibonacci(i)<<endl;
    }
    return 0;
}