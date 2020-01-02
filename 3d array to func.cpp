#include<iostream>
using namespace std;
int display(int *a,int ii ,int jj ,int kk );
 int show(int (*a)[4][2],int ii,int jj ,int kk);
 int print(int [][4][2],int ii,int jj ,int kk);
int main()
{
	int a[3][4][2]={         
		             { {2,4},
		               {7,8},    
		               {3,4},        //0 2d array         1 2d array        2 2d array
					   {5,6} },      //2 4 7 8 3 4  5 6 _ 7  6 3 4 5 3 2 3 _8  9 7 2 3 4 5 1
					                //401                417 		    	433
					 { {7,6},
					   {3,4},
					   {5,3},
					   {2,3} },
					   
					 { {8,9},
					   {7,2},
					    {3,4},
						{5,1} } //refer 1:  [2] array in 3rd 2D array ; [3] array in fourth row ;[2] array in second coloum
						       };
	display(a,3,4,2);
	show(a,3,4,2);
	print(a,3,4,2);                      
}
int display(int *a,int ii,int jj,int kk)
{
	int i,j,k;
	for(i=0;i<ii;i++)
	{
		for(j=0;j<jj;j++)
		{
			for(k=0;k<kk;k++)
			cout<<*(a+i*jj*kk+j*kk+k)<<endl;
		}
		cout<<endl;
	}
	cout<<endl;
}

int show(int *a[4][2],int ii,int jj,int kk)
{
	int i,j,k;
	int *p;
	for(i=0;i<ii;i++) 
	{
		for(j=0;j<jj;j++)
		{
			p=a[i][j];
			for(k=0;k<kk;k++)
			cout<<*(p+k);
			cout<<endl;
		}
		cout<<endl;
	}
}

int print (int a[][4][2],int ii,int jj,int kk)
{
	int i,j ,k;
	for(i=0;i<ii;i++)
	{
		for(j=0;j<jj;j++)
		{
			for(k=0;k<kk;k++)
			cout<<a[i][j][k];
			cout<<endl;
		}
		cout<<endl;
	}
}
