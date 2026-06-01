#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter n : ";
	cin>>n;
	
	for(int i = 0; i<n; i++){
		for(int j = n; j>i; j--){
			cout<<" ";
		}
		cout<<"*";
	for(int j = 0; j<i; j++){
			cout<<" ";
		}
	for(int j = 0; j<i; j++){
			cout<<" ";
		}
		cout<<"*";
		
		cout<<"\n";
	}
	
	for(int i = 0; i<n; i++){
	  for(int j = 0; j<i; j++){
			cout<<" ";
		}
		cout<<"*";
	for(int j = n; j>i; j--){
			cout<<" ";
		}
	
	for(int j = n; j>i; j--){
			cout<<" ";
		}
		cout<<"*";
		cout<<"\n";
	}
	
	return 0;
}