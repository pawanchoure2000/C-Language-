#include<iostream>
#include<cstring>		//strlen  //strcpy  
#include<stdlib.h>		//malloc()
using namespace std;

/*
unsigned int multiply(unsigned  x,unsigned y)	// (unsigned int x,unsigned int y)
{
	int prod=0;
	while (y-- > 0) prod+=x;
	return prod;
 } 
 //int  operator+(){
 //	return (x+y);
 //}
 //int operator=(){
 //	x=y;
 //	return x;
 //}
 

int main()
{
	unsigned int a=2,b = 3;
	unsigned int c=a*b;	//using * opertar 
	unsigned int d=multiply(a,b);	//using function
	//c++ introduce :opertar ketword
	//a+b : operatar+(a,b);
	//a*b : opertator*(a,b); 
	
//	operator=(c,operator+(a,b));		//opertar function
//	cout<<c;
}

//opertar : are infix ;operate on one/more operands  unary,binary,ternary; operation depand on precedence and associativity
//function :are prfix ,operate on zero/more argument ;operation depand on nesting
*/

 
/*
class addtion{ 
private: 
	int add;
public: 
	addtion(int a = 0) {add = a;} 	//constructar
	
	// This is automatically called when '+' is used with 
	// between two Complex objects 
	addtion operator +(addtion const &obj)	//function returntype is addtion(class addtion)		//opertar function
	{
	addtion res;	
	res.add = add + obj.add; 
	return res; 	//return of type class_addtion
	} 
	void print() { cout <<"addition is :" <<add; } 
}; 

int main() 
{ 
	addtion c1(10), c2(2); //object 
	addtion c3 = c1 + c2; // An example call to "operator+" 
	c3.print(); 
} 
 */
 
 
 //concatenation by string function
 /*
 typedef struct string{
 	char *str;
 }s;
 
 int main()
 {
 	s fname,lname,name;
 	fname.str=strdup("pawan");
 	lname.str=strdup("rockstar");
 	name.str=(char*)malloc(  strlen(fname.str) +  strlen(lname.str)  + 1);
 	strcpy(name.str,fname.str);
 	strcat(name.str,lname.str);
 	
 	cout<<name.str;
 }
 */
 
 /*
 //concatenation by operator
  typedef struct _string{
 	char *str;
 }string1;
 
 string1 operator +(string1 const &s1, string1 const  &s2)
{
	string1 s;
	s.str=(char*)malloc( strlen(s1.str) + strlen(s2.str) +1 );
	strcpy(s.str,s1.str);
	strcat(s.str,s2.str);
	return s;
 } 
 
 int main()
 {
 string1 fname,lname,name ;
 fname.str=strdup("pawan");
 lname.str=strdup(" the badshaa");
 
 name=fname + lname;
 cout<<"name is "<<name.str;
 }
 
 */
 
 /*
 //w/o overloading
 enum e {c0=0,c1=1,c2=2 };
 
 int main()
 {
 	e a=c1 , b=c2;
 	int x=-1;
 	
 	x=a+b;
 	cout<<x;
 	
 }
 */
 
 //overloading opertar +
 /*
 enum e {c0=0,c1=1,c2=2 };
 e operator+(const e& a,const e&b)
 {
 	unsigned int uia=a,uib=b;
	 unsigned int t=(uia+uib)%3;
	 return (e)t;	
 }
 
 int main()
 {
 	e a=c1 , b=c2;
 	int x=-1;
 	
 	x=a+b;
 	cout<<x;	
 }
 */
 
 //no new opertar such as ** <>  &|  they cannot be overloaded 
 //prefix opetar : mytype& opertar++(mytype& s1)
 //postfix opertar : mytype opertar++(mytype& s1,int )
 // :: . .*  sizeof ?:  cannot be overloaded 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
