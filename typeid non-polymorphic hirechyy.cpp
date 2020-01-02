#include<iostream>
#include<typeinfo>
using namespace std;

class X
{
	
};

class Y:public X
{	
};  //no virtual function 
//object do not have vrtual function pointer to table 
//not posiible at run time to say , what is class from where object really came 
//for non-polymorphic typid mechanism do not work 

int main()
{
	X x;
	cout<<typeid(x).name()<<" "<<typeid(&x).name()<<endl;			//static 
	X *q=&x;
	cout<<typeid(q).name()<<" "<<typeid(*q).name()<<endl;			//dynamic
	
	Y y;
	cout<<typeid(y).name()<<" "<<typeid(&y).name()<<endl;			//staic 
	q=&y;
	cout<<typeid(q).name()<<" "<<typeid(*q).name()<<endl;			//dynamic
	
	X &r1=x;
	X &r2=y;
	cout<<typeid(r1).name()<<" "<<typeid(r2).name()<<endl;
	  
}

