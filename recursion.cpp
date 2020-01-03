 //direct recursive if it calls the same function 
 //called indirect recursive if it calls another function 
 // A C++ program to demonstrate working of 
// recursion 
#include<bits/stdc++.h> 
using namespace std; 

void printFun(int test) 
{ 
	if (test < 1) 
	{
	printf("hi \n ");
		return;
	}
	else
	{ 
		cout << test << " "; 
		printFun(test-1); 		// memory  is allocated on top of memory		 // different copy of local variables is created for each function call. 
		
		printf("hello \n");    //base case is reached // memory is de-allocated and the process continues
		cout << test << " "; 
		return; 
	} 
} 

int main() 
{ 
	int test = 3; 
	printFun(test);   //function is called from main(), the memory is allocated to it on the stack.
} 

