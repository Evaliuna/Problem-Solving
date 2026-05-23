#include <iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the number : ";
    cin>>n;

     for(int i = 1; i<=n;i++){
        for(int j = 1;j<=n;j++){
           cout<<j;
        }
        cout<<"\n";
    }
//pattern
/*
1234
1234
1234
1234
*/


      for(int i = 1; i<=n;i++){
        char ch = 'A';
        for(int j = 1;j<=n;j++){
           cout<<ch;
           ch++;
        }
        cout<<"\n";
    }
        int increasingNum = 1;
        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=n;j++){
                cout<<increasingNum;
                increasingNum++;
            }
            cout<<"\n";
        }
    return 0;
}

