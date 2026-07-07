#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter n : ";
	cin>>n;
	
	for(int i = 0; i<n; i++){
<<<<<<< HEAD
		for(int j = n-1; j>i; j--){
			cout<<" ";
		}
		cout<<"*";
	
	if(i!=0){
	for(int j = 0; j<2*i-1; j++){
=======
		for(int j = 0 ; j<n-i-1; j++){
			cout<<" ";
		}
		cout<<"*";
	if(i!=0){
	 for(int j = 0; j<2*i-1; j++){
>>>>>>> 525631d07bc101ac5f374c199eb0b78b92aac84c
			cout<<" ";
		}
		cout<<"*";
	}
		cout<<"\n";
	}
	
<<<<<<< HEAD
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
	
=======
	for(int i = 0; i<n-1; i++){
	  for(int j = 0; j<i+1; j++){
			cout<<" ";
		}
		cout<<"*";
	if(i!=n-2){
	for(int j = 0; j<2*(n-i)-5; j++){
			cout<<" ";
		}
	
		cout<<"*";
	}
		cout<<"\n";

}
>>>>>>> 525631d07bc101ac5f374c199eb0b78b92aac84c
	return 0;
}