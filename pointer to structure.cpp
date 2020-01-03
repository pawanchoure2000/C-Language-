
#include<stdio.h> 
#include<iostream>
using namespace std;
/*
struct Point 
{ 
int x, y; 
}; 

int main() 
{ 
struct Point p1 = {1, 2}; 

// p2 is a pointer to structure p1 
struct Point *p2 = &p1; 

// Accessing structure members using structure pointer  	    //p1 <- p2  TWO WAYS 

printf/("%d %d",*(p2).x,*(p2).y)
printf("%d %d", p2->x, p2->y); 
return 0; 
}
*/

//

/*
struct complex
{
	double re;
	double im;
}c={0.0,0.0};     //intialisation of struct re=0.0  im=0.0

int main()
{

	struct complex *p=&c;
								//TWO WAYS TO CALLSTRUCT MEMBER VIA POINTER 
	(*p).re=2.5;  
	//*(p).re=2.5;     //error    
	p->im=3.6;
	printf("re =%lf \n",c.re);   //gives output upto 6 decimal places   2.500000
	//cout<<(*p).re;			
	printf("im =%lff \n",c.im);
	cout<<p->im<<endl<<p->re;
}
*/

//PASSING  ADDRESS OF STRUCTURE VARIABLE TO FUNCTION
/*
struct book
{
	char name[25];
	char author[25];
	int call;
 } ;
 
 int main()
 {
 	void display(struct book *);
 	struct book b1={"let us c","pawan",100};   //do not include "" in integer
 	display(&b1);
 }
 
 void display(struct book *b)
 {
 	cout<<b->name<<endl<<b->author<<endl<<b->call;
 }
*/






























