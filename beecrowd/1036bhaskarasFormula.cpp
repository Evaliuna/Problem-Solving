#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a,b,c;
    cin>>a>>b>>c;

    //bhaskara's formula - x = (-b+-sqrt(pow(b,2)-4ac)/2a) and (pow(b,2)-4ac) this part is called discriminant. if descriminant is negetive then the eq have no real roots.

    double descri = pow(b,2)-(4*a*c);

    if(descri < 0 || a == 0){
        cout<<"Impossivel calcular\n";
    }
    else {
        cout<<fixed<<setprecision(5)<<"R1 = "<<(((-b)+ sqrt(descri))/(2*a))<<"\n"<<"R2 = "<<(((-b)- sqrt(descri))/(2*a))<<"\n";
    }

    return 0;
}