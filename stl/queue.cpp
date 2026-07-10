#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;//fifo data structure, first in first out, the first element pushed into the queue is the first element to be popped out of the queue
    q.push(1);//pushes the element at the back of the queue {1}
    q.emplace(2);//emplace is faster than push because it constructs the object in place {1, 2}

    cout<<q.front()<<" ";//returns the front element of the queue
    cout<<q.back()<<" ";//returns the back element of the queue

    q.pop();//removes the front element of the queue {2}
    cout<<q.size()<<" ";//returns the number of elements in the queue

    cout<<q.empty()<<" ";//returns true if the queue is empty, false otherwise 

    //in queue mainly 4 functions are used push, pop, front and back are used.
}