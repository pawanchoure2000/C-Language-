#include<iostream>
using namespace std;

class myclass 
{
	int pri;
	public:
		int pub;
		myclass(int mpri,int mpub):pri(mpri) ,pub(mpub)
		{}
		int getmember() const
		{
			return pri;
		}
		
		void setmember(int i)
		{
			pri=i;
		}
		
		void print() const
		{
			cout<<"pri="<<pri<<"pub="<<pub<<endl;
		}
};

int main()
{
	myclass myobj(2,3);
	const myclass  myconstobj(5,6);
	
	cout<<myobj.getmember()<<endl;
	myobj.setmember(2);
	myobj.pub=3;
	myobj.print();
	
	cout<<myconstobj.getmember()<<endl;
	//myconstobj.setmember(7);				//error 
	//myconstobj.pub=8;						//error 
	myconstobj.print();
}
