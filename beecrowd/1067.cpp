#include <iostream>
using namespace std;

int main(){
    int x;
    if(!(cin>>x)) return 0;

    for(int i = 1; i<=x ; i++){
        if(i%2!=0){
            cout<<i<<"\n";
        }
    }
    return 0;
}