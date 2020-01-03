#include<iostream>
using namespace std;
int main()
{
	int num , count=0;
	cout<<"enter numberr";
	cin>>num;
	while(num%10!=0)
	{
		num/=10;
		count++;
	}
	cout<<"count is .."<<count;
}
