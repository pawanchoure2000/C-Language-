#include<stdio.h>
//int add();				//in c++ function with zero argument
int add()				// in c function with any number and type of  of argument 
{
	int a1,b1,res1;
	res1=a1+b1;
	return res1;
}
int main()
{
	int a,b,res;
	printf("enter a and b");
	scanf("%d %d",&a,&b);
	
	res=add(a,b);
	printf("result is:");
	printf("%d",res);
	return 0;
}
