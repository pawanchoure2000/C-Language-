#include<iostream>
#include<algorithm>

using namespace std;
// 1st method 

/*
bool compare (int i,int j)
{
	return(i>j);	//in descanding order     //return(j>i); in ascending order  	
}

int main()
{
	int data[]={12,21,23,56,13};
	
	sort(data,data+5,compare);	//size is passed
	
	for(int i=0;i<5;i++)
	cout<<data[i]<<"\t";
}
*/
// 2nd method 
/*
	int main()
{
	int data[]={23,12,45,65,2,78,11};
	sort(data,data+5);	//array of type known to c++ i.e builtin datatype  not necessary to provide compare function 
	
	for(int i=0;i<5;i++)			//by default sorting occur in asceending order
	cout<<data[i]<<"\t";
}
*/
