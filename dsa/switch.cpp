#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter 1/2/3 : ";
    cin>>n;

    switch(n){
        case 1:
            cout<<"Hey";
            break;
        case 2:
            cout<<"Huu";
            break;

        case 3:
            cout<<"Haa";
            break;
        
        default:
            cout<<"Ulaaaa";
            break;

    }
    return 0;
}