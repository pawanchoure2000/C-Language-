/*
#include<iostream>
#include<typeinfo>
using namespace std;

class A
{
	public:
		virtual ~A()  {}
		
};

class B : public A
{
	
};

int main()
{
	A a;
	cout<<typeid(a).name()<<"    "<<typeid(&a).name()<<endl;
	
	A *p=&a;
	cout<<typeid(p).name()<<"    "<<typeid(*p).name()<<endl;
	
	B b;
	cout<<typeid(b).name()<<"    "<<typeid(&b).name()<<endl;
	p=&b;		//upcast 
	cout<<typeid(p).name()<<"    "<<typeid(*p).name()<<endl;
	
	A &r1=a;
	A &r2=b;
	cout<<typeid(r1).name()<<"    "<<typeid(r2).name()<<endl;
	
	return 0;
	
}

*/

