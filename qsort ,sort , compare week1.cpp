
/*#include<stdio.h>
#include<stdlib.h>

int compare (const void *a,const void *b)  //takes two value and compare  //const pointer to constant data of unknown type  //qsort doesnot put signature for compare function pointer bec donot knoe what type of data 
{
	return(*(int *)a<*(int *)b);
}

int main()
{
	int data[]={2,1,56,23,12};
	qsort(data,5,sizeof(int),compare);  //c function //qsort doesnot know what type(int,char) of data  IMP//(address ,no. of element,size in bytes,function pointer)
	
	for(int i=0;i<5;i++)
	printf((const char*)data[i]);
}
*/

/*
#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int i,int j)
{
	return (i>j);
}
int main()
{
	int data[]={32,71,12,45,26};
	sort(data,data+5,compare);    //c++ function  //do not need to specify the ssize of int
	
	for(int i=0;i<5;i++)
	cout<<data[i]<<"  ";
}
*/


#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int data[]={32,71,12,45,26};
	sort(data,data+5);		//if sorting array of type known to c++(built in type)  //then optional to provide comparison function 
	//and by default sorting occur in asscending order
	//if need to sort in descending order then need to specify the compare function
	
	for(int i=0;i<5;i++)
	cout<<data[i]<<"  ";
	
}
	
