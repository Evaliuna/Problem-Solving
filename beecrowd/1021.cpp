#include <bits/stdc++.h>
using namespace std;

int main(){
    double n;
      if(!(cin>>n)) return 0;

      long long cents = round(n*100);//converting everything to integer avoiding floating point error 576.73 to 57673

      int notes[] = {10000, 5000, 2000, 1000, 500, 200};
      int coins[] = {100,50,25,10,5,1};

      cout<<"NOTES:\n";
      for(int noteValue : notes){
        int count = cents/ noteValue;
        cout<<count<<" note(s) de R$"<<fixed<<setprecision(2)<<(noteValue / 100.0)<<"\n";
        cents %= noteValue;
      }

      cout<<"MOEDAS:\n";
      for(int coinValue : coins){
        int count = cents/ coinValue;
        cout<< count<< " moeda(s) de R$ "<<fixed<<setprecision(2)<<(coinValue/100.0)<<"\n";
        cents %= coinValue;
      }
      
    return 0;
}