#include <iostream>
using namespace std;

int main(){

    
    
    for(int x =0; x<=20; x +=2){
       double i = x/10.0;
        for(int k = 1; k<=3; k++){
           float j = i+k;
           cout<<"I="<<i<<" "<<"J="<<j<<"\n";
    }
    }
    
   
    return 0;
}