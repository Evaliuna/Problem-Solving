#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int sum = 0;
    int product = 1;
    while(n!=0){
        int num = n%10;
        sum += num;
        product *= num;
        n = n/10;
    }
    cout<<product - sum<<"\n";

    return 0;
}