#include<iostream>
using namespace std;

class A
{
	public:
		virtual ~A()
		{
		}
};

class B : public A
{
};

int main()
{
	A *pa = new  A;
	
	try
	{
		cout<<typeid(pa).name()<<endl;
		cout<<typeid(*pa).name()<<endl;
	}catch(const bad_typeid& e)
	{
		cout<<"caught "<<e.what()<<endl;
	}
	
	delete A 
	try{
		cout<<typeid(pa).name()<<endl;
		//cout<<typeid(*pa).name()<<endl;
	}
	catch(const bad_typeid& e)
	{
		cout<<"caught  "<<e.what()<<endl;
	}
	
	pa=0;
	try{
		cout<<typeid(pa).name()<<endl;
		cout<<typeid(*pa).name()<<endl;
	}
	catch(const bad_typeid& e)
	{
		cout<<"caught "<<e.what()<<endl;
	}
	
}
