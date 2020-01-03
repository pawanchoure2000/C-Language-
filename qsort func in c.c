#include<stdio.h>
#include<stdlib.h>

int compare (const void *a,const void *b)  //void because do not know the type of data 
{
	return(*(int *)a<*(int *)b);	//explicit conversion to int 
}

int main()
{
	int data[]={2,1,56,23,12};
	qsort(data,5,sizeof(int),compare);	//base address ,no. of element from index 0 ,sizeof for memory address of next vare , compare the data 
	
	for(int i=0;i<5;i++)
	printf((const char*)data[i]);
}
