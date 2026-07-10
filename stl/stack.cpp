#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;//lifo data structure, last in first out, the last element pushed into the stack is the first element to be popped out of the stack
    st.push(1);//pushes the element at the top of the stack {1}
    st.emplace(2);//emplace is faster than push because it constructs the object in place
    
    
    cout<<st.top()<<" ";//returns the top element of the stack
    st.pop();//removes the top element of the stack {1}
    cout<<st.size()<<" ";//returns the number of elements in the stack

    cout<<st.empty()<<" ";//returns true if the stack is empty, false otherwise 

    //in stack mainly 4 functions are used push, pop, top are used.

    stack<int> st1, st2;//st1 and st2 are two stacks
    st1.push(1);
    st1.push(2);
    st2.push(3);
    st2.push(4);
    st1.swap(st2);//swaps the elements of the stack st1 with the elements of the stack st2

    //time complexity is O(1) for push, pop, top, size, empty and swap functions of stack.

}