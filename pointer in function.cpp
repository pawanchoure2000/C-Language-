#include<iostream>
#include<cstdio>
using namespace std;
int main( )
/*{
	
	int *p;
	int *func();
	p=func();
	cout<<p<<*p;
	
}
int *func()
{
	int i=20;
	return(&i);
}*/

				//hahaaaaa
/*
{
	int *c;
//	int *check(int);              //imp statment to make run
	c=check(10);
	cout<<c;
	
}
int check(int i)			//error as func check can not return addresss(int poinnter )   so declare func as pointer   int *cheeck(int i)
{
	int *p;
	p=&i	;
	return p;			
}
*/
/*
{
	float *jam(float*);   // return type float(*jam)	//call by reference(float*)
	float p=23.5,*q;
	q=&p;
	cout<<"address"<<q;   //address
	q=jam(&p); //call by reference
	cout<q;   
}

float *jam(float *r)
{
	r=r+1;
}

*/
//*ptr++ increment pointer               ++  has high precedence than *
//++*ptr increment value being pointer   

/*
{
	float i=10,*j;
	void *k;            //void pointer 
	k=&i;    // void  pointer no type casting required    (float to void) (int to void) (long to void) (double to void) (long double to void) (long long to void)  and many more    MY FAVOURITE
	k++;            //arithemetic on void pointer is  not permitted (ERROR OR WARNING)
	j=k;            //ERROR 
	j=(float*)k;     // conversion req. from void to float but no coonversion req. while passing address from float to void      i.e,  void high precedence than other datatype 
    cout<<*j;
	
}                 
*/
//just an example bro of previous exercise
/*
{
	int *p1,i=25;
	void *p2;
	p1=&i;
	p2=&i;
	p1=p2;   //error  use p1=(int*)p2
    p2=p1;
}
*/
//example  bhai
/*
{
	float *p1,i=25.5;
	char *p2;
	p1=&i;
	p2=&i;  //error    use  p2=(char*)&i
	
}
*/
//NULL macro represent null pointer with value zero  in source code      // files "stdio.h"    "stddef.h"
//NULL pointer donot point to anywhere








	
	
	
	
	
