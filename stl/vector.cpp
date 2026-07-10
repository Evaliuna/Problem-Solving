#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<int> v1(5);
    v1.push_back(1);
    v1.emplace_back(2);//emplace back is faster then push back because it constructs the object in place

    vector<pair<int, int>> v3;
    v3.push_back({1, 2});
    v3.emplace_back(1, 2);

    vector<int> v4(5,10);
    v4.push_back(1);//even though the vector is initialized with 5 elements of value 10, we can still push back new elements to it


    vector<int>::iterator it = v4.begin();
    it++;
    cout<<*it<<" ";

    it = it+2;
    cout<<*it<<" ";

    vector<int>::iterator it1 = v4.end();//here end() points to the next element of the last element of the vector, so we need to decrement it to get the last element
    it1--;
    cout<<*it1<<" ";

    for(auto it = v4.begin(); it != v4.end(); it++){
        cout<<*it<<" ";
    }

    for(auto it: v4){
        cout<<it<<" ";
    }

    cout<<v4.back()<<" ";//returns the last element of the vector

    v4.erase(v4.begin()+1);//erases the element at index 1  {10,20,30} -> {10,30}
    v4.erase(v4.begin()+1, v4.begin()+3);//erases the elements from index 1 to index 2 (3-1) [start, end)

    vector<int> v5(5, 10);//{10, 10, 10, 10, 10}
    v.insert(v5.begin(), 5);//inserts 5 at the beginning of the vector v5 {5, 10, 10, 10, 10, 10}
    v.insert(v5.begin()+1, 6); //{5, 6, 10, 10, 10, 10, 10}
    v.insert(v5.begin()+4, 2, 7); //{5, 6, 10, 10, 7, 7, 10, 10, 10}

    vector<int> copy(2,20);
    v.insert(v5.begin()+2, copy.begin(), copy.end());//inserts the elements of the vector copy at index 2 of the vector v5 {5, 6, 20, 20, 10, 10, 7, 7, 10, 10, 10}

    cout<<v5.size()<<" "<<"\n";//size is the number of elements in the vector, capacity is the number of elements that can be stored in the vector without reallocating memory, max_size is the maximum number of elements that can be stored in the vector

    v5.pop_back();//removes the last element of the vector

    v5.swap(v4);//swaps the elements of the vector v5 with the elements of the vector v4
    cout<<v5.size()<<" "<<"\n";

    v4.clear();//removes all the elements of the vector, but the capacity remains the same
    cout<<v4.empty()<<" "<<"\n";//returns true if the vector is empty, false otherwise
    

    return 0;
}