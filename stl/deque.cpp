#include <bits/stdc++.h>
using namespace std;

int main(){
    deque<int> dq;//deque is a double ended queue, it can be used as a stack and queue both
    dq.push_back(1);//pushes the element at the end of the deque {1}
    dq.push_front(2);//pushes the element at the front of the deque {2, 1}
    dq.emplace_back(3);//emplace back is faster than push back because it constructs the object in place {2, 1, 3}
    dq.emplace_front(4);//emplace front is faster than push front because it constructs the object in place {4, 2, 1, 3}

    dq.pop_back();//removes the last element of the deque {4, 2, 1}
    dq.pop_front();//removes the first element of the deque {2, 1}

    dq.back();//returns the last element of the deque
    dq.front();//returns the first element of the deque

    //rest of the functions are same as vector, list and stack, queue, priority_queue
}