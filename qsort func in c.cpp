#include<stdio.h>
#include<stdlib.h>

int compare (const void *a,const void *b)
{
	return(*(int *)a<*(int *)b);
}

int main()
{
	int data[]={2,1,56,23,12};
	qsort(data,5,sizeof(int),compare);
	
	for(int i=0;i<5;i++)
	printf((const char*)data[i]);
}
