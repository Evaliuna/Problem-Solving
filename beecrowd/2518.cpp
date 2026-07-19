#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,h,c,l;
    
    while(cin >> n >> h >> c >> l){

        double distance = n * (sqrt((h*h)+(c*c)));
        double areaOfRamp = l * distance;

        cout<<fixed<<setprecision(4)<<areaOfRamp/10000<<"\n";
    }

    return 0;
}