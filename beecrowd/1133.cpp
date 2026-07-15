#include <iostream>
using namespace std;

int main(){
    int x, y;
    if(!(cin>>x>>y)) return 0;

    if(x>y){
        int temp = x;
        x = y;
        y = temp;
    }

    for(int i = x+1; i<y; i++){
        if(i%5==2 || i%5==3) cout<<i<<"\n";
    }

    return 0;
}