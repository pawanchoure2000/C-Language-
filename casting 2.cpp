#include<iostream>
using namespace std;
class A
{
};

class B : public A
{
};
int main()
{
	A *pa=0;
	B *pb=0;
	
	void *pv=0;
	pa=pb;	                    //specialised object to genralisied object	B to A	//upcast 
	
	//pb=pa;                   //[Error] invalid conversion from 'A*' to 'B*' [-fpermissive]  //genraliied to specialised oblect  //A to B     //downcast       
	
	
	pv=pa;
	pv=pb;
	
		
	//pa=pv;	//[Error] invalid conversion from 'void*' to 'A*' [-fpermissive]
	//pb=pv;		//[Error] invalid conversion from 'void*' to 'B*' [-fpermissive]
	
}
