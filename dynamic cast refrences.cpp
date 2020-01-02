#include<iostream>
using namespace std;

class A
{
	public:
		virtual ~A()
		{
		}
};

class B : public A
{
};

class C
{
	public:
		virtual ~C()
		{
		}
};

int main()
{
	A a; B b ;C c;
	
	//cannot have invalid refrence 
	try 
	{
		B &rb1=b;
		A &rA2=dynamic_cast<A&>(rB1);
		cout<<"up-cast valid "<<endl;
		
		A &rA3=b;
		B &rB4=dynamic_cast<B&>(rA3);
		cout<<"down-cast  valid"<<endl;
		
		try{
			A &rA5=a;
			B &rb6=dynamic_cast<B&>(rA5);  //object is not of B type it is genrlised A type 		
		}catch(bad_cast e)
		{cout<<"down-cast invalid "<<e.what()<<endl;
		}
		
		try{
			A &rA7=(A&)c;
			C &rB8=dynamic_cast<C&>(rA7);	
		}catch(bad_cast e)
		{cout<<"unrelated cast invalid "<<e.what()<<endl;
		}
		
		
		
	}catch(bad_cast e)
	{cout<<"bad-cast : "<<e.what()<<endl;
	}
	
}//main()



