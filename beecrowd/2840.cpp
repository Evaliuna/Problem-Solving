#include <iostream>
using namespace std;

int main(){
    long long r, l;
    cin>>r>>l;

    double numOfBalloon = l/((4.0/3)*(3.1415)*(r*r*r));

    cout<<(int)numOfBalloon<<"\n";

    return 0;
}