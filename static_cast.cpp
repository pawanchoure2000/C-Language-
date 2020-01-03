#include<iostream>
using namespace std;

int main()
{
	int i=2;
	double d=3.7;
	double *pd=&d;
	
	i=d;					//implicit - warning it loses information 
	i=static_cast<int>(d);
	i=(int)d;
	
	d=i;				//implicit 
	d=static_cast<double>(i);
	d=(double)i;
	
	//i=pd;				//implicit - error 
	//i=static_cast<int>(pd);
	//i=(int)pd;								//	[Error] cast from 'double*' to 'int' loses precision [-fpermissive]
}


//on class hirechhay 

#include<iostream>
using namespace std;

class A
{
};

class B : public A
{
};


int main()
{
	A a;
	B b;
	
	//upcast 
	A *p=&b;
	B *q;
	
	
	
}





