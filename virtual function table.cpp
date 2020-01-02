/*
#include<iostream>
using namespace std;

class B
{
	int i;
	public:
		B(int i_):i(i_)
		{
		}
		
		int f(int);    //non-polymorphic
		virtual int g(int);			//polymorphic
};
//VFT
//B::f(B*const ,int);
//B::g(B*const ,int );

class D :public B
{
	int j;
	public:
		D(int i_,int j_):B(i_) ,j(j_){
		}
		
		int f(int);
		int g(int);      //virtual function is overwritten       //
};
//VFT
//D::f(D*const ,int );
//D::g(D*const ,int );

int main()
{
	B b(100);
	B *p=&b;
	
	b.f(15);			//B::f(&b,15)
	p->f(25);			//B::f(&b,15)
	b.g(35);			//B::g(&b,15)
	p->g(45);			//p->vft [0](&b,15)  //pointer to function table (0th entry of table)    //p->vft[0] functiontable    //p is pointing to B object 
	
	//either evalute thiis or evalute upper one in  main function 
	
	D d(200,100);
	B *p=&d;
	
	d.f(15);			//D::f(&d,15)
	p->f(25);			//D::f(p,15)
	d.g(35);			//D::g(&d,35)
	p->g(45);			//p->vft[0](p,45)    //g is pointing to d object  
	
}

*/


#include<iostream>
using namespace std;

class A
{
	public:
	virtual int f(int)
	{
	}
	virtual int g(int)
	{
	}
	int h(A*)
	{
	}
};
//object layout 
//A::f(A*const ,int )
//A::g(A*const ,int	)


class B: public A
{
	public:
		int f(int);
		virtual int h(B*)
		{
		}
};
//object layout 
//B::f(B*const , int)
//A::g(A*const ,double)
//B::h(B*const ,B*)

class C:public B
{
	public:
		int g(double)
		{
		}
		int h(B*)
		{
		}
};
//object layout 
//B::f(B*const ,int)
//C::g(C*const ,double )
//C::h(C*const ,B*)


int main()
{
	A a;
	B b;
	C c;
	
	A*pa;
	B *pb;
	
}


int main()
{
	A a;
	B b;
	C c;
	
	A *pa;
	B *pb;
	
	
	pa->f(2);
	pa->g(3.2);
	pa->h(&a);
	pa->h(&b);
	
	pb->f(2);
	pb->g(3.2);
	pb->h(&a);
	pb->h(&b);
}
