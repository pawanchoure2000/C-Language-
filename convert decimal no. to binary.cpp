w/*
#include<iostream>
using namespace std;
int main()
{
	int n,i,j,bin=0,dn;
	printf("convert binary to decimal \n ");
	printf("enter no. ");
	scanf("^%d",&n);
	
	dn=n;
	i=1;
	
	for(j=n;j>0;j=j/2)
	{
		bin=bin+(n%2)*i;
		i=i*10;
		n=n/2;
	}
	printf("binary no is  \n  %d", bin);	
}
*/

//
/*
#include<iostream>
using namespace std;
int main()
{

	int n,count=0;
	int i,rem[10];
	cout<<"enter number";
	cin>>n;
	while(n>0)
	{
	
	rem[i]=n%2;
	n=n/2;
	i++;
	
	}

	cout<<" decimal place is";
	for(int j=i-1;j>=0;j--)
	{
	cout<<rem[j];
	}

}
*/
