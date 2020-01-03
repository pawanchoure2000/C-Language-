#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
/*	
int  p;
int *q;		 //address
    // q vare that store address of another vare 

   // value at address in j is as int											MY FAVOURAITE	
	
char *ch;    //ch contain address of char
float *fl;	//s contain floating pt. 
int i=3;											//location name			                i		<--	-	 j		<---		k      <--    l                        
int *j;												//value	at location		              [ 3 ]      *j     [600]             [601]			 ,,,	and this go on....		 		  
int **k;								            //location no.(adress)                 600        j     601              602			,,,,				     
int ***l;
																	
j=&i;
k=&j;
//l=&j; // l cannot pt. to j as k is already pointing to j
l=&k;

cout<<"address of i\n"<<&i<<endl<<j<<endl<<*k<<endl<<**l<<endl;       //*k MY FAVOURITE
cout<<"address of j\n"<<&j<<endl<<k<<endl<<*l<<endl;
cout<<"address of k\n"<<&k<<endl<<l<<endl;

cout<<"value of j\n"<<j<<endl;     // j value depand only to which it is pointing  i.e i      {ADDRESS}	 [SAME AS address of i ]								
cout<<"value of k\n"<<k<<endl;   //ADDRESS                                                               [SAME AS address of j]
cout<<"value of i\n"<<*(&i)<<endl<<*j<<endl<<**k<<endl<<i<<endl;


//CHAR ,INT ,FLOAT POINTER
char c='A',*cc;   // c store ASCII value
int i=45,*ii;
float a=3.19,*aa;
cc=&c;
ii=&i;
aa=&a;
cout<<"address of i   "<<ii<<endl;					//	what's the difference
printf("ADDRESS OF i   %u\n",ii);					//LOL !!!!!!                   ii  store address of first byte called base address       MY FAVOURITE
cout<<"address of a    "<<aa<<endl;                             //      printf%u store address of first byte out of 4
cout<<"address of c	   "<<cc<<endl;                 
cout<<"value of c,i,a res. \n "	
	" is given as following";
cout<<*cc<<*ii<<*aa;


//BINARY EQUIVALENT
int i=54;
float a=3.14;
char *ii,*aa; 																	//       i     <--     ii                  a     <--      aa
ii=(char*)&i;															//value			54	                             3.14
aa=(char*)&a;

printf("address of i %u \n",ii);
printf("address of a %u \n",aa);
printf("value at i %u \n",*ii);  //gives binary equivalent of 1(chsr) out of 2(int)                      MY FAVOURITE
printf("value at a %u \n",*aa);  //-----//----------------//---------------- 4(float)

*/
/*
//pointer as same name
float a=7.8888;
float *b,*c;
b=&a;   c=&a;			//  	a    <--    b/c              c&a is same as c=a      MY FAVOURITE
cout<<&a<<b<<c<<endl;				
cout<<a<<*(&a)<<*b<<*c<<endl;

*/
{
char *c=400; //invalid conversion int to char*     // *c=(char*)400; segmentation fault at iostream   //*c=&400 lvalue required as &operand
int *i=400;
long *l=400;
float *f=400;
double *d=400;

cout<<c<<c+1<<endl;
cout<<i<<i+1<<endl;
cout<<"c adress\n"<<c<<"address +1"<<c+1<<endl;
cout<<"i addres\n"<<i<<"address +1"<<i+1<<endl;
cout<<"f address \n"<<f<<"address +1"<<f+1<<endl;
cout<<"d address \n"<<d<<"address +1"<<d+1<<endl ;
}






	
	
}
w
