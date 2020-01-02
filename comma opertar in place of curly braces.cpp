// C++ program to show how to use 
// comma in place of curly braces 
// for if-else statements 

#include <iostream> 
using namespace std; 

void func(int num) 
{ 
	if (num < 10) 
		cout << "It shows how we can use "
			<< "comma operator in place of curly braces.\n", 
			cout << "Entered number is less than 10\n", 
			cout << "end of if block is encountered\n\n"; 
	else
		cout << "Now we are in else part\n", 
			cout << "Entered number is greater than 10\n", 
			cout << "End of else is encountered\n\n"; 
} 

int main() 
{ 
	int num = 5; 
	func(num); 

	num = 20; 
	func(num); 
	
	for(int i=0;i<5;i++)
	cout<<"the loop without curly braces ",
	cout<<"mention comma if want to mention cout in next statment "
	     <<"and semicolan at the termination of loop\n"
	     <<i;     

	return 0; 
} 

