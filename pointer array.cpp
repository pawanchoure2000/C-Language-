#include<iostream>
#include<alloc.h> 
#include<cstdio>
using namespace std;
//no check iif subscript used for array exceeds size of array i.e data will placed in memory outside the array    ex int num[40];

//passing  array to function by call by reference 
/*
int disp(int *);
int main()
{
	int i;   //for index of array
	int marks[]={1,2,3,4};
	for(int i;i<=6;i++)
	disp(&marks[i]);
}
int disp (int *n)  //complete function  is executed by for loop
{
	cout<<"array is"<<*n;  //output is 1 if for loop not included   
	cout<<&n;     // same address is display
}
*/

//pointr arithemetic
/*
int main()
{
	int i=3,*x;                                
	float j=15,*y;
	char k='c',*z;
	
	cout<<i<<j<<k;
	
	x=&i;   //  address   let x be 100
	y=&j;   //  address   let y be 200
	z=&k;   //  address   let z be 300
	
	x++;     // address    becomes  104   difference 1   //pointer do not increment it by 1 it increment it by the data type of to which it is pointing to here address is incremente d by 4  
	y++;     // address    becomes   204  difference 1             
	z++;      // address    becomes   304   difference 1     in  gcc compiler int = 4 bytes
	
	cout<<x<<y<<z;
	
}
*/
//access array element usig pointer
/*
{
	int num[]={24,34,12,44,};
	int i=0,*j;
	j=&num[0];                                  //num[]   <--    j 
	while(i<=5)
	{
		cout<<&num[i];  //address of element            //    num[i]  is same as *(num+i)   *(i+num)      i[num]                       MY FAVOURITE 
		cout<<*j<<num[i];     //element
		cout<<&j;     //address of pointer
		i++;
		j++;  //poiont to next element in array
	}
}
*/
//pass entire array to function
/*
int disp(int *,int);
{
	int num[]={1,2,3,4}
	 disp(&num[0],4);
}
int disp( int *pt, int n)  			//num  <---   pt
{  int i=0;
	while(i<n)
	{cout<<*pt;
	  i++;
	  pt++;
	}
	
}
*/
//OVER AND OUT 				//OVER AND OUT 					//OVER AND OUT 						//OVER AND OUT 						//OVER AND OUT 			//OVER AND OUT 
//2D array
/*
{
	int st[5][2]={{1,2},                          //      1     2    3     4  5  6  7  8  9  10
				 { 3,4},                       //        601   603  605  ...
				 { 5,6},
				 { 7,8},
				  {9,10}	};
				  
	int i,j;
	for(i=0;i<5;i++)
	{
		cout<<endl;
	for(j=0;j<2;j++)
	{
		cout<<st[i][j]<<"\t";
	}	
	
    }	
	
	for(int i=0;i<5;i++)
	{
	cout<<"address of  1D array resp."<<st[i]<<"same as"<<(st+i)<<"also"<<*(st+i);      //MY FAVOURITE   because std is treated as pointer to zeroth element when   array_name[int vare]
	//explanation : *(st+i) return element  ,but element 2D array  is 1D array whichgive the address
	
	}

			  
}
*/
//pointer and 2D dimension
/*
{
	int st[5][2] ={
					{11,12}
					{13,14}
					{15,16}
					{17,18}
					{19,20}
					     	}
					     	
	int i,j;
	for(i=0;i<5;i++)				     	
	{
		cout<<"\n";
		for(j=0;j<2;j++)
		cout<<"element is"<<*(*(st+i)+j)<<"address is"<<(*(st+i)+j );   //gives complete  array with address
	}
}
*/

//OVER AND OUT 					//OVER AND OUT 					//OVER AND OUT 				//OVER AND OUT 			//OVER AND OUT 				//OVER AND OUT 
//pointer to array  most avaited topic 
//chase begin 
/*

{
	int a[][4]={    											// a  <--  p						a of 1D array <--   q[4] ( i.e,  q[1]  q[2]  q[3]  q[4])
				1,2,3,4,                                              
				5,6,7,8,
				9,10,11,2
				
	                    	};
	int *p;   //INTEGER POINTER
	int (*q)[4];   //PONINTER TO ARRAY will be of int* with address of first element in array     where 4(coloum) is the size of 2-D array I.E, COLOUM   MY FAVOURITE 
	p=(int *)a;  // p point to zero element of array
	q=a;     //q=&a  gives error
	
	cout<<"address of 1/2/3 row "<<q<<q+1<<q+2<<q+3;  //same as *a   *a+1   * a+2  
	cout<<"p and q address \n"<<p<<q;   // gives same  address  MY FAVOURITe
	cout<<*p<<*q;   //*p=1   *q=address of 1 in first 1D array
	p++;  				 // increment to next integer 
	q++;  					  //increment to next 1-D array
	
	cout<<"after increment address"<<p<<q;       			 
	cout<<"now p and q"<<*p<<**q;      	//*p=2  **q=5        
	
	cout<<"size of p and *p  "<<sizeof(p)<<endl<<sizeof(*p);             //  8 (size of address i.e 2 )                        4(size of one element  i.e 2)
	cout<<"size of  q and * q\n "<<sizeof(q)<<endl<<sizeof(*q);	     //     8(size of 2nd 2D array address )	                  	16 (size of 2nd 2D array)   
	  )
		   
	
}
*/
/*
{
	int a[3][4]={
				 1, 2, 3,  4,            //  1    2     3     4     5     6      7      8     9      10      11      12
				 5, 6, 7,  8,			 //4001  4003  4005 4007  4009   4011   4013  4015   4017   4019    4021    4023    605  607   609  611  613  615  617  619    621    623
				 9,10,11 , 12
	
	
							}	;    
	display(*a,3,4);
	show(a,3,4);
	print(a,3,4);
}

int display(int *q,int row,int col )    //   a(array)   <--  q 
{
	int i,j;
		for(i=0;i<row;i++)
		{cout<<endl;
		for(j=0;j<col;j++)
		 cout<<*(q+i*col+j)<<"\t";   //q hold address of array(usally  1st element)             //access element *(base address + row no.* total coloum+ coloum no.)
		}								//ex: 12: 4001+2*4 +3 =  4023 	
		cout<<endl;	
		return 0;
}

int show(int (*q)[4],int row,int col)      //q hold the address of zero 1D array i.e 4001
{
	int i,j;
	int *p;
	for(i=0;i<row;i++)
	{
	cout<<endl;	
	p=(int *)(q+i);			  //p=q+i can not convert int*[4] to int *        //p=(int*)q+i  is  different from      p=(int*)(q+i)   haaaa   //access 1D element array
	for(j=0;j<col;i++)
	 cout<<*(p+j);
	}
	return 0;
}
int print(int q[][4;int row;int col)    //  same as  int(*q)[4]


int(*q)[4]
{
	int i,j;
	for(i=0;i<row;i++)
	{
	cout<<endl;
	for(j=0;j<col;j++)
	cout<<q[i][j];
	}
	
	return 0;
}

*/
//OVER AND OUT 					//OVER AND OUT 					//OVER AND OUT 				//OVER AND OUT 			//OVER AND OUT 				//OVER AND OUT 














































