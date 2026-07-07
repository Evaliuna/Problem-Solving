#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    if(n <= 1){
        cout<<"Not Prime";
        return 0;
    }
    
    bool isPrime = true;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }
    
    if(isPrime){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Not Prime"<<endl;
    }
    return 0;
}
