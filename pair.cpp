#include <bits/stdc++.h>
using namespace std;

void practicepair(){

    pair<int, int> p1 = {1, 2};//here we are creating a pair of two integers 1 and 2
    cout<<p1.first<<" "<<p1.second<<"\n";

    pair<int, pair<int, int>> p2 = {1, {2, 3}};
    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<"\n";

    pair<int, int> arr[] = {{1, 2}, {1, 3}, {1, 4}};
    for(int i = 0; i < 3; i++){
        cout<<arr[i].first<<" "<<arr[i].second<<"\n";
    }

    pair<int, int> p3 = make_pair(5, 6);//here make_pair is used to create a pair of two integers 5 and 6
    cout<<p3.first<<" "<<p3.second<<"\n";
    //different ways to create a pair in C++ are: 
    //1. pair<int, int> p = {1, 2};
    //2. pair<int, int> p(1, 2);
    //3. pair<int, int> p = make_pair(1, 2);
    //insted of using pair<int, int> we can also use pair<string, int> or pair<string, string> or pair<int, string> or pair<string, double> etc. depending on the requirement.
    //pair is a container that holds two values of different data types. It is a part of the C++ Standard Library and is defined in the <utility> header file. The two values are referred to as first and second, and they can be accessed using the first and second member functions.
    pair<string, int> p4 = {"hello", 5};
    cout<<p4.first<<" "<<p4.second<<"\n";
}
int main() {

    practicepair();

    return 0;
}