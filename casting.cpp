/*
#include<iostream>
using namespace std;
class A
{
	int i;
};

class B
{
	double b;
};

int main()
{
A a;
B b;
A *p=&a;
B *q=&b;
//a=b;          // no match for 'operator=' (operand types are 'A' and 'B')    //3	7	C:\Users\Admin\Documents\dev c++\casting.cpp	[
//a=(A)b;       //	[Error] no matching function for call to 'A::A(B&)'       //Note] no known conversion for argument 1 from 'B' to 'const A&'
//b=a;			// no match for 'operator=' (operand types are 'A' and 'B')    //

//b=(B)a;					//	[Error] no matching function for call to 'B::B(A&)'
//p=q;				//  Error] cannot convert 'B*' to 'A*' in assignment
//q=p;			//Error] cannot convert 'A*' to 'B*' in assignment

p=(A*)&b;						//forced
q=(B*)&a;	
}
*/


//forced casting b/w different unrelated classe is dangerous 

#include<iostream>
using namespace std;
class A
{
	public:
		int i;
};

class B
{
	public:
		double d;
};

int main()
{
A a;
B b;
a.i=5;  //int 
b.d=7.2;		//double 

A *p=&a;   //declaring pointer 
B *q=&b;

cout<<p->i<<endl;    //
cout<<q->d<<endl;

p=(A*)&b;    //(double to int ) loss of data  //read 4 bytes (from 8 bytes )
q=(B*)&a;		//(int to data ) gain of data //read 8 bytes (4 int+unwanted )

cout<<p->i<<endl;
cout<<q->d<<endl;
}












  
