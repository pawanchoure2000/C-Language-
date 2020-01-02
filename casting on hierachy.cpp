#include<iostream>
using namespace std;
class A{ int x;
};

class B:public A{ int y;
};

int main()
{	
	A *pa=0;
	B *pb=0;
	
	void  *pv=0;
	
	pa=pb;
	
	//pb=pa;
	//error 
	
	pv=pa;
	pv=pb;
	
	
	//pa=pv;
	//pb=pv;
	//error
	
	//derived class object can acess base class  datamember but not viceversa
	 
}

