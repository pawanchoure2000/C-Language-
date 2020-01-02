#include<iostream>
using namespace std;
int main()
{
	int base,exp,pow=1;
	cout<<"enter exponent and base ";
	cin>>exp>>base;
	
	for(;exp<=1;exp--)
	pow=pow*base;
	
	cout<<pow;
}
