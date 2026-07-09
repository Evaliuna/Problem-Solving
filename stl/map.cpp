#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> m;//map is a container that stores key-value pairs in a specific order, it is implemented using balanced binary search tree, so the time complexity of inserting, deleting and searching an element in map is O(log n)
    map<int, pair<int, int>> m1;//map can also store key-value pairs where the value is a pair of two elements
    map<pair<int, int>, int> m2;//map can also store key-value pairs where the key is a pair of two elements

    m2[{1, 2}] = 2;//inserts the key-value pair {{1, 2}, 2} into the map
    m2.emplace(make_pair(make_pair(3, 4), 5));//emplace is faster than insert because it constructs the object in place {{3, 4}, 5}

    m1.insert({5, {6, 7}});//inserts the key-value pair {5, {6, 7}} into the map
    m2[{7, 8}] = 9;//inserts the key-value pair {{7, 8}, 9} into the map

    auto it = m.find(5);//finds the element in the map and returns an iterator to the element, if the element is not found, it returns an iterator to the end of the map

    for(auto it = m.begin(); it != m.end(); it++){//iterates through the map and prints the key-value pairs
        cout<<it->first<<" "<<it->second<<"\n";
    }

        // m1[1] is a pair<int,int>, print its members explicitly
        cout<<m1[1].first<<" "<<m1[1].second<<"\n"; // may insert default {0,0} if key 1 doesn't exist
        cout<<m2[{1, 2}]<<"\n"; // prints value for key {1,2}

        auto it = m2.find({1, 2}); // finds key {1, 2} in m2, returns iterator to it or m2.end() if not found
        cout<< it->second<<"\n";


    return 0;
}