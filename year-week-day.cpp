#include<iostream>
using  namespace std;
int main()
{
	int td,y,w,d;
	cout<<"enter days ";
	cin>>td;
	
	y=td/365;
	w=(td%365)/7;
	d=(td%365)%7;
	
	cout<<"year  ="<<y<<"week  ="<<w<<"days  ="<<d;
	
}
