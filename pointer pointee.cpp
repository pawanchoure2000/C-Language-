#include<iostream>
using namespace std;
int main()
{
	int x=5;
	int* y; //also cannot assign direct value to 
	//int* z=x;	//error invalid conversion from int* to int 
	int* z=y; 
	
	int m=4;
	int n=5;
	int *p=&n; //p point to n  *p=6
	
	n=6;	//n and *p are 6
	*p=7;	// n and *p are 7 .. pointee change
	
	p=&m;		//p point to m .*p is 4 .pointer  change 
	*p=8;		// m and *p are 8 . n is  7. pointee change 
	
	//const 
	
}
