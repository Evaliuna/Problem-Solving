#include <iostream>
using namespace std;

int main(){
    char d[8];

    for(int i = 0; i<8; i++){
      cin>>d[i];
    }

    cout<<d[3]<<d[4]<<"/"<<d[0]<<d[1]<<"/"<<d[6]<<d[7]<<"\n";
    cout<<d[6]<<d[7]<<"/"<<d[3]<<d[4]<<"/"<<d[0]<<d[1]<<"\n";
    cout<<d[0]<<d[1]<<"-"<<d[3]<<d[4]<<"-"<<d[6]<<d[7]<<"\n";

    return 0;
}