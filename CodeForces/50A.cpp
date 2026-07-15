#include <iostream>
using namespace std;

int main(){
    int m, n;
    cin>>m>>n;
    int area = m*n;
     int numOfDomino = 0;
     int count = 0;
    for(int i = 1; i<=area; i++){
       numOfDomino +=2;
       if(numOfDomino>area){
        break;
       }
       count++;
    }
    cout<<count<<"\n";

    return 0;
}