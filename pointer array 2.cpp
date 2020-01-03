#include<iostream>
using namespace std;
// C program to understand difference between 
// pointer to an integer and pointer to an 
// array of integers. 
int main() 
{ 
	// Pointer to an integer 
	int *p; 
	
	// Pointer to an array of 5 integers 
	int (*ptr)[5]; 
	int arr[5]; 
	
	// Points to 0th element of the arr. 
	p = arr; 
	
	// Points to the whole array arr.   // base type of p is int while base type of ptr is ‘an array of 5 integers’.
	ptr = &arr; 
	
	printf("p = %p, ptr = %p\n", p, ptr); 
	
	p++; 
	ptr++; //ptr will be shifted forward by 20 bytes  (int 4 bytes ) for 5 elements =20 bytes
	
	printf("p = %p, ptr = %p\n", p, ptr); 
	cout<<*p<<*ptr;       //*p is 2  //*ptr is 318332 {GARABAGE VALUE}
	return 0; 
} 

//* is nothing but a dereferencing  a pointer
//dereferencing a pointer expression we get a value pointed to by that pointer 
//pointer to an array is dereferenced, we get the base address of the array to which it points.
// C program to illustrate sizes of 
// pointer of array 
int main() 
{ 
	int arr[] = { 3, 5, 6, 7, 9 };                                                 //   3   <---   p
	int *p = arr; 
	int (*ptr)[5] = &arr;                  												//   { 3, 5, 6, 7, 9 }    <----     ptr 
	
	printf("p = %p, ptr = %p\n", p, ptr);    //gives same address
	printf("*p = %d, *ptr = %p\n", *p, *ptr);   //*p=3   //*ptr gives same  address as ptr %p SPECIFIER USED
	cout<<*ptr;//GARBAGE VALUE
	
	printf("sizeof(p) = %lu, sizeof(*p) = %lu\n", 
						sizeof(p), sizeof(*p));           //sizeof(p) = 8, sizeof(*p) = 4
	printf("sizeof(ptr) = %lu, sizeof(*ptr) = %lu\n", 
						sizeof(ptr), sizeof(*ptr));       //sizeof(ptr) = 8, sizeof(*ptr) = 20(4 multiply 5)
						
	return 0; 
} 

int main() 
{ 
int arr[3][4] = { 
					{10, 11, 12, 13}, 
					{20, 21, 22, 23}, 
					{30, 31, 32, 33} 
				}; 
int (*ptr)[4]; 
ptr = arr; 
printf("%p %p %p\n", ptr, ptr + 1, ptr + 2); 
printf("%p %p %p\n", *ptr, *(ptr + 1), *(ptr + 2)); 
printf("11 addrss is%d 21  address is %d 31 address is %d\n",*ptr+1,*(ptr+1)+1),*(ptr+2)+2; 
printf("%d %d %d\n", ptr[0][0], ptr[1][2], ptr[2][3]); 
return 0; 
} 









