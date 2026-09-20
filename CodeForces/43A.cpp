#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s[n];
    int maxi = INT_MIN;
    for(int i = 0; i<n; i++){
        cin>>s[i];
    }

    
    unordered_map<string,int> goal;
    string answer;


    
        for(int i = 0; i<n; i++){
            goal[s[i]]++;
            
            if(goal[s[i]] > maxi){
                maxi = goal[s[i]];
                answer = s[i];
            }

            
        }
        cout<<answer<<"\n";

    return 0;
}

