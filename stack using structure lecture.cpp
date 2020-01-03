/*
#include<iostream>
using namespace std;

typedef struct stack
{
	char data[100];
	int top;
 } stack;
 
 bool empty(const stack& s)
 {
 	return(s.top==-1);
 }
 char top(const stack& s)
 {
 	return s.data[s.top];
 }
 
 void push(stack& s , char x)
 {
 	s.data[++(s.top)=x];
 }
 void pop(stack& s)
 {
 	--(s.top);
 }
 
int main()
{
	int i;
	stack s;
	s.top=-1;
	
	char str[10]="abcdeefgh";
	
	for(i=0;i<10;i++)
	push(s,str[i]);
	
	while(!empty(s))
	{
		cout<<top(s);pop(s);
		
		 } 	
}
*/


//why it is necessary for stack to use public private specifier 
/*
#include<iostream>
#include<cstdio>
using namespace std;

class stack{
	
	public :											//now , change the public to private 
		char *data; int top;		//vector<char>  data;
		
	public :
		
	int empty()
	
	{return (top==-1);
	}
	
	void push(char x)
	{data=[++top]=x;
	}
	
	void pop()
	{--top;
	}
	
	char top()
	{
		return data[top];
	}
		
};


int main()
{	
	stack s;
	char str[10]="abcdeefgh";
	s.data=new char[100];
	s.top()=-1;
	
	for(int i=0;i<5;++i)
	{
		s.push(str[i]);
	}
	
	s.top()=2;	//when data memeber of stack  intialise as private  ,it cannot be access 
	 
	while(!s.empty()) 
	{cout<<s.top(); s.pop();
	}
	
	delete [] s.data;
		
}


*/


#include<iostream>
#include<cstdio>
using namespace std;

class stack{
	
	public :									
		char data[10]; int top;
		stack();
		
	};
	
	stack::stack():top(-1)
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
		
	

















