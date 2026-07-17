#include <iostream>
using namespace std;

int main(){
    int n,x;
    cin>>n;
    
        while(n != 0){
        cin>>x;
        
        if(x == 1) cout<<x<<" nao eh primo\n";
        else{
        bool prime = true;
        for(int i = 2; (i*i) <= x; i++){
           
            if(x%i==0) {
                prime = false;
                break;
            }
        }
        if(prime) cout<<x<<" eh primo\n";
        else cout<<x<<" nao eh primo\n";
    }
        n--;
    }

    return 0;
}