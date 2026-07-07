#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter n : ";
	cin>>n;
	char alphabate ='A';
	for(int i =0;i<=n;i++){
		for(int j =0; j<i;j++){
		cout<<" ";
		}
		for(int k = i ; k < n; k++){
			cout<< alphabate;
		}
		alphabate ++;
		cout<<"\n";
	}
	return 0;
}