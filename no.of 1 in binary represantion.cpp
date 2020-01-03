/*
#include<iostream>
using namespace std;
 int ones(int );
int main()
{
	 int c, n=100;
	c=ones(n);
	printf("%d",c);
}
 int ones(int n)
{
	if(n==0)
	return 0;  //exit
	
	else if (n%2==0)
	return ones(n/2);
	
	else
	return ones(n/2)+1;
			
}
*/
/*
#include<stdio.h>
int main()
{
    int i=0;
    int nNum;
    int nCount=0;
    printf("\nEnter the number: ");												//    	8   	4   	2   	1
    scanf("%d",&nNum);
    for(;i<(sizeof(int)*8);i++)
    {
        if(1&nNum)    // only work for odd as it gives 1
            nCount++;
       nNum = nNum>>1;    //no. divided by two 
    }
    printf("\nThe number of set bits are %d \n", nCount);
}
*/


#include <stdio.h>
#define INT_SIZE sizeof(int) * 8 /* Total number of bits in integer */

int main()
{
    int num, zeros, ones, i;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    zeros = 0;
    ones = 0;

    for(i=0; i<INT_SIZE; i++)
    {
        /* If LSB is set then increment ones otherwise zeros */
        if(num & 1)
            ones++;
        else
            zeros++;

        /* Right shift bits of num to one position */
        num >>= 1;
    }

    printf("Total zero bit is %d\n", zeros);
    printf("Total one bit is %d", ones);

    return 0;
}
