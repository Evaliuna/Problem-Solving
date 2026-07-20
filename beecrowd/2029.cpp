#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double v, d;

    while(cin >> v >> d){
        //volume of cylindrical container v = pi* r^2 * h
        //d= 2r; r = d/2
        //diameter of cylindrical container = d = 2 square root(v/(pi*r^2))
        double r = d/2.0;
        double area = 3.14*(r*r); 
        double height = v/area;
   
        
        cout<<"ALTURA = "<<fixed<<setprecision(2)<<height<<"\n";
        cout<<"AREA = "<<fixed<<setprecision(2)<<area<<"\n";
    }

    return 0;
}