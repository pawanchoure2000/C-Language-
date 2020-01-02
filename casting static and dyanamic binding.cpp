#include<iostream>
using namespace std;
class B
{
	public:
		int f()
		{cout<<"B::f()"<<endl;
		}
		virtual int g()
		{
			cout<<"B::g()"<<endl;
		}
};

class D:public B
{
	public:
	int f()
		{cout<<"D::f()"<<endl;
		}
		virtual int g()
		{
			cout<<"D::g()"<<endl;
		}
};

int main()
{
	B b;
	D d;
	
	B *pb=&b;
	B *pd=&d;
	
	B &rb=b;
	B &rd=d;
	
	b.f();
	b.g();
	d.f();
	d.g();
	
	pb->f();
	pb->g(); //it does not depand om the type of pointer , decided at runtime what is the type of object that is pointing to  
	pd->f();
	pd->g();
	
	rb.f();
	rb.g();
	rb.f();
	rb.g();
	
}
