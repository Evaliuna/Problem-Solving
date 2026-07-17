#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x;
    int divisor[] = {2,3,4,5};
    int count[4] ={0};
  
    
    for(int i = 0; i<n; i++){
        cin>>x;
       for(int i = 0; i<4; i++){
         if(x % divisor[i] == 0)
          count[i]++;
       }
    }

    for(int i = 0; i<4; i++){
        cout<<count[i]<<" Multiplo(s) de "<<divisor[i]<<"\n";
    }


    return 0;
}