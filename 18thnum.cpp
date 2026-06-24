//no digit which can be divisible by 3 or 7 . print the nth number.

#include <iostream>
using namespace std;

int main(){
    int x;
    cin>>x;

    for(int i = 0; x!=0; i++){

        if(i%3 == 0 || i%7 == 0){
             continue;
            
        }
       cout<<i<<"\n";
       x--;
    }

    return 0;
}