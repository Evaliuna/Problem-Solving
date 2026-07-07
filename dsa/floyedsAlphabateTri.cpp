#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter n : ";
	cin>>n;
	char alphabate = 'A';
	for(int i = 1; i<=n; i++){
		for(int j = 1; j<=i;j++){
			cout<<alphabate<<" ";
			alphabate++;
		}
		cout<<"\n";
	}
	return 0;
}