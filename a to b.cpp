#include<iostream>
using namespace std;
int main()
{
	
	int a, b ,i;
	int test;
	int count =0 ;
	cin>>test;
	
	while(test--)
	{
		cin>>a>>b;
		if(a==b)
		cout<<"0"<<endl;
		else if
		{
			while(i=1)
			{
				a=a+i;
				if(a==b)
				{cout<<count<<endl;break;}
				i++;
			}
		}
		else if
		{
			while(i=1)
			{
				b=b+i;
				if(a==b)
				{cout<<count<<endl;break;}
				i++;
			}
		}
	}
	return 0 ;
}
