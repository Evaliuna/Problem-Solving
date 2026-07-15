#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if(!(cin>>n)) return 0;

    int x;
    for(int i = 0; i<n; i++){
        if(!(cin>>x)) return 0;
        
        if(x%2==0 && x<0){
            cout<<"EVEN NEGATIVE\n";
        }
        else if(x%2==0 && x>0){
            cout<<"EVEN POSITIVE\n";
        }
        else if(x%2!=0 && x<0){
            cout<<"ODD NEGATIVE\n";
        }
        else if(x%2!=0 && x>0){
            cout<<"ODD POSITIVE\n";
        }
        else {
            cout<<"NULL\n";
        }
    
    }


  return 0;
}