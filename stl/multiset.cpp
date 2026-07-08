#include <bits/stdc++.h>
using namespace std;

int main(){
    multiset<int> ms;//multiset is a container that stores multiple elements of the same value in a specific order,it is not unique, it is implemented using balanced binary search tree, so the time complexity of inserting, deleting and searching an element in multiset is O(log n)
    ms.insert(1);//inserts the element into the multiset {1}
    ms.insert(1);//inserts the element into the multiset {1, 1}
    ms.insert(1);//inserts the element into the multiset {1, 1, 1}
    ms.emplace(3);//emplace is faster than insert because it constructs the object in place {1, 1, 1, 3}

    auto it = ms.find(2);//finds the element in the multiset and returns an iterator to the first occurrence of the element, if the element is not found, it returns an iterator to the end of the multiset
    if(it != ms.end()){
        cout<<*it<<" ";//prints the first occurrence of the element found in the multiset {2}
    }

    ms.erase(2);//erases all occurrences of the element from the multiset {1, 3}
    ms.erase(ms.find(1));//erases the first occurrence of the element pointed by the iterator from the multiset {1, 3}
    ms.erase(ms.find(1), next(ms.find(1), 2));//erases all occurrences of the elements in the range [first, last) from the multiset {3}
    int cnt = ms.count(3);//counts the number of occurrences of the element in the multiset
    cout<<cnt<<" ";

    auto it1 = ms.lower_bound(2);//returns an iterator to the first occurrence of the given element, if all elements are less than the given element, it returns an iterator to the end of the multiset
    auto it2 = ms.upper_bound(2);//returns an iterator to the first element that is greater than the given element, if all elements are less than or equal to the given element, it returns an iterator to the end of the multiset

    //rest of the functions are same as set, vector, list, stack, queue, priority_queue

    return 0;
}