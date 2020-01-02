/*
#include<iostream>
using namespace std;
class myclass
{
	in data;
	public:
		myclass(int i):data(i)
		{
			
		}
		
};

void display(const myclass& a)		//display is non-member function 
cout<<"data "<<a.data;								//access private data member  //error 

int main()
{
	myclass obj(10);
	dispaly(obj);
	return 0;	
}
*/



#include<iostream>
using namespace std;
class myclass
{
	int data;
	public:
		myclass(int i):data(i)
		{
			
		}
		
		friend void display(const myclass& a);
};

void display(const myclass& a)		//display is non-member function 
{cout<<"data "<<a.data;
}								//access private data member  

int main()
{
	myclass obj(10);
	display(obj);
	return 0;	

