#include<iostream>
using namespace std;

class B
{
	protected :
		int data;
		public:
			B(int d=0) : data(d)
			{
				cout<<"B::B(int)"<<"data="<<data<<endl;
			}			
};


class D : public B
{
	int info;
	public:
		D(int d,int i): B(d) , info(i)					//expicit constructar of base.......
		{
			cout<<"D::D(int ,int )" <<"data="<<data<<"info="<<info<<endl;
		}
		
		D(int i) : info(i)    //the free default constructor is provided by the compiler,which get called..... 
		{
			cout<<"D::D(int)"<<"data="<<data<<"info="<<info<<endl;
		}
		~D()
		{
			cout<<"D::D()"<<"info="<<data<<"info="<<info<<endl;
		}
};


int main()
{
	B b(0);
	cout<<"after first call";
	D d1(1,2);
	cout<<"after second call";
	D  d2(3);
	cout<<"after third call";
	
}



