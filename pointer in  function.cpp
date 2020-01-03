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
{
	float *jam(float*);   // return type float(*jam)	//call by reference(float*)
	float p=23.5,*q;
	q=&p;
	cout<<"address of p"<<q<<endl;   //address
	q=jam(&p); //call by reference
	cout<<q;   
}

float *jam(float *r)         //*jam 
{
	r=r+1;
}




	
