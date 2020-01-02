#include<iostream>
using namespace std;
class complex
{
	public:
	double re,im;
	explicit complex(double r=0.0 , double i=0.0) : re(r) ,im(i)
	{
	}
	int display()
	{
		cout<<"real="<<re<<"imaginary="<<im<<endl;
	}
	
};

complex operator+(const complex& a , const complex& b)			//break encapsulation .. as re and im are public 
{
	return complex(a.re+b.re,a.im+b.im);
}

complex operator+(const complex&a , double d)
{
	complex b(d); return  (a+b);
}

complex operator+(double d , const complex& b)
{
	complex a(d); return  (a+b);
}


int main()
{
	
	complex d1(2.4,5.4) ;
	complex d2(3.5,6.4);
	complex d3;
	
	d3=d1+d2;	d3.display();	
	d3=d1+6.3;		d3.display();
	d3=7.5+d2;	d3.display();
	
}




	
	
	
