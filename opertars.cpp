
#include<stdio.h>
#include<conio.h>
#include<stdlib.h> //system("cls")
#include<stdbool.h>
#include<iostream>
using namespace std;

int main()
{  
/*  
   // system("cls");
	int a=(1,2,3,4,5) ;		//() high precedence than = 
							//() evalute from left to right i.e, a=5
							
//	int	b=5,6,7,8,9;		//= high precedence than , i.e,  b=5
	
	int b=5, c=10;
	// < > <= >= ==  !=  RELATIONAL OPERATORS
	cout<<"RELATIONAL OPERATORS";
	printf("a=5,b=5 c=10\n");
	printf(" a==b %d\n",a==b);
	printf("a!=b %d\n", a!=b);
	printf(" a==c %d\n",a==c);
	printf(" a>b %d\n",a>b);
	printf(" a>c %d\n",a>c);
	printf("a<b %d\n ",a<b);   
	printf("a!=c %d\n",a!=c);	
    printf("a>=b %d\n",a>=b);
	printf("a>=c %d\n",a>=c);
    printf("a<=c %d\n",a<=c);	
	cout<<"endl";			
       
    // &&  || ! LOGICAL OPERATORS result is 0 or 1
    cout<<"LOGICAL OPERATOR";
    if ( a  && b==5 )
    printf("a eq. to b\n");
	if(a)
	printf(" a is not zero\n");
	if(!a)
	printf("a is zero\n  ");
	int x=0;
	if(x)
	printf(" x is not zero\n");
	if(!x)			// condition to check zero
	printf(" x is zero\n");
       						// if(a&&b)
    					//	printf("??");
    if(a>4  || b>1)		
	printf("cond. true ")	;
	cout<<endl;
	
	//short -circuiting in logical
	
    bool res=((a==b)&& printf("geeks"))	; // a is equal to b  condition true  also geeks is being printed i.e, res=1
	cout<<endl<<res<<endl;	
	
 int 	x1=10, x2=4;
	bool res1=((x1==x2)&&printf("geeks")); // x1 not eq. to x2  i.e,  res1=0
	cout<<endl<<res1<<endl;
	
	bool res2=((x1==x2)|| printf("geeksquiz"));		// 1st condition false  i.e, res2=1 
	cout<<endl<<res2<<endl;		
	return 0;
	
   */
// &and  |or  ^xor <<leftshift   >>rightshift  ~not     BITWISE OPERATAR   returen integer value
cout<<"BITWISE OPERATION"<<endl;
unsigned char a1=5,a2=9; 	//5=00000101	9=00001001
cout<<a1<<a2<<endl;
cout<<"a1&a2"<<a1&a2;


}
