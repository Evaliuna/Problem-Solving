#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
  
    
   
        while(cin>>t){
            double fastest; 
            cin>>fastest;

            for(int i=1; i<t; i++){
                double ti;
                cin>>ti;
                if(fastest>ti) fastest = ti;

            }
            cout<<fixed<<setprecision(2)<<fastest<<"\n";           
        }    

    return 0;
}