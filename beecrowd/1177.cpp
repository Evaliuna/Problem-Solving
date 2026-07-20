#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i = 0; i<1000 ; i += t){
       
        for(int j = 0; j<t && i+j < 1000; j++){
            cout<<"N["<<i+j<<"] = "<<j<<"\n";
   
        }
   
    }
    return 0;
}