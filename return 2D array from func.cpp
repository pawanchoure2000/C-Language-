#include<iostream>
using namespace std;
#define  row 3
#define col 4
int main()
{
	int i,j;
	
	int *a;
	int *fun1();
	
	int (*b)[col];
	int (*fun2())[col];
	int *p;
	
	int (*c)[row][col];
	int (*fun3())[row][col];
	
	a=fun1();
	cout<<"array  a[][] in main \n ";
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		cout<<*(a+i*col+j);
		cout<<endl;
	}
	
	b=fun2();
	cout<<"array b[][] in main  \n";
	for(i=0;i<row;i++)
	{
		p =(int *) b+i;     //  converted  int(*)[4]  to  int *  explicity
		for(j=0;j<col;j++)
		{
			cout<<*p;
			p++;
		}
		cout<<endl;
	}
	
	c=fun3();
	cout<<"array  c[][] in main \n";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		cout<<(*c)[i][j];
		cout<<endl;
	}
	
	
}  //end of main()
	
	
int *fun1()
{
	static int a[row][col]={
								1,2,3,4,
								5,6,7,8,
								9,0,1,6
										};
										
	int i,j;
	cout<<"array a[][] in fun 1()\n"	;
	for(i=0;i<row;i++)
	{
	    for(j=0;j<col;j++)
		cout<<a[i][j];
		cout<<endl;
	}
	return (int *)a;									
}  //end of fun1()

int (*fun2())[col]
{
	static int b[row][col]={
							 9,4,6,4,
							 1,3,2,1,
							 7,5,1,6
										};
	int i,j;
	cout<<"array b[][] in fun2()\n";
	for(int i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		cout<<b[i][j];
		cout<<endl;
	}
	return b;							
										
}  //end of fun2()

int (*fun3())[row][col]
{
	static int c[row][col]={
							6,3,9,1,	
							2,1,5,7,
							4,1,1,6
							        };
	int i,j;
	cout<<"array c[][] in fun3()";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		cout<<c[i][j];
		cout<<endl;
	}
	return (int (*)[row][col])c;
}			//end of fun3()




















