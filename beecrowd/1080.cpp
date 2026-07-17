#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int t;
    cin>>t;
    int min_val = INT_MAX;
    int count = 0;
    for(int i = 1; i<=n; i++){
        cin>>t;
        if(t < min_val) {
            min_val = t ;
            count = i;
        }
      
}
    cout<<count<<"\n";
    return 0;
}