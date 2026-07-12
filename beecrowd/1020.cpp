#include <iostream>
using namespace std;

int main(){
    int day;
    cin>>day;

    cout<<(day/365)<<" ano(s)\n";
    cout<<(day%365)/30<<" mes(es)\n";
    cout<<(day%365)%30<<" dia(s)\n";

    return 0;
}