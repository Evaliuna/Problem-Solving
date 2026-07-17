#include <iostream>
using namespace std;

int main(){
    int n;
 
    int a,b;
    while(cin>>n && n != 0){
        int og = 0, og_child = 0;
        for(int i = 0; i<n; i++){
          cin>>a>>b;
          if(a>b) og++;
          else if(b>a) og_child++;
        }
        cout<<og<<" "<<og_child<<"\n";
    }
    

    return 0;
}