#include <iostream>
using namespace std;

int main(){
    char L;
    cin>>L;

    int position = 0;

    for(int i = 65; i<=91; i++){
        position++;
        if(i == (int)L){
            cout<<position<<"\n";
            break;
        }
    }
    return 0;
}