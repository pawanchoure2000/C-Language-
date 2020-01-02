#include<iostream>
using namespace std;
int fun(int a,int b)
{
	return (a);
}
int main()
{
	int x,y,z;	//by default value intialised is zero
	
	z=fun(x,y+1);	//may be expression 
	cout<<"y="<<y<<endl;
	
	z=fun(x,y);
}
