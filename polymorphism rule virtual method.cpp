#include<iostream>
using namespace std;
class A
{
	public:
		int f(){ cout<<"A::f()"<<endl;
		}
		
		virtual int g(){
			cout<<"A::g()"<<endl;
		}
		
		int h()
		{cout<<"A::H()"<<endl;
		}
};

class B:public A{
	public:
		int f(){
		cout<<"B::f()"<<endl; }
		int g(){               // not mandotary to write the virtual keyword as  already declared in class B
			cout<<"B::g()"<<endl;
		}
		virtual int h()
		{cout<<"B::h()"<<endl;
		}
};

class C:public B 
{
	public:
		int f()
		{cout<<"C::f()"<<endl;
		}
		int g()
		{
			cout<<"C::g()"<<endl;
		}
		int h()
		{
			cout<<"C::h()"<<endl;
		}
};

int main()
{
	B *q=new C;
	A *p=q;
	
	p->f();
	p->g();
	p->h();   //static 
	
	q->f();
	q->g();
	q->h();  //dynamic 
}


