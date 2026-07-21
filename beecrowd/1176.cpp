#include <iostream>
using namespace std;

long long fibonacci[61];

long long fibo(int n){


   if(n <= 1) return n;
   if(fibonacci[n] != -1) return fibonacci[n];

   fibonacci[n] = (fibo(n-1) + fibo(n-2));

   return fibonacci[n];
}

int main(){
    for(int i = 0; i<=60; i++) fibonacci[i] = -1;
    
    int t,n;
    cin>>t;

    for(int i = 0; i<t; i++){
        cin>>n;
        cout<<"Fib("<<n<<") = "<<fibo(n)<<"\n";
    }

    return 0;
}