#include<iostream>
using namespace std;
int fun();
int main()
{
	//value of volatile may be different every time it is read 
	//volatile if value may be changed by hardware , kernel 
	//const volatile int a=4;	cv qualifier
	//cout<<a;
	
	/*
	static volatile int i;
	i=0;
	while(i!=100) //compiler does not optimize
	{cout<<"hi";
	}
	*/
	
	int x=0;
	while(x)
	{cout<<"loop do not execute";	//compiler optimize
	}
}


