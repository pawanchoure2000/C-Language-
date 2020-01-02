// C program to demonstrate 
// pointer to an array. 

#include <stdio.h> 

int main() 
{ 

	// Pointer to an array of five numbers 
	int(*a)[5]; 

	int b[5] = { 1, 2, 3, 4, 5 }; 

	int i = 0; 

	// Points to the whole array b 

	a = &b; 
		printf("size of pointer a \n");
	printf("%d",sizeof(a));  //8


	for (i = 0; i < 5; i++) 

		printf("%d\n", *(*a + i)); 

	return 0; 
} 
// C program to demonstrate 
// pointer to an array. 

#include <stdio.h> 

int main() 
{ 

	// Pointer to an array of five numbers 
	int(*a); 

	int b[5] = { 1, 2, 3, 4, 5 }; 

	int i = 0; 

	// Points to the whole array b 
	  
		printf("size of pointer a \n");
	printf("%d",sizeof(a));  //8


	a = b; 
		printf("size of pointer a \n");
	printf("%d",sizeof(a));        //8

	for (i = 0; i < 5; i++) 

		printf("%d\n",(*a + i)); 

	return 0; 
} 


/////////											///////////								/////////////													///////////
// C program to demonstrate 
// example of array of pointers. 

#include <stdio.h> 

const int SIZE = 3; 

void main() 
{ 

	// creating an array 
	int arr[] = { 1, 2, 3 }; 

	// we can make an integer pointer array to 
	// storing the address of array elements 
	int i, *ptr[SIZE]; 

	for (i = 0; i < SIZE; i++) { 

		// assigning the address of integer. 
		ptr[i] = &arr[i]; 
	} 

	// printing values using pointer 
	for (i = 0; i < SIZE; i++) { 

		printf("Value of arr[%d] = %d\n", i, *ptr[i]); 
	} 
} 

#include <stdio.h> 

const int size = 4; 

void main() 
{ 

	// array of pointers to a character 
	// to store a list of strings 
	char* names[] = { 
		"amit", 
		"amar", 
		"ankit", 
		"akhil"
	}; 

	int i = 0; 

	for (i = 0; i < size; i++) { 
		printf("%s\n", names[i]); 
	} 
} 

