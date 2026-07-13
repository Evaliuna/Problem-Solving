#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> card(5);
    
    for(int i = 0; i<5; i++){
        cin >> card[i];
    }

    if(is_sorted(card.begin(), card.end())){
        cout<<"C\n";//increasing
    }else if(is_sorted(card.begin(), card.end(), greater<int>())){
        cout<<"D\n";//decreasing
    } else{
        cout<<"N\n";//not any
    }

    return 0;
}