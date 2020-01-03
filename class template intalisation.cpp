#include<iostream>
using namespace std;
template<class T>class stack;

int reversestring(stack<char>& s,char *str);

template<class T>
class stack
{
	T data[100];
	int top;
	public:
		stack():top(-1) { } ~stack() {}  
		
		int push(const T& item)
		{
			data[++top]=item;
		}
		
		int pop()
		{
			--top;
		}
		const T& top() const 
		{
			return data[top];	
		}		
		bool empty() const 
		{
			return top==-1;
		}
};

int main()
{
	char str[10]="ABCDE";
	stack<char> s;
	
	reversestring(s,str);
	
}

int reversestring(stack<char>& s, char *str)
{
	for(unsigned int i=0; i<strlen(str);++i)
	{
		s.push(str[i]);
	}
	
	cout<<"reverse string ";
	while(!s.empty())
	{cout<<s.top();
	s.pop();
	}
}




