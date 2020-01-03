#include<iostream>
#include<cstdio>
using namespace std;
int main()
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
	float p=23,*q;
	q=&p;
	
	cout<<"address of p before call "<<q;   //address                p  <--   q/r
	q=jam(&p); //call by reference
	cout<<"after call"<<q;     //address
	cout<<"same or incremented value"<<p;   //address
	return 0;
}

float *jam(float *r)         //*jam       float *jam(float r) give error
{
	r=r+1;  // increasing the address by 1       //gives same p
	*r=*r+1;    //gives incremented the value being pointed to by r i.e, p
	cout<<"address of r"<<r;    //address is equal to q
	return r;
}
*/

//////++*ptr same as  (*ptr)++         increment the value a             a   <---  ptr 
/*
{
int *j;
void fun(int **);
fun(&j);                                //             *j=arbitary/garbage  ADDRESS                                     
}                                                  

void fun(int *(*k) )        //same as **k=&j                                                     //    a  <--   *k            *j     <--**      **k  
{                                                                //    value                   //   10          600            address        10
	int a=10;                                                    //address					  //   600          601              601
	*k=&a ;         //cannot convert int* to int**[k=*a]
	cout<<k;
	cout<<*k<<&a;   //*k same as &a
	cout<<**k;   // *(*k) 10               MY FAVOURITE
	
}      // WHY K CANNOT HOLD ADDRESS

*/


	
