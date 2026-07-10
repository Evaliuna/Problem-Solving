#include <bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> pq;//max heap, the largest element is at the top of the priority queue
    pq.push(1);//pushes the element into the priority queue {1}
    pq.push(2);//pushes the element into the priority queue {2, 1}
    pq.emplace(10);//emplace is faster than push because it constructs the object in place {10, 2, 1}

    cout<<pq.top()<<" ";//returns the top element of the priority queue {10}
    pq.pop();//removes the top element of the priority queue {2, 1}
    cout<<pq.top()<<" ";//returns the top element of the priority queue{2}

    //rest of the functions are same as stack and queue, size, empty, swap etc.

    //minimum priority queue can be created by using greater<int> as the second template argument of the priority_queue class
    priority_queue<int, vector<int>, greater<int>> pq_min;//min heap
    pq_min.push(1);
    pq_min.push(2);
    pq_min.emplace(10);
    cout<<pq_min.top()<<" ";//returns the top element of the minimum priority queue {1}

    //push, pop happen in O(log n) time complexity, top, size, empty happen in O(1) time complexity.
}