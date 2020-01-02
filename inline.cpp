#include<iostream>
using namespace std;
inline int square(int x){	return x*x;  }		//donot show pitfall but type checking is done 	IMPORTANT
int main()
{
	int a=3,b;
	b=square(a);
	cout<<b;
	
}

//compiler does not inline if it does not find usefull 
//compiler might have inline the function even if we have not specify the inline keyword

//recursive function cannot be inline .... as function call same/different func over and over again
//inling function must not have different defination.... 

//the inline function is expanded (inlined) at site of function call ....
//i.e, overhead of passing parameter is avoided



