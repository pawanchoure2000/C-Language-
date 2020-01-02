#include<iostream>
#include<stdbool.h>		//feature added by c99

#define n 100;//manifest constant
using namespace std;
int  main()
{					//convert data type to boolean

	bool b1=100;	//	true  	//bool is nothing but a literal= "constant value for built in data"
	bool b2=8.5;		//true
	bool b3=0;			//false
						
	int x=10,y=20,z=2;
	bool a,b,c;				 //default value is 0 LOL !!
	cout<<a<<b<<c<<"default is ZERO" <<endl;
	a = (x == y);   // a=x==y, a=0 
	b = b< y;		//b=1
	cout<<a<<endl<<b<<endl;
	if(b2)
	b2=b2 -1; 
	cout<<b2<<endl; // value of b2  1-1=0  
	b2=b2+9;
	cout<<b2<<endl; //b2 1
	
	//for c++
	bool  b4{true};
	bool b5{!true};
	
	_Bool a1=1;
	cout<<"hello "<<a1;
	return 0;
	 
}
