#include<iostream>
#include"stack.h"
using namespace std;
int main()
{

	unsigned int post[]={'a','b','c','d','e'};
	stack<int> s;
	for(unsigned int i=0 ; i < sizeof(postfix)/sizeof(unsigned int);++i)
	{
		ch=postfix[i];
		if(isdigit(ch))
		{
			s.push(ch-'0');
		}
		else
		{
			int op1=s.top();
			s.pop();
			int op2=s.top();
			s.pop();
			switch(ch)
			{
				case '*' : s.push(op2*op1); break ;
				case '/' : s.push(op2/op1); break ;
				case '+' : s.push(op2+op1); break ;
				case '-' : s.push(op2-op1); break ;
				
			}

		}
		
	}
	
	cout<<" evalution  of  expression  "<<s.top();
}
