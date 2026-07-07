#include <iostream>
using namespace std;

int main(){
    int n = 10416;

     int sum = 0;
    for(int i = 1; i<=31; i++){
        if(i%3==0){
            continue;
        }
        sum += i*i;
    }
    cout<<sum<<"\n";
    return 0;
}