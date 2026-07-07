#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter n : ";
	cin>>n;
	
	for(int i = 0; i<=n; i++){
		for(char alphabate = 'A'+i; alphabate>='A'; alphabate--){
			cout<<alphabate<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
			