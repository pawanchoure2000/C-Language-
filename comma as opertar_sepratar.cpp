#include<iostream>
using namespace std;
/* comma as an operator */
int f1();
int f2();
int fun(int, int);

int main()
{
	/* comma as an operator */  // LEFT TO RIGHT 
int i = (5, 10); /* 10 is assigned to i*/	//discard the result of first operand

int b;
i=5,b;  //comma as sepratar    /*5 is assigned to i*/  MY FAVOURITE   = greter precednce than ,
																	
int j = (f1(), f2()); /* f1() is called (evaluated) first followed by f2().			 //200 is assigned to j     //discard the result of first operand i.e f1() 
					The returned value of f2() is assigned to j */
					
cout<<i<<endl<<j;		

//function calls and definitions, function like macros, variable declarations, enum declarations
//comma sepratar
/* Comma acts as a separator here and doesn't enforce any sequence. 
	Therefore, either f1() or f2() can be called first */

int k=fun(f1(), f2());    //comma as sepratar
cout<<k<<endl;
printf("in (i,j,k) %d",(i,j,k))  ; //comma as opertar

i=(i+2,i+3);						//comma as opertar
cout<<"after (++i,--i)"<<endl<<i;   //i=13

 j = (i++, printf("i = %d\n", i), ++i, printf("i = %d\n", i), ++i);   	//all operand get executed and value of last operand is assigned to j
 cout<<"after this long statment "<<j;    //16

}
int f1()
{
	return 100;
}
int f2()
{
	return 200;
}
int fun(int x=f1(),int y= f2())
{
	return (x+y);
}

