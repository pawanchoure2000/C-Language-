#include<iostream>
using namespace std;
/*
//tail recursion
// An example of tail recursive function        // recursive call is the last thing executed by the function    //can be optimized by compiler.
int print(int n) 
{ 
	if (n < 0) return 0; 
	cout << " " << n; 

	// The last executed statement is recursive call 
	print(n-1); 
} 
int main()
{
	print(5);
}
*/
/*
#include<iostream> 
using namespace std; 

// A NON-tail-recursive function. The function is not tail 
// recursive because the value returned by fact(n-1) is used in 
// fact(n) and call to fact(n-1) is not the last thing done by fact(n) 
unsigned int fact(unsigned int n) 
{ 
	if (n == 0) return 1; 

	return n*fact(n-1);      //n* make it as non-tail recursion
} 

// Driver program to test above function 
int main() 
{ 
	cout << fact(5); 
	return 0; 
} 
*/
/*
#include<iostream> 
using namespace std; 

// A tail recursive function to calculate factorial 
unsigned factTR(unsigned int n, unsigned int a) 
{ 
	if (n == 0) return a; 

	return factTR(n-1, n*a); 
} 

// A wrapper over factTR 
unsigned int fact(unsigned int n) 
{ 
return factTR(n, 1); 
} 

// Driver program to test above function 
int main() 
{ 
	cout << fact(5); 
	return 0; 
} 
*/
//tail call elimination        		//tail call elimination 				/tail call elimination
// Above code after tail call elimination 
/*
void print(int n) 
{ 
start: 
	if (n < 0) 
	return; 
	cout << " " << n; 

	// Update parameters of recursive call 
	// and replace recursive call with goto 
	n = n-1 
	goto start; 
} 
*/
