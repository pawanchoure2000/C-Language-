#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

/*
class stack{
	
	public :									
		char data[10]; int top;		//automatic intialisaion 
		stack();
		
	};

	stack::stack():top(-1)		//top is intialised to -1 
	{
		cout<<"stack()::stack() called  ";
	}
	
	int main()
	{
		stack s;
		
		for(int i=0;i<5;i++)
		s.pushstr(str[i]);
		
		while(!s.empty())
		{
			cout<<s.top();s.pop();
		}	
	}
		
*/

/*
class stack
{
	private :
		char *data;int top;
		
		public:
			
			stack();
	};
	
	stack::stack():data(new char[10]),top(-1)		//array pointer of 10 elemets and return char pointer  intialised dynamically   //intialised  top=-1
	{
		
		cout<<"stack():: stack() called  ";
	}	
		
		
	int main()
	{
		char str[10]="abcde";
		stack s;	//calls constructor
		
		for(int i=0;i<5;i++)
		{
			while(!s.empty())
			{cout<<s.top();s.pop();
			}
			
		}	
	}

*/

class stack
{
	private :
		char *data;int top;
		
		public:
			stack(size_t =10);
			
			int empty{  return (top==-1); }
			void push(char x){ data[++top]=x; }
			
			void pop{--top ; }
			char top{return data[top] ; }
	};
	
	stack::stack():data(new char[s]) , top(-1)		//array pointer of 10 elemets and return char pointer  intialised dynamically   //intialised  top=-1
	{
		
		cout<<"stack():: stack() with max size   "<<s ;
	}	
		
		
	int main()
	{
		char str[]="abcde";
		stack s(strlen(str));	//calls constructor
		
		for(int i=0;i<5;i++)
		{
			while(!s.empty())
			{cout<<s.top();s.pop();
			}
			
		}	
	}























