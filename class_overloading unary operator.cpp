#include<iostream>
using namespace std;

class myclass
{
	int data;
	public:
		myclass(int d) : data(d)
		{
		}
		
		myclass& operator++()
		{
			++data;
			//data*=2;		//operation may vary on the data , 
			return *this;
		}
		myclass operator++(int)      //post -increment     //it should be return by value and not return by reference 
		{						    	//return the copy of object ; and operate on them later 
			myclass t(data);   
			++data;
			//data/=3;				//operation is perfored first and value is changed afterwords 
			return t;     
		}
		
		void disp()
		{cout<<"data="<<data;
		}
};

int main()
{
	myclass obj1(8);
	obj1.disp();
	
	myclass obj2=obj1++;
	
	obj2.disp();
	obj1.disp();
	
	
}

