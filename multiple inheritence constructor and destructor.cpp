#include<iostream>	
using namespace std;

class base1
{
	protected :
	int i;
	int data;
	public:
		base1(int a,int b) : i(a) , data(b){
			cout<<"bas1::base1()";
		}	
		
		~base1()
		{cout<<"base1::~base1() "<<endl;
		}
};

class base2
{
	protected :
	int j;
	int data;
	public:
	base2(int a=0,int b=0) : j(a) , data(b)
	{
		cout<<"base2::base2()  ";
		}	
		~base2()
		{
			cout<<"~base2::base2()";
		}
};

class derived:public base1 ,public base2 
{
	int k;
	public:
		derived(int x ,int y,int z) :  base1(x,y) ,k (z)   //i have invoked base1 and if base2 class domnot have default constructor then it will lead to complation error 
		{cout<<"derived :: derived () ";
		}
		
		~derived()
		{
			cout<<"derived::~derived() ";
		}
		
}; 



int main()
{
	base1 b1(2,3);
	base2 b2(3,7);
	derived d(5,3,2);
	
}
