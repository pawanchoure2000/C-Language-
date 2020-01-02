
//c++ programme 
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

	
int main()
{
	int data[]={23,24,5,21,3};
	int key=223;
	
	if(binary_search(data,data+5,key))
	{
		printf("found  !!!");	}
	
	else 
	
	{
	printf("not found !!");		}
	
}

/*
//c programe
#include<stdlib.h>
#include<stdio.h>
#include<iostream.h>

	int compare(const void *a,const void *b)
	{
		if (*(int *)a <   *(int *)b)  return -1;
		if (*(int *)a ==  *(int *)b)  return 0;
		if (*(int *)a >   *(int *)b)  return 1;		
	}	
int main()
{
	int data[]={23,24,5,21,3};
	int key=3;
	
	if(bsearch(&key ,data,5,sizeof(int),compare));
	
{
		printf("found  !!!");	}
	
	else 
	
{
		printf("not found !!");	}
}
*/
