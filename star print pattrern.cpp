#include<iostream>
using namespace std;

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

//square pattern
/*
int main()
 {
 	int i,j,r;
 	cout<<"enter the size of row";
 	cin>>r;
 	for(i=0;i<r;i++)
 	{
 		cout<<endl;
 		for(j=0;j<r;j++)	//PRO TIP :
 		cout<<"*";
	 }
 }
*/

//rectangle pattern
/*
{
	int i,j,r,c;
	cout<<"enter row  and coloum for rectamgle ";
	cin>>r>>c;
	for(i=0;i<r;i++)
	{
		cout<<endl;
		for(j=0;j<c;j++)		// PRO TIP:if  j is replaced by i loop forget that outer loop exist , and it executes the innear loop  only 
		cout<<"*";
	}
}
*/
//print hollow square pattern
/*
int main()
{
	int i,j,r;
	cout<<"enter side for hollow square ";  //take row col for rectangle output
	cin>>r;
	for(i=0;i<r;i++)
	{
		cout<<endl;
		for(j=0;j<r;j++)
		{
		if(i==0||i==r-1||j==0||j==r-1)
		cout<<"*";
		else								//if else part is not included results are quite different 
		cout<<" ";
		}
	}
}
*/
int main()








































