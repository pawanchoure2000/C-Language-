#include<iostream>
using namespace std;
namespace mynamespace 
{
	int mydata;
	void myfunc()
	{
		cout<<"my namespace function";
	}
	
	class myclass
	{
		int data;
		public:
			myclass(int d) : data(d)
			{
			}
			
			void display()
			{cout<<"my class data"<<data<<endl;
			}
			
	};//class 
	
}//namespace 

int main()
{
	mynamespace::mydata=10;
	cout<<"mynamespace::mydata  ="<<mynamespace::mydata;
	
	mynamespace::myfunc();
	
	mynamespace::myclass obj(34);
	
	obj.display();	
}
