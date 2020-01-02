/* C++ Program to demonstrate use of left shift 
operator */
#include<iostream>
using namespace std; 
int main() 
/*
//left shift
{ 
	// a = 5(00000101), b = 9(00001001) 
	unsigned char a = 5, b = 9; 

	// The result is 00001010 
	printf("a<<1 = %d\n", a<<1);      //  <<left shift the bits ,include the zero (0) in right side
											
	// The result is 00010010 		 //MULTIPLY BY TWO				//can not use 1<<a   , 1<<b
	printf("b<<1 = %d\n", b<<1); 
	return 0; 
} 
*/
/*
//right shift 
{ 
    // a = 5(00000101), b = 9(00001001) 
    unsigned char a = 5, b = 9;  
  
    // The result is 00000010  
    printf("a>>1 = %d\n", a>>1);   //  >> right shift the bits,include the zero in left side
    
    // The result is 00000100 		//DIVIDE BY TWO 
    printf("b>>1 = %d\n", b>>1);   
    return 0; 
} 
*/
/*
//right shift , left shift not too be used for NEGATIVE NUMBER  undefined result 
{
	int a=-1,b=-200;
	cout<<(a<<1);  //-2
	cout<<(a>>1);  //-1   here the result is undefined 
}
*/

//right shift , left shift can be used for char type

{
	char a='a';
	cout<<(a<<1);   //194
}


/*
//if the number is shifted more than the size of integer, the behaviour is undefined
{
 int a=1;
	cout<<(a<<99);45	//	[Warning] left shift count >= width of type
}
*/
//The left-shift of 1 by i is equivalent to 2 raised to power i
/*
{
//	int i=3;
	cout<<(1<<i);  //multiply by 2
	
}
*/
//The right-shift of 1 by i is equivalent to it's normal operation
 /*
{
	int i=1; 			//5=0101     2=0010
	cout<<(5>>i);    //shift bits of 5 ith  times
}
*/






