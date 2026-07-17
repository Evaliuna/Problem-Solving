#include <iostream>
using namespace std;

int main(){
    int x,z;
    cin>>x;

    while(cin >> z){     
        if(z>x) break;
    }
    int sum = 0;
    int current = x;
    int count =0;

   while(sum <= z){
    sum +=current;
    count++;
    current++;
   }

   cout<<count<<"\n";

    return 0;
}