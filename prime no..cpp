#include<iostream>
using namespace std;
int main()
/*
{
	int n,flag ,i;
	flag=0;
	cout<<"enter number ";
	cin>>n;
	if(n==1)
	cout<<"number entered is 1 neither prime nor composite";
	
	for(i=2;i<=n/2;i++)
	{ 
		if(n%i==0)
		flag=1;break;
	}
	if(flag==0)
		cout<<"number is prime ";
		else
		cout<<"no. entered is composite";
	
}
*/
{
	int n, i ;
	cout<<"enter number";
	cin>>n;
	
	for(i=2;i<n;i++)
	if(n%i==0)
{
		cout<<"no is not prime";break;}
	else
	{
	cout<<"no. is not prime";break; }

}
