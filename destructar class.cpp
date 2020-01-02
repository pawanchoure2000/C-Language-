#include<iostream>
#include<cstdlib>
using namespace std;
class stack
{
	private :
		char *data;int top;
		
		public:
			stack();
			~stack();		
	};
	
	stack::stack() : data(new char[10]), top(-1)
	{
		cout<<"stack::stack()  called ";
	}
	
	stack::~stack()
	{
		cout<<"stack::~stack() called ";  
		delete data;
	}
	
	int main()
	{
		char str[10]="abcde";
		stack s;
		return 0;
	}
	
	
