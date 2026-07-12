#include <bits/stdc++.h>
using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int pc_1, numUnit_1, pc_2, numUnit_2;
    float priceOfOne_1, priceOfOne_2, total;

    cin>>pc_1>>numUnit_1>>priceOfOne_1;
    cin>>pc_2>>numUnit_2>>priceOfOne_2;

    cout<<fixed<<setprecision(2)<<"VALOR A PAGAR: R$ "<<(numUnit_1*priceOfOne_1)+(numUnit_2*priceOfOne_2)<<"\n";
    
    return 0;
}