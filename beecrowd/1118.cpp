#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x = 1;
    double score;
   
  
    

    while(x != 2){

        bool found = true;
        double total_score = 0;
        int count = 0;
    while(found){
        cin>>score;
        
        if( score >= 0 && score <= 10.0 ){
            count++;
            total_score += score;
            if(count == 2) found = false;
        }
        else {
            cout<<"nota invalida\n";
        }
    }
    cout<<"media = "<<fixed<<setprecision(2)<<total_score/2<<"\n";

    
    
    do{
        cout<<"novo calculo (1-sim 2-nao)\n";
        cin>>x;
    }while(x !=1 && x != 2);
    
 }
    return 0;
}