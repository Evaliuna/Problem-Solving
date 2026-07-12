#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    float a,b;
    cin>>a>>b;

    cout<<fixed<<setprecision(5)<<"MEDIA = "<<((a*3.5) +(b*7.5))/(3.5 + 7.5)<<"\n";

    return 0;
}