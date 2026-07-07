#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter n : ";
	cin>>n;
	
	for(int i = 1; i<=n;i++){
		for(int l = n; l>i; l--){
			cout<<" ";
		}
		for(int j = 1; j<=i; j++){
			cout<<j;
		}
		for(int k = i-1; k >0; k--){
			cout<<k;
		}
		cout<<"\n";
	}
	return 0;
}