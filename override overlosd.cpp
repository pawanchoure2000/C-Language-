#include<iostream>
using namespace std;
class b
{
	public:
	int f(int);
	int g(int i);
			
};

class d:public b
{
	public:
		int f(int); //overrite the b::f()
		int f(string&);
		int h(int i);
};

int main()
{
	b b1;
	d d1;
	
	b1.f(1);
	b1.g(2);
	
	d1.f(3);
	d1.g(4);
	
	d1.f("red");
	d1.h(5);	
}
