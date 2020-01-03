#include<iostream>
using namespace std;

class base1
{
	protected :
	int i;
	int data;
	public:
		base1(int a,int b) : i(a) , data(b) {
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
			base2(int a,int b) : j(a) , data(a){
			}
			int h(int)
			{cout<<"base2::h(int)"<<endl;
			}
};


class derived:public base1 ,public base2
{
	int k;
	public:
		derived(int x,int y,int u,int v,int z){
		}
		int f(int)
		{cout<<"derived::f(int)"<<endl;
		}
		int h(string)
		{
			cout<<"derived::h(string) "<<endl;
		}
		int e(char)
		{cout<<"derived::e(char) "<<endl;
		}
};




int main()
{
	derived c(1,2,3,4,5);		
	c.f(5);			//derived  f(int)
	c.g();		//base g()
	c.h("pawan");			//derived  h()
	c.e('a');		//derived e(char)
}
