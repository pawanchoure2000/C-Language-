/*
#include<iostream>
using namespace std;
class B
{
	public:
	int f(){
	cout<<"B::f()"<<endl;}
};

class D: public B
{
	public:
		int g() {
			cout<<"D::g()"<<endl;
		}
};

int main()
{
	B b;
	D d;
	
	b.f();
	d.f();		//inherited    //inherit the baseclass function f() and has it's own function g()
	d.g();			//added 
}

*/

#include<iostream>
using namespace std;

class B
{
	public:
		int f()
		{
			cout<<"B::f()"<<endl;
		}
};

class D:public B
{
	public:
		int f()     //function overide 
		{cout<<"D::f()"<<endl;   //if the member function of base class is redined in derived class with same signature then it mask the base class method 
		}
};

int main()
{
	B b;
	D d;
	
	b.f();
	d.f();  // does not call the function B::f() , due to function override 
}
