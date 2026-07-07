#include <iostream>
using namespace std;

int deciToBi(int deci){

    int pow = 1;
    int bi = 0;
    while(deci>0){
        int rem = deci % 2;
        deci /= 2;
        bi += (rem*pow);
        pow *= 10;
    }
    return bi;
}

int twoscomplement(int bi){
    while(bi--){
        
    }
}
int main(){
    int deci;
    cin>>deci;

    int bi = deciToBi(abs(deci));

}