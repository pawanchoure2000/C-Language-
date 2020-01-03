#include<iostream>
#include<algorithm>
using namespace std;
/*
//replace()
int main()
{
	int data[]={12,34,21,3,33};
	replace(data,data+5,3,100);	//3rd element is replaced by 100
	
	for(int i=0;i<5;i++ )
	{
		cout<<data[i]<<"\t";
	} 
}
*/

//rotate()
int main()
{
	
int data[]={1,2,3,4,5};

rotate(data,data+2,data+5);				// 3 4 5 1 2 

for(int i=0;i<5;i++)
cout<<data[i]<<"\t";
}

