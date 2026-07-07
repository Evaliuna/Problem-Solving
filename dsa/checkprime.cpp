#include <iostream>
using namespace std;

bool prime(int n){
    for(int i = 2; i<n; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    bool isPrime = prime(n);

    if(isPrime){
        cout<<"This is a Prime Number: "<<"\n";
    }
    else{
        cout<<"It's not a Prime Number : "<<"\n";
    }

    return 0;
}