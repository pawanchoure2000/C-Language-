#include"stack.h"
#include<iostream>
using namespace std;
int main()
{
	stack s;
	char str[10]="abcdefgh";
	for(int i=0;i<5;i++)
	{
		s.push(str[i]);
	}
	
	while(!s.empty())
	{
		cout<<s.top();s.pop();
	}
}
