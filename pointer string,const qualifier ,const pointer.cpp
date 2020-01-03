#include<iostream>
#include<cstring>
using namespace std;
//
/*
int main()
{
	//we can store string in 1.string OR 2.store in some location
	char str[]="hello";
	char *p="hello";
}
*/
	//DIFFERENCE we cannot assign new string to str ;but to pointer we can assign 	//in 50 rupyee ka at 700
	
	//const qualifier
	
	//it replace #define constants		IMP
	 
	//value of variable will not change 
	//attempt to change the vareiable will result into error ;
	// VAREIABLE often named in UPPERCASE as they are constant 
	
	//const is better than #define as it's scope can be controlled by placing inside function or outside all  function
	//
	/*
	int main()																															//IMPORTANT .....#### HAPPY  PROGRAMMING ##########
{
		
	
	char *p="hello";	//can assign new string to pointer as POINTER IS VARIABLE 
	*p='M';			//assigned single char		
	p="bye " ;//assigned string 
	
	const char *q="hello";		//STRING IS CONSTANT ;POINTER  IS NOT CONSTANT				//*q=string    q=pointer
	//*q='m';		//ERROR		[Error] assignment of read-only location '* q'
	cout<<*q;	//h
	cout<<q; //hello
	q="bye";
	cout<<*q;//b
	cout<<q;//bye
	
	char const *s="hello";		//STRING IS CONSTANT ;POINTER IS NOT CONSTANT 			//*s=string    s=pointer
	*s="do not work";
	s="it work";
	
	
	char *const t="hello";		//POINTER IS CONSTANT ; STRIING IS NOT CONSTANT
	*t='M';			
	//t="Bye";		//ERROR 	[Error] assignment of read-only variable 't'
	
	const char  *const u="hello";		//STRING IS CONSTANT  POINTER IS CONSTANT
	//*u='M';			//	[Error] assignment of read-only location '*(const char*)"hello"'    due to const char
	//u="Bye";p			//[Error] assignment of read-only variable 'u'							due to *const u		 
}
*/



//returning constant value 
const char *fun()
{
	return "RAIN";		//return CONSTANT  STRING  .
}

int main()
{
	const char *fun();							//STRING IS CONSTANT ;POINTER IS NOT CONSTANT
	const char *p;						//STRING IS CONSTANT ;POINTER IS NOT CONSTANT
	
	
	p=fun();
	//*p='a';	  //ERROR 
	p=(const char*)'A';	//[Error] invalid conversion from 'char' to 'const char*' [-fpermissive]  type conversion
	cout<<p;
	
}



















