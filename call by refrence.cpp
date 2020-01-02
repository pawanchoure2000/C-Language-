#include<iostream>
using namespace std;

//1. by refrence int& i=j;
//2. passing address to pointer		int* i=&j; 

/*
//call by refrence only using &
int fun(int &b,int c);
int main()
{
	int a=20;
	cout<<"a="<<a<<"&a="<<&a<<endl;				//int& i=j;
	fun(a,a);
	
}

int fun(int &b,int c)
{
	cout<<"b="<<b<<"&b="<<&b<<endl;
	cout<<"c="<<c<<"&c="<<&c<<endl;
}
*/

/*
int fun(int *,int *);
int main()
{
	int a=10,b=15;
	fun(&a,&b);
	cout<<a<<b;
}

int fun(int* x,int* y)
{
	cout<<x<<endl;
	(*x)++;  //increment value to 11  //*x++ is diffrent from (*x)++
	(*y)++;	//incremeny value to 16   //*y++ is diffrent from (*y)++
	//*x++;	//increment the address same as *(x++) ++ high precedence than *
	cout<<x;
}

*/


