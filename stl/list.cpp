#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> ls;
    ls.push_back(1);//pushes the element at the end of the list {1}
    ls.emplace_back(2);//emplace back is faster then push back because it constructs the object in place {1, 2}
    ls.push_front(2);//pushes the element at the front of the list {2, 1, 2}
    ls.emplace_front(3);//emplace front is faster then push front because it constructs the object in place {3, 2, 1, 2}

    /*in list all other functions are same as vector except for the fact that list is a doubly linked list and vector is a 
    dynamic array, so the time complexity of inserting and deleting elements in list is O(1) and in vector is O(n) because 
    in vector we have to shift the elements after inserting or deleting an element.
    */
    


    return 0;
}