#include<iostream>
using namespace std;

class B;
class A
{
	int i_;
	public:	
	A(int i=0) : i_(i)
	{
		cout<<"A::A(i)\n";
	}
	
	operator int()   //for A type object i can convert it to int 
	{
		cout<<"A::operator int () \n ";
		return i_;
	}
}; 

class B
{
	public:
		operator A()  //conversion operator //does not have return type   //name of operator is opeator i.e, it do not take symbol it take type 
		{
			cout<<"B::operator A() \n";
			return A();
		}//returm type have to be A , becuse it is converting to type A 
};

int main()
{
	A a;
	B b;
	
	int i=5;
	
	//B==>A
	//no constructor in A which take B object 
	//conversion operator in B , for A type which get used 
	a=b;
	a=static_cast<A>(b);
	a=(A)b;					

	//A==>int  //here we cannot write constructor for type int   
	i=a;
	i=static_cast<A>(a); 	
	i=(A)a;					
}

