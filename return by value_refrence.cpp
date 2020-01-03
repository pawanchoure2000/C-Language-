//return by call
/*
#include<iostream>
using namespace std;
int func(int &x)
{
	cout<<"x="<<x<<"&x="<<&x<<endl;
	return (x);
}
int main()
{
	int a=10;
	cout<<"a="<<a<<"&a="<<&a<<endl;
	
	const int& b=func(a);		//return value of x
	
	cout<<"b="<<b<<"&b="<<&b<<endl;	 //b(shows copy value)   &b(new address)       	//return by value which is temporaray i.e, copy 
	
}
*/

//return by refrence 
/*
#include<iostream>
using namespace std;
int& func(int &x)
{
	cout<<"x="<<x<<"&x="<<&x<<endl;
	return (x);
}
int main()
{
	int a=10;
	cout<<"a="<<a<<"&a="<<&a<<endl;
	
	const int& b=func(a);		//const is optional       //return address of x 
	
	cout<<"b="<<b<<"&b="<<&b<<endl;		
	
}
*/

//return by call
/*

#include<iostream>
using namespace std;
int& func(int &x)	//return alias of x
{
	return (x);
}
int main()
{
	int a=10,b;
	b=func(a);
	cout<<"a="<<a<<"b="<<b<<endl;
	func(a)=3 ; //assign 3 to return 	//a and x ,both are alias    //output is alias of a
	//return(a)=3;	
	cout<<"a="<<a;
}
*/
#include<iostream>
using namespace std;
int& func(int &x)	//return alias of x
{
	int t;
	++t;
	return (t);		//using return by refrence never return a local variable  //use vare i.e logically alive after func call has ended(global,static,alias paramter,dynamically value)
}
int main()
{
	int a=10,b;
	b=func(a);
	cout<<"a="<<a<<"b="<<b<<endl;
	func(a)=3 ; //assign 3 to a	 //a and x ,both are alias    //output is alias of a
	//return(a)=3;	
	cout<<"a="<<a;
}



