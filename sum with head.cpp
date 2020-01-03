
#include<stdio.h>
#include<conio.h>
#include"addhead.h"
int  main ()

{
    
	int a,b,sum;
	printf("enter a and b");
	scanf("%d",&a);
	scanf("%d",&b);
	//sum=a+ b;
	sum = addhead(a,b);
	printf("sum is ");
	printf("%d",sum);
	return 0;
	getch();	
	
}


