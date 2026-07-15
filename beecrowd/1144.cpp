#include <iostream>
using namespace std;

int main(){
    int n;
    if(!(cin>>n)) return 0;

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=1;j++){
            cout<<i<<" "<<i*i<<" "<<(i*i*i)<<"\n";
            for(int k = 1; k<=1; k++){
                cout<<i<<" "<<(i*i)+1<<" "<<(i*i*i)+1<<"\n";
            }
        }
    }

    return 0;
}