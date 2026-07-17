#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    int amount;
    char type;

    int t1 = 0, t2 = 0,t3 = 0;

    for(int i = 0; i<n; i++){
        cin>>amount>>type;
        if(type == 'C'){
            t1 += amount;
        }
        else if(type == 'R'){
            t2 += amount;
        }
        else {
            t3 += amount;
        }
    }

    int total = t1+t2+t3;

    cout<<"Total: "<<total<<" cobaias\n";
    cout<<"Total de coelhos: "<<t1<<"\n";
    cout<<"Total de ratos: "<<t2<<"\n";
    cout<<"Total de sapos: "<<t3<<"\n";
    cout<<"Percentual de coelhos: "<<fixed<<setprecision(2)<<((double)t1/total)*100<<" %\n";
    cout<<"Percentual de ratos: "<<fixed<<setprecision(2)<<((double)t2/total)*100<<" %\n";
    cout<<"Percentual de sapos: "<<fixed<<setprecision(2)<<((double)t3/total)*100<<" %\n";

    return 0;
}