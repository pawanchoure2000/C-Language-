#include<iostream>
using namespace std;
/*
int fun(int &b,int c);	//b is calll by refrence //c is called by value
int main()
{
	int a=20;
	cout<<"a="<<a<<"&a="<<&a<<endl;	
	fun(a,a);
	
}

int fun(int &b,int c)
{
	cout<<"b="<<b<<"&b="<<&b<<endl;		//same as address of a	//any change in b can be reflected to first parameter of a
	cout<<"c="<<c<<"&c="<<&c<<endl;		//no same as address of a 	//changes made in c can not be reflected to second parameter of a
}
*/
//default parameter

int add(int a,int b=8)		//last default parameter should always be intiailised
{
	return (a+b);
}

int main()
{
	int x=5, y=6 ,z;
	/*cout<<"add(5,6)=";
		z=add(x,y);
		cout<<z<<endl;
	cout<<"add(5)=";
		z=add(x);
		cout<<z<<endl;
	*/cout<<"add(3)=";
		z=add(3);
		cout<<z<<endl;
		
}
