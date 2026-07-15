#include <iostream>
using namespace std;

int main(){
    int x,y, temp;
    if(!(cin>>x>>y)) return 0;

    if(x>y){
        temp = x;
        x = y;
        y = temp;
    }
//it asked for between them not including them
    if(x%2==0){
        x++;
    }
    else{
        x+=2;
    }

    int sum = 0;
    
    for(int i = x; i<y; i+=2){
        sum +=i;
    }
    cout<<sum<<"\n";

    return 0;
}