#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    long long factorial = 1;
    for(int i = 1;i<=n;i++){
        factorial *= i;
    }
    cout<<"factorial of "<<n<<" is :"<<factorial<<"\n";

    return 0;
}