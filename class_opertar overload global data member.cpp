
/*
#include<iostream>
using namespace std;
class complex
{
	double re,im;
	public:
	complex(double a=0.0 , double b=0.0) : re(a) ,im(b)
	{
	}
	~complex()
	{
	}
	void display();
	double real()
	{
		return re;
	}
	double img()
	{
		double im;
	}
	double setre(double r)					//more the get set function we provide , the more we are exposing the data to real world ,,,though our data members are protected 
											//this is not sufficient/corrrect  way 
	{
		re=r;
	}
	double setim(double i)
	{
		im=i;
	}			
};


void complex::display()
{
	cout<<"re="<<re<<"  im="<<im;
}
//operator is overloaded globally ............
complex operator+(complex& t1 ,complex& t2)			
{
	complex sum;
	sum.setre(t1.real()+t2.real());								//here  need to call each and every function , so this is not perfrect way
	sum.setim(t1.img()+t2.img());
	return sum;
}

int main()
{
	complex c1(4.5,25.25) ,c2(2,4) ,c3;
	cout<<"first complex no.";
	c1.display();
	cout<<"second complex no.";
	c2.display();
	cout<<"sum";
	c3.display();
}

*/




#include<iostream>
using namespace std;
class complex
{
	double re,im;
	public:
	complex(double a=0.0 , double b=0.0) : re(a) ,im(b)
	{
	}
	~complex()
	{
	}
	void display();
	complex operator+(const complex& t1 )			
{
	complex sum;
	sum.setre(t1.real()+t2.real());								//here  need to call each and every function , so this is not perfrect way
	sum.setim(t1.img()+t2.img());
	return sum;
}

};

void complex::display()
{
	cout<<"re="<<re<<"  im="<<im;
}

int main()
{
	complex c1(4.5,25.25) ,c2(2,4) ,c3;
	cout<<"first complex no.";
	c1.display();
	cout<<"second complex no.";
	c2.display();
	cout<<"sum";
	c3.display();
}

















