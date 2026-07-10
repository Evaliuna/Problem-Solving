#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int> us;//unordered_set is a container that stores unique elements in a hash table, so the time complexity of inserting, deleting and searching an element in unordered_set is O(1) on average
    //unordered_set is not ordered, so the elements are not stored in any specific order
    //rest of the functions are same as set
    //only upper_bound and lower_bound functions are not available in unordered_set because it is not ordered
    //in worst case, the time complexity of inserting, deleting and searching an element in unordered_set is O(n) because of hash collisions, but this is very rare and can be avoided by using a good hash function

}