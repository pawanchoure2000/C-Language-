#include<iostream>	
using namespace std;

class base1
{
	protected :
	int i;
	int data;
	public:
		base1(int a,int b) : i(a) , data(b){
		}	
	int f(int)
	{
		cout<<"base::f(int)"<<endl;
	}
	int g()
	{
		cout<<"base1::g()"<<endl;
	}
				
};

class base2
{
	protected :
		int j;
		int data;
		
		public:
			base2(int a,int b) : j(a) , data(a) {
			}
			int f(int)
			{cout<<"base2::f(int)"<<endl;
			}
			int g(int)
			{cout<<"base2::g(int)"<<endl;
			}
};

class derived : public base1 ,public base2 
{
	public:
		derived(int x ,int y,int u,int v ,int z){
		}
		using base1::f	();
		using base2::g();
};


int main()
{
	derived c(1,2,3,4,5);
	
	c.f(5);
	c.g(5);
	c.f(3);
	c.g();
	
}



