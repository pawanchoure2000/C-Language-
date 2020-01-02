
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	
	int *p;
	int *func(); 
	p=func();   //p=&i    i <---  p  
	cout<<"address of i\n"<<p<<"\nvalue of i\n"<<*p<<"\naddress of p\n"<<&p; 		//i=*p  ,but i is not in the scope
	
}
int *func()
{
	 int i=20;
	return(&i);
}
