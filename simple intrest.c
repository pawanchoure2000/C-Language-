#include<stdio.h>
int main()
{
	unsigned float pr,rate,time;
	unsigned float sim;
	printf("enter amount , rate , time ");
	scanf(" %fu %fu %fu",&pr,&rate,&time);
	sim=(pr*rate*time)/100;
	printf("%fu ", sim);
	return 0;
}
