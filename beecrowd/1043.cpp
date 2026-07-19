#include <bits/stdc++.h>
using namespace std;

int main(){
    float a, b, c;
    cin>>a>>b>>c;

 
    if(a+b>c && a+c > b && b+c > a) cout<<"Perimetro = "<<fixed<<setprecision(1)<<(a+b+c)<<"\n";
    else cout<<"Area = "<<fixed<<setprecision(1)<<((a+b)/2)*c<<"\n";

    return 0;
}