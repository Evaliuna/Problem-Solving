#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter n : ";
	cin>>n;
	
	for(int i = 0; i<n; i++){
		for(int j = n-1; j>i; j--){
			cout<<" ";
		}
		cout<<"*";
	
	if(i!=0){
	for(int j = 0; j<2*i-1; j++){
			cout<<" ";
		}
		cout<<"*";
	}
		cout<<"\n";
	}
	
	for(int i = 1; i<n; i++){
	  for(int j = i; j>0; j--){
			cout<<" ";
		}
		cout<<"*";
	
	if(i!=n-1){
	for(int j = 0; j<2*(n-i)-3; j++){
			cout<<" ";
		}
		cout<<"*";
	}
		cout<<"\n";
	}
	
	return 0;
}