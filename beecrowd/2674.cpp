#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    while(cin>>n){
        bool prime = true;
        bool super_prime = true;
        if(n == 1){
            prime = false;
        }
        else{
            for(int i = 2; (i*i) <= n; i++){
            if(n%i == 0){
                prime = false;
                break;
            }
       
        }
             if(prime) {
            int x = n;
            while(x != 0){
               int digit = x%10;
                
              if(digit != 2 && digit != 3 && digit != 5 && digit != 7){
                    super_prime = false;
              }
                 x /= 10;
               }
            }
        }
        if(super_prime) cout<<"Super\n";
        else if(prime) cout<<"Primo\n";
        else cout<<"Nada\n";
    }      
    

    return 0;
}