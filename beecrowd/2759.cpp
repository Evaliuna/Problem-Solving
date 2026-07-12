#include <iostream>
using namespace std;

int main(){

    char t[3];

    for(int i = 0; i<3; i++){
      cin>>t[i];
    }
    cout<<"A = "<<t[0]<<", B = "<<t[1]<<", C = "<<t[2]<<"\n";
    cout<<"A = "<<t[1]<<", B = "<<t[2]<<", C = "<<t[0]<<"\n";
    cout<<"A = "<<t[2]<<", B = "<<t[0]<<", C = "<<t[1]<<"\n";

    return 0;
}
