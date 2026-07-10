#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;//set is a container that stores unique elements in a specific order, it is implemented using balanced binary search tree, so the time complexity of inserting, deleting and searching an element in set is O(log n)
    s.insert(1);//inserts the element into the set {1}
    s.insert(2);//inserts the element into the set {1, 2}
    s.emplace(3);//emplace is faster than insert because it constructs the object in place {1, 2, 3}

    auto it = s.find(2);//finds the element in the set and returns an iterator to the element, if the element is not found, it returns an iterator to the end of the set
    if(it != s.end()){
        cout<<*it<<" ";//prints the element found in the set {2}
    }

    s.erase(2);//erases the element from the set {1, 3}

    int cnt = s.count(3);//counts the number of occurrences of the element in the set, since set stores unique elements, it will return 1 if the element is present and 0 if the element is not present
    cout<<cnt<<" ";

    auto it = s.find(3);//finds the element in the set and returns an iterator to the element, if the element is not found, it returns an iterator to the end of the set
    s.erase(it);//erases the element pointed by the iterator from the set 

    auto it1 = s.lower_bound(2);//returns an iterator to the first element that is not less than the given element, if all elements are less than the given element, it returns an iterator to the end of the set
    auto it2 = s.upper_bound(2);//returns an iterator to the first element that is greater than the given element, if all elements are less than or equal to the given element, it returns an iterator to the end of the set

    //rest of the functions are same as vector, list, stack, queue, priority_queue
return 0;
}