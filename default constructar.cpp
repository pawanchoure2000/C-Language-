#include<iostream>
#include<cmath>

using namespace std;
class complex
{
	private:
		int re, im;
		public: 
		int set(int x,int y)
		{  re=x;im=y ;  }
		int print()
		{
		cout<<sqrt(re*re+im*im)<<endl; 
		 }
		 
		
};

int main()
{
	complex c;			//here default con
	cout<<"garbage vlaue called";
	c.print();
	cout<<"explicit  intialisation ";
	c.set(4,8);
	c.print();
}

