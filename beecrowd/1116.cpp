#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x,y;
     cin>>n;

    for(int i = 0; i<n; i++){
          cin>>x>>y;

        if(y == 0) cout<<"divisao impossivel\n";
        else{
            cout<<fixed<<setprecision(1)<<(double)x/y<<"\n";
        }
    }

    return 0;
}