#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n[20];
    deque<int> y;

    for(int i = 0; i<20 ; i++){
        cin>>n[i];
        y.push_front(n[i]);
    }
//to push back and front efficiently deque better
    for(int i = 0; i < 20 ; i++){
        cout<<"N["<<i<<"] = "<<y[i]<<"\n";
    }
   // for(int numbers : y) cout<<numbers<<"\n";

    return 0;
}