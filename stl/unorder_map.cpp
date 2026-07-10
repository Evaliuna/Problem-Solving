#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int, int> um;//unordered_map is a container that stores key-value pairs in a hash table, so the time complexity of inserting, deleting and searching an element in unordered_map is O(1) on average
    //unordered_map is not ordered, so the elements are not stored in any specific order
    //rest of the functions are same as map
    //only upper_bound and lower_bound functions are not available in unordered_map because it is not ordered
    //in worst case, the time complexity of inserting, deleting and searching an element in unordered_map is O(n) because of hash collisions, but this is very rare and can be avoided by using a good hash function
}