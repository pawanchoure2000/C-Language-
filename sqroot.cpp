#include<iostream>
#include<cmath>
using namespace std; 
int main()

{
	cout<<" enter number"<<endl;
	double a;
	cin>>a;
	
const double  EPSILON =1.00000000000000E-14 ;
cout<<"value of epsilon"<<EPSILON<<endl;
	double xnew =a;
	double xold;
	cout<<"value of xold before loop"<<xold<<endl;
	
	do{
		xold= xnew;
		cout<<"xold in loop:"<<xold<<endl;
		xnew =(xold+a/xold)/2;
		cout<<"xnew in loop :"<<xnew<<endl;
	}
	while(fabs(xnew - xold)>EPSILON);
	
	cout<<"square rroot is"<<xnew<<endl;
	return 0;/*
	Name: 
	Copyright: 
	Author: 
	Date: 05/07/19 11:14
	Description: 
*/

}
