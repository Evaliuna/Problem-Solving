#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 1, 2};

    unordered_map<int, int> count;

    //finding maximum . if multiple maximum same then any of them will print or last one will

    // for (int value : arr)
    // {
    //     count[value]++;
    // }

    // int maxi = INT_MIN;
    // int ans = -1;

    // for(auto value : count){
    //     if(value.second > maxi){
    //         maxi = value.second;
    //         ans = value.first;
    //     }
    // }

    // cout<<ans<<'\n';

    //finding max only lowest adress means the first occur will printed

    int maxFreq = 0;
    int maxAns = 0;

    for(int i : arr){
        count[i]++;
        maxFreq = max(maxFreq, count[i]);
    }

    for(int i: arr){//here i is already the value
        if(maxFreq == count[i]){
            maxAns = i; 
            break;
         }       
    }
    cout<<maxAns<<"\n";

    return 0;
}