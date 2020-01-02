#include<iostream>
using namespace std;

class A
{
	public:
		virtual int f(int) {
			
		}
		virtual int g(double){
		}
		int h(A *){
		}
};

class B : public A
{
	public:
		int f(int) {			//overwrite 
		}
		virtual int h(B*){		//overwrite 
		}
};

class C :public B{
	public:
		int g(double){
		}
		int h(B *){
		}
};

int main()
{
	A a;
	B b;
	C c;
	
	A *pa;
	B *pb;
	
}
//						intialisatiom
//invocation 	pa=&a   pa=&b    pa=&c
//pa->f(2)       A::f   B::f     B::f
//pa->g(3,2)     A::g   A::g     C::g
//pa->h(&a)      A::h   A::h      A::h
//pa->h(&b)      A::h    A::h     A::h

//						intialisatiom
//invocation 	pb=&a   pb=&b    pb=&c
//pb->f(2)       ----   B::f     B::f
//pb->g(3,2)     ----   A::g     C::g
//pb->h(&a)      ----   ----     ----
//pb->h(&b)      ----    A::h     A::h








