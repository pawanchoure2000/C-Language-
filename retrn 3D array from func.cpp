#include<iostream>
using namespace std;
#define set 2
#define row 3
#define col 4
int main()
{
	int i,j,k;
	
	int *a;
	int *fun1();
	
	int (*b)[col];
	int (*fun2())[col];
	
	int (*c)[row][col];
	int (*fun3())[row][col];
	int *p;
	
	int (*d)[set][row][col];
	int (*fun4())[set][row][col];
	
	a=fun1();
	cout<<"array a[][] in main";
	for(i=0;i<set;i++)
	{
		for(j=0;j<row;j++)
		{
			for(k=0;k<col;k++)
			cout<<*(a+i*row*col+j*col+k);
			cout<<endl;
		}
		cout<<endl;
	}
	
	b=fun2();
	cout<<"array b[][][] in main() :";
	for(i=0;i<set;i++)
	{
		p=(int *)(b+i*row);
		for(j=0;j<row;j++)
		{
			for(k=0;k<col;k++)
			{
			cout<<*p;
			p++;
	     	}
		cout<<endl;
     	}
	cout<<endl;	
   }

	c=fun3();
	cout<<"array c[][][] in main()";
	for(i=0;i<set;i++)
	{
	p=(int *)(c+i);
	for(j=0;j<row;j++)
	{
		for(k=0;k<col;k++)
		{
		cout<<*p;
		p++;
		}
		cout<<endl;
	}
	cout<<endl;
	}


	d=fun4();
	cout<<"array d[][][] in main()";
     for(i=0;i<set;i++)
 	{
	for(j=0;j<row;j++)
	{
	for(k=0;k<col;k++)	
	cout<<(*d)[i][j][k];
	
	cout<<endl;
    }
	cout<<endl;	
  	}

}     //end of main()

	int *fun1()
	{
		int i,j,k;
		static int a[set][row][col]={ {1,2,3,4,
									   5,6,7,8,
									   9,3,2,1 },
									  { 2,3,5,7,
									    4,3,9,2,
										1,6,3,6 }  };
										
	cout<<"array a[][][] in fun1()";
	for(i=0;i<set;i++)
	{
		for(j=0;j<row;j++)
		{
			for(k=0;k<col;k++)
			cout<<a[i][j][k];
			
			cout<<endl;
		}
		cout<<endl;
	}									
		return(int*)a;								 	
	}               		//end of *fun1()

	int (*fun2())[col]
	{
	
		int i,j,k;
		static int b[set][row][col]={ {
									   9,4,6,4,
		                               1,3,2,1,
									   7,5,1,6
									   			},
									  {
									   6,3,9,1,
									   2,1,5,7,
									   4,1,1,6
									   			} };
												    
	cout<<"array b[][][] in fun2()";
	for(i=0;i<set;i++)
	{
		for(j=0;j<row;j++)
		{
			for(k=0;k<col;k++)
			cout<<b[i][j][k];
			
			cout<<endl;
		}
		cout<<endl;
	}											    
	return(int(*)[col])b;								 				
	}             				//end of *fun2()
	
	
	int (*fun3())[row][col]
	{
		int i,j,k;
		static int c[set][row][col]={ {
									   9,4,6,4,
		                               1,3,2,1,
									   7,5,1,6
									   			},
									  {
									   6,3,9,1,
									   2,1,5,7,
									   4,1,1,6 } };  
									   			     //  };
	cout<<"array c[][][] in fun3()";
	for(i=0;i<set;i++)
	{
		for(j=0;j<row;j++)
		{
			for(k=0;k<col;k++)
			cout<<c[i][j][k];
			
			cout<<endl;
		}
		cout<<endl;
	}											    
	return(int(*)[row][col])c;												    
	}
	
	int (*fun4())[set][row][col]
	{
		int i,j,k;
		static int d[set][row][col]={ {
									   9,4,6,4,
		                               1,3,2,1,
									   7,5,1,6
									   			},
									  {
									   6,3,9,1,
									   2,1,5,7,
									   4,1,1,6 } };  
									   			     //  };
	cout<<"array d[][][] in fun4()";
	for(i=0;i<set;i++)
	{
		for(j=0;j<row;j++)
		{
			for(k=0;k<col;k++)
			cout<<d[i][j][k];
			
			cout<<endl;
		}
		cout<<endl;
	}											    
	return(int(*)[set][row][col])d;												    
	}
	
	




























