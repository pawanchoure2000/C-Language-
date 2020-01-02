#include<iostream>
using namespace std;
int main()
{
	int func(char *a)
	{
	if(*a && *a != ' ' )
	func(a+1);
	putchar(*a);
	}
}
