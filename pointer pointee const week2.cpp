#include<iostream>
#include<cstring>
using namespace std;
/*
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
}
*/

//const 
//consider pointed data
/*
int main()
{
	int m=4;
	const int n=4;
	const int* p=&n;	//pointed data is constant  but p may be made to point to different vare
	
	n=5;  //error n is declared as const 
	*p=5;	//error p is declared as const pointer 
	p=&m;		//IMP p is made to point to m 
	*p=8;		//as p is no longer is pointing to n it is pointing to m
}
*/
/*
//intresting 
int main()
{
	int n=4;
	const int* p=&n;
	n=5;	//okay as where n is deeclared as int it is not constant  
	*p=5;	//error as int* p is const  
}
*/

/*
//finally 
int main()
{
	const int n=5;
	int* p=&n;
	n=6;	//error as n is declared as const 
	*p=6; //okay as int* p is not constant  
}
*/
/*
//consider 
int main()
{
	int m=4,n=4;
	int* const p=&n;
	
	n=5;	//okay
	*p=6;	//okay
	
	p=&m;	//error 
}
*/
/*
//by extension ,both can be const 
int main()
{
	int m=4,n=4;
	const int* const p=&n;  //pointer and pointee both are constant 
	*p=7;	//error as  const int*
	p=&m;	//error as const p
}
*/

/*
//finally

int main()
{
	int n=5;
	int* p=&n;
	const int* p=&n;		//nonconstant pointer to const pointee			//draw a verticle line from *     if const right handside address const if left hand side data const 
	int* const p=&n;			//constant pointer to const pointee
	const int* const p=&n;		//constant pointer to non constant pointer 
}																						
*/
//const to char* string strdup() 
int main()
{
	char* str=strdup("IIT, bombay");
	str[0]='N';								//edit name
	cout<<"hi "<<str;
	str=strdup("MIT , bombay ");
	cout<<str;								//change name
	
	//stop editing the name
	const char*str1=strdup("IIT,bombay");
	//str1[0]='N';									//ERROR :edit name   [Error] assignment of read-only location '* str1'
	str1=strdup("MIT,BOMBAY");					//change name
	
	//stop changing name
	char* const str2=strdup("IIT,bombay");
	str2[0]='N';									//edit name
	str1=strdup("MIT,BOMBAY");					//ERROR : change name
	
}


















