#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.second < b.second)return true;//returns true if the second element of a is less than the second element of b, false otherwise
    else if(a.second == b.second){
        if(a.first > b.second) return true;//returns true if the second elements are equal and the first element of a is greater than the first element of b, false otherwise
    }
    return false;//returns false if the second element of a is greater than the second element of b, or if the second elements are equal and the first element of a is less than or equal to the first element of b
}

int main(){
    sort(a+2, a+5);//sorts the elements of the array a from index 2 to index 4 in ascending order
    sort(a, a+n, greater<int>());//sorts the elements of the array a from index 0 to index n-1 in descending order
    
    pair<int, int> p[] = {{1, 2}, {3, 2}, {5, 6}, {7, 8}};
    sort(p, p+4, cmp);//sorts the elements of the array p from index 0 to index 3 in ascending order..i can use this method to sort the array of pairs based on the second element of the pair, and if the second elements are equal, then based on the first element of the pair in descending order


    int num = 7;
    int cnt = __builtin_popcount(num);//returns the number of set bits in the binary representation of num. how many 1's are there in the binary representation of num. for example, the binary representation of 7 is 111, so the number of set bits is 3.
    

    long long num1 = 1233443545565;
    int cnt1 = __builtin_popcountll(num1);//returns the number of set bits in the binary representation of num1

    string s = "abcde";

    do{
        cout<<s<<" ";//prints the string s
    }while(next_permutation(s.begin(), s.end()));//generates all permutations of the string s

    return 0;
}