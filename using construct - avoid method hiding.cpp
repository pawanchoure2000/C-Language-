#include<iostream>
using namespace std;
class A
{
	public:
		int f()
		{cout<<"A::f()"<<endl;
		}
};

class B:public A	
{
	public:
	using A::f;
	int f(int)
	{cout<<"B::f(int)"<<endl;
	}
	
};

int main()
{
	B b;
	b.f(3);		//b::f()
	b.f();		//A::f()
}
//object erived class linkked to with inherited base class function f() and the overloaded version defined by derived clss f(int) .
