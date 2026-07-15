#include<iostream>
#include<cstring>
using namespace std;

int main(){
int stday, endday, h1, h2, mn1, mn2, sec1, sec2;
char col1,col2;
string day1, day2;
cin>>day1>>stday>>h1>>col1>>mn1>>col2>>sec1;
cin>>day2>>endday>>h2>>col1>>mn2>>col2>>sec2;

int srtdy = h1*3600 + mn1*60 + sec1;
int eddy = (endday-stday)*24*3600 + h2*3600 + mn2*60 + sec2;
int totalsec = eddy - srtdy;
int day = totalsec/(24*3600);
int h = (totalsec%(24 * 3600))/3600;
int mn = (totalsec % 3600)/60;
int sec = totalsec%60;
cout<<day<<" dia(s)"<<endl<<h<<" hora(s)"<<endl<<mn<<" minuto(s)"<<endl<<sec<<" segundo(s)"<<endl;
}