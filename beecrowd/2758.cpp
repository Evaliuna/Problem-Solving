#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    float a,b;
    double c,d;
    cin>>a>>b>>c>>d;

    
    cout<<fixed<<setprecision(6)<<"A = "<<a<<", "<<"B = "<<b<<"\n"<<"C = "<<c<<", "<<"D = "<<d<<"\n";
    cout<<fixed<<setprecision(1)<<"A = "<<a<<", "<<"B = "<<b<<"\n"<<"C = "<<c<<", "<<"D = "<<d<<"\n";
    cout<<fixed<<setprecision(2)<<"A = "<<a<<", "<<"B = "<<b<<"\n"<<"C = "<<c<<", "<<"D = "<<d<<"\n";
    cout<<fixed<<setprecision(3)<<"A = "<<a<<", "<<"B = "<<b<<"\n"<<"C = "<<c<<", "<<"D = "<<d<<"\n";
    cout<<fixed<<scientific<<uppercase<<setprecision(3)<<"A = "<<a<<", "<<"B = "<<b<<"\n"<<"C = "<<c<<", "<<"D = "<<d<<"\n";
    //I used scientific and uppercase to match the output format of the problem statement. it prints the scientific notation in uppercase as required.
    //here 00 is the exponent part of the scientific notation, which is always 00 for the given input range.we know expontent can be calculated as log10 of the number.
    cout<<fixed<<setprecision(0)<<"A = "<<a<<", "<<"B = "<<b<<"\n"<<"C = "<<c<<", "<<"D = "<<d<<"\n";

    return 0;
}