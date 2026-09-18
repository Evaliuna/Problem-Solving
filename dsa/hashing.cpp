#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    //creation
    unordered_map<string,int> m;

    //insertion
    pair<string, int> p = make_pair("Eva", 3);
    m.insert(p);

    pair<string, int> pair2("Love", 2);
    m.insert(pair2);

    m["mera"] = 1;
    m["mera"] = 2;

    cout<< m["mera"] << "\n";
    cout<< m.at("Love")<<"\n";

    cout<<m.at("unknownkey")<<"\n";//this will give an error
    cout<<m["unknownkey"]<<"\n";//this will make the entry of the key to 0
    cout<<m.at("unknownkey")<<"\n";//now this will give 0. as it was taken entry 0 in prev line
    
    cout<<m.size() << "\n";

    //to check presence
    cout<< m.count("love")<< "\n";

    //erase
    m.erase("love");
    cout<< m.size() <<endl;

    //for(auto i:m){
    //cout<< i.first <<" "<< i.second<<endl;
    //}

    //iterator
    unordered_map<string, int> :: iterator it = m.begin();

    while(it != m.end()){
        cout<< it->first <<" "<< it -> second <<endl;
        it++;
    }

    //when we use unordered_map we get constent time O(1), when we use map we get O(log n) time
    
    return 0;
}