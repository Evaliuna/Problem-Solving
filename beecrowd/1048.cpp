#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long v;
    cin>>v;
    
    // string hexa = "";
    // string hexachar = "0123456789ABCDEF";

    // while(v!=0){
    //     int rem = v%16;
    //     hexa +=hexachar[rem];
    //     v = v/16;
    // }

    // reverse(hexa.begin(), hexa.end());
    // cout<<hexa<<"\n";

    cout<<hex<<uppercase<<v<<"\n";
    return 0;
}