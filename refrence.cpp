#include<iostream>
using namespace std;
/*
int main()
{
	int a=10 , &b=a;   //a and b have the same memory   //b is reference to a (b refer to a)
	//if any change in a will change value of b
	//if any change in b will change value of a
	
	cout<<"a="<<a<<"b="<<b;
	cout<<"&a="<<&a<<"&b="<<&b<<endl;
	
	++a;
	cout<<"a="<<a<<"b="<<b<<endl;  //a and b have same address

	++b;
	cout<<"a="<<a<<"b="<<b<<endl;		//a and b have same address
	
	int& i;			//error  //refrence is variable for some other variable so it must be intialised   int& i=j;  
	int& j=5;		//error		//refrence with constat value as j would be intialised value of 5(constant) and any alter in j is not possible   const int& j=5;
	int& i=j+k;		//error  //j+k(expression) doesnot have address stored in temporary location       const int& i=j+k;	
	int& i=func_call();		//error  as it is expresssion  	// const int& =func(call()
}
*/
/*
int ref_const(const int &x)
{
	++x;	//error as x is made const  	[Error] increment of read-only reference 'x'
	return (x+1);
}
int main()
{
	int a=10,b;
	b=ref_const(a);
	cout<<"a="<<a<<"b="<<b;	
}
/*
