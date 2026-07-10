#include <bits/stdc++.h>
using namespace std;

int main(){
    multimap<int, int> mm;//multimap is a container that stores key-value pairs in a specific order, it is implemented using balanced binary search tree, so the time complexity of inserting, deleting and searching an element in multimap is O(log n)
    //everything is same as map, except that multimap can store multiple elements with the same key, while map can store only one element with a given key
    //example: if we insert the key-value pair {1, 2} into the multimap, and then insert the key-value pair {1, 3} into the multimap, both elements will be stored in the multimap, while in map, only the second element will be stored and the first element will be overwritten
}