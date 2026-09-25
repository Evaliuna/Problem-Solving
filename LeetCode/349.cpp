#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums1;
    vector<int> nums2;

    cin>>nums1;
    cin>>nums2;

    unordered_map<int, int> num1;
    unordered_map<int, int> num2;

    for(int i: nums1){
        num1[i]++;
    }
}