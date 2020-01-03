#include<stdio.h>
int main()
{
	char str[10]="ABCDE";
	stack s;
	s.top=-1;
	
	for(i=0;i<strlen();i++)
	push(&s,str[i]);
	
	printf("reversed string");
	
	while(!empty(&s))
	{
		printf("%s",&s);
		pop(&s);
	}
}
