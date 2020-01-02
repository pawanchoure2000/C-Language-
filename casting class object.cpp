#include<iostream>
using namespace std;
class A
{
	public:
	int i;
};
class B
{
	public:
	double d;
};

int main()
{
	A a;
	B b;
	
	A *p=&a;
	B *q=&b;
	
	//a=b;
	//a=(A)b;
	
	//b=a;
	
	//b=(B)a;
	//p=q;
	
	//q=p;
	//casting between unrelated classes is not permitted 
	
	a.i=5;
	b.d=7.2;
	cout<<"a and b"<<p->i<<q->d;
	p=(A*)&b;		//forced
	q=(B*)&a;		//forced   //compiler allows and give some garbage value   
	
	cout<<p->i<<q->d;
}





