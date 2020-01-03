#include<iostream>
#include<cstdio>
using namespace std;

/*{
	
	int *p;
	int *func();    //   i.e function will return a  float pointer  
	p=func();        //  therfore there should be pointer var^e  to recieve it
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
//OVER AND OUT				OVER AND OUT				OVER AND OUT				OVER AND OUT				OVER AND OUT			OVER AND OUT

/*
float a=3.14;
float **z;
float **y;
float ***x;
float ****v;
float ****w;

float **fun1(float *);
float ****fun2(float ***);
int main()
{
	z=fun1(&a);  //&a=*z ;z=&y            
	cout<<z<<*z<<**z;     //z=addres *z=address    **z=value(3.14)
}
float **fun1(float *z)   // INTRESTING input is pointer output is pointer to pointer i.e, z should be pointer to pointer        MY FAVOURITE        	//a<--z<--y<--<--x<--w/v
{
    y=&z;  //**z
    v=fun2(&y);
    return(**v);  //y
}	
float***fun2(float ***x)
{
	w=&x;
	return(w);  //&w
}

*/	
//OVER AND OUT				OVER AND OUT				OVER AND OUT				OVER AND OUT				OVER AND OUT			OVER AND OUT
	
	
