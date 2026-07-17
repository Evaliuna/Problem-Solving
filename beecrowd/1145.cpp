#include <iostream>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;

    int i = 1;
    for(int i = 1; i <= y ; i++){
        cout<<i;
        if(i%x==0) cout<<"\n";
        else cout<<" ";
    }

    return 0;
}