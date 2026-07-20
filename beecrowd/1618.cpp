#include <iostream>
using namespace std;

int main(){
    int n,ax,ay,bx,by,cx,cy,dx,dy,rx,ry;
    cin>>n;

    while ( n-- ){
        cin>>ax>>ay>>bx>>by>>cx>>cy>>dx>>dy>>rx>>ry;

        if( ax <= rx && rx <= bx && dy >= ry && ry >= ay){
                cout<<1<<"\n";
        }
        else cout<<0<<"\n";
    }
    return 0;
}