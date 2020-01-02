#include<iostream>
using namespace std;
int main()
/*
{
	int i,j;         		//
	for(i=0;i<=4;i++)                    //print array index         //bool connot be incremented       
	{	
		cout<<endl;
		for(j=0;j<=4;j++)
		{
		cout<<i<<j<<"\t";
     	}
	}
}
*/
											/*	00	01	02	03	04	
												10	11	12	13	14	
												20	21	22	23	24	
												30	31	32	33	34	
												40	41	42	43	44*/
/*
{
	int i,j;
	for(i=0;i<=4;i++)            							//diagonal star
	{														
		cout<<endl;												
		for(j=0;j<=4;j++)										
		{   cout<<"   ";									
		cout<<"*"<<"\t";
     	}
	}
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
	int i,j;				//output
	for(i=0;i<=4;i++)       //print star in increasing/decreasing  order  w.r.t  coloum 1
	{	
		cout<<endl;
		for(j=0;j<=4;j++)
		{  
		    if(i<=j)
		cout<<"*"<<"\t";
     	}
	}
}
*/
/*
#include<iostream>
using namespace std;
int main()
{

   int i,j;
	for(i=0;i<=4;i++)  		//    WHY DOES THE LOOP NOT EXECUTE FOR THE i=1 ,i=2 ,i=3 ,i=4
	{	
		cout<<"hi";
		for(j=0;j<=4;j++)
		{                             //            j=1          j=2         j=3    j=4
		    if(i+=j)                //   0+0=0   ;  0+1=1   ;  1+2=3    ; 3+3=6  ; 6+4=10										//output
		cout<<i<<j<<" "<<"\t";   //              ; i=1,j=1  ;  i=3,j=2  ;i=6,j=3  ;i=10,j=4										//hi11 	32 	63 	104 
     	}
	}
}
*/
/*
#include<iostream>
using namespace std;
int main()
{

   int i,j;
	for(i=0;i<=4;i++)
	{	
		cout<<endl;
		for(j=4;j<=0;j--)               //DOUBT	
		{                            
		   if(i<=j)              
		cout<<"*"<<"\t";   
     	}
	}
}
*/
