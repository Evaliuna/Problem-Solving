#include <iostream>
using namespace std;

int main(){
    int n, m, a;
    cin>> n>>m>>a;
    int count = 0;
    if(n>a){
        for(int i = 0; n>=a; i++){
            count++;
       if(m>a){
            for(int i = 0; m>=a; i++){
            count++;
            a += a;
            count++;
        }
    }
        else count++;
            
    }
    count++;
        }
       
    else count ++;
    
    cout<< count;

    return 0;
}