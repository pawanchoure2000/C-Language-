/*
#include<iostream>
using namespace std;
class complex
{
	public:
	double re,im;
	explicit complex(double r=0.0 , double i=0.0) : re(r) ,im(i)  {  }
	int display()
	{
		cout<<"real="<<re<<"imaginary="<<im<<endl;
	}
	
	complex operator+(const complex& a )			//opertar overl0ad in member function 
	{
	return complex(re+a.re,a.im+a.im);
	}
	
	complex operator+(double d )
	{
	complex b(d); return  (*this+b);	
	}

};


int main()
{
	complex d1(2.4,5.4) ;
	complex d2(3.5,6.4);
	complex d3;
	
	d3=d1+d2;	d3.display();	
	d3=d1+6.3;		d3.display();
	//d3=7.5+d2;	d3.display();		//overload not possible as - need object of left   // drawbackx

}



//use friend function to solve the above problem 
*/

#include<iostream>
using namespace std;
class complex
{
	public:
	double re,im;
	explicit complex(double r=0.0 , double i=0.0) : re(r) ,im(i)  {  }
	//use expicit in front of constructor to not to do any casting 
	
	int display()
	{
		cout<<"real="<<re<<"imaginary="<<im<<endl;
	}
	
	friend complex operator+(const complex& a ,const complex& b )			//opertar overl0ad in member function 
	{
	return complex(a.re+b.re,a.im+b.im);
	}
	
	friend complex operator+(const complex& a,double d )
	{
	complex b(d); return  (a+b);	
	}
	friend complex operator+(double d,const complex& b )
	{
		complex a(d) ;		//casting 
		return (a+b);
	}
};



int main()
{
	complex d1(2.4,5.4) ;
	complex d2(3.5,6.4);
	complex d3;
	
	d3=d1+d2;	d3.display();	
	d3=d1+6.3;		d3.display();
	d3=7.5+d2;	d3.display();		
}





	

