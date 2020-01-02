/*
#include<iostream>
using namespace std;

class myclass
{
	static int x;		//declartion of static variable 
	public:
		void get()
		{
			x=15;
		}
		void print()
		{
			x=x+10;
			std::cout<<"x="<<x;
		}
};

int myclass::x=0;          //undefined reference to `myclass::x'
 
int main()
{
	//same memory is allocated for both object 
	myclass obj1,obj2;
	obj1.get();
	obj2.get();
	
	obj1.print();
	obj2.print();
	return 0;
}
*/




#include<iostream>
using namespace std;

class myclass
{
	 int x;		 
	public:
		void get()
		{
			x=15;
		}
		void print()
		{
			x=x+10;
			std::cout<<"x="<<x;
		}
};


 
int main()
{
	//different memory is allocated  for two object 
	myclass obj1,obj2;
	obj1.get();
	obj2.get();
	
	obj1.print();
	obj2.print();
	return 0;
}



