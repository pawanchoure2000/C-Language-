/*
#include<iostream>
using namespace std;
class B
{
	public:
		int f(){
		}
};
class D:public :B{
	public:
		int f(){
		}
};

int main()
{
	B b;
	D d;
	B *p;
	
	p=&b;
	p->f();   //B::f()
	
	p=&d;
	p->f();	//B::f()
}
*/

/*
#include<iostream>
using namespace std;
class B
{
	public:
		int f(){
		}
};
class D:public B{
	public:
		int f(){
		}
};

int main()
{
	B b;
	D d;
	B *p;
	
	p=&b;
	p->f();   //B::f()
	
	p=&d;
	p->f();	  //D::f()
}
*/

//recap
#include<iostream>
using namespace std;
class B
{
	public:
		int f(){ cout<<"B::f()"<<endl;
		}
		
		virtual int g(){
			cout<<"B::g()"<<endl;
		}
};
class D:public B{
	public:
		int f(){
		cout<<"D::f()"<<endl; }
		virtual int g(){               // not mandotary to write the virtual keyword as  already declared in class B
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
	pb->g();
	pd->f();
	pd->g();
	
	rb.f();
	rb.g();
	rd.f();
	rd.g();
}





