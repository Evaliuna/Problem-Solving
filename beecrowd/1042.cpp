#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> num(3);

    for(int i = 0; i<3; i++){
        cin>>num[i];
    }
    vector<int> orginal = num;

    sort(num.begin(), num.end());
    for(int i = 0; i<3; i++){
        cout<<num[i]<<"\n";
    }
    
    cout<<"\n";

    for(int i = 0; i<3; i++){
        cout<<orginal[i]<<"\n";
    }

    return 0;
}