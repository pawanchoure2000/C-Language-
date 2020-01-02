#include<iostream>
using namespace std;

bool isprime(int n)
{
	if (n==1) return false;
	if(n==2) return true;
	if(n%2==0) return false;
	int k=3;
	while (k*k<=n)
	{if (n%k==0) return false;
	k=k+2;
	}
	return true;
}


int main()
{
	int n;
	cout<<"enter limit";
	cin>>n;
	int i;
	for(i=3;i<=n;i=i+2)
	{
		if(isprime(i))
		cout<<i<<endl;
		
	}
	return 0;
}
