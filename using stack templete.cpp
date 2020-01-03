#include<iostream>
#include"stack.h"
using namespace std;
int main
{
	char str[10] ="ABCDE";
	stack<char> s;
	for(unsigned int i =0; i<strlen(str) ;++i)
	{
		s.push(str[i]);
	}
	
	cout<<"reversed string ";
	while(!s.empty())
	{
		cout<<s.top();
		s.pop();
	}
}
