/*
#include<iostream>
using namespace std;
int main()
{
	int n,i,j,bin=0,dn;
	printf("convert binary to decimal \n ");
	printf("enter no. ");
	scanf("^%d",&n);
	
	dn=n;
	i=1;
	
	for(j=n;j>0;j=j/2)
	{
		bin=bin+(n%2)*i;
		i=i*10;
		n=n/2;
	}
	printf("binary no is  \n  %d", bin);	
}
*/

//
/*
#include<iostream>
using namespace std;
int main()
{

	int n,count=0;
	int i,rem[10];
	cout<<"enter number";
	cin>>n;
	while(n>0)
	{
	
	rem[i]=n%2;
	n=n/2;
	i++;
	
	}

	cout<<" decimal place is";
	for(int j=i-1;j>=0;j--)
	{
	cout<<rem[j];
	}

}
*/
/*
// CPP program to Decimal to binary conversion 
// using bitwise operator 
// Size of an integer is assumed to be 32 bits 
#include <iostream> 
using namespace std; 

// Function that convert Decimal to binary 
int decToBinary(int n) 
{ 
	// Size of an integer is assumed to be 32 bits 
	for (int i = 31; i >= 0; i--) { 
		int k = n >> i; 
		if (k & 1) 
			cout << "1"; 
		else
			cout << "0"; 
	} 
} 

// driver code 
int main() 
{ 
	int n = 32; 
	decToBinary(n); 
} 
*/
///									/////					/////								///////									/////										//////	
/*
// C++ implementation of the approach 
#include <cmath> 
#include <iostream> 
using namespace std; 

#define ull unsigned long long int 

// Function to return the binary 
// equivalent of decimal value N 
int decimalToBinary(int N) 
{ 

	// To store the binary number 
	ull B_Number = 0; 
	int cnt = 0; 
	while (N != 0) { 
		int rem = N % 2; 
		ull c = pow(10, cnt); 
		B_Number += rem * c; 
		N /= 2; 

		// Count used to store exponent value 
		cnt++; 
	} 

	return B_Number; 
} 

// Driver code 
int main() 
{ 

	int N = 17; 

	cout << decimalToBinary(N); 

	return 0; 
} 
*/
