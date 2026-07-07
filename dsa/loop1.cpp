//sum of all numbers from 1 to N that are divisible by 3
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    int sum = 0;
    for(int i = 1;i<=n;i++){
        if(i%3==0){
            sum = sum +i;
        }
    }
    cout<<sum<<"\n";
    return 0;
}
