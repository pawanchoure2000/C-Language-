#include<iostream>
using namespace std;

class myclass 
{
	int pri;
	public:
		int pub;
		myclass(int mpri,int mpub):pri(mpri) ,pub(mpub)
		{}
		int getmember()
		{
			return pri;
		}
		
		void setmember(int i)
		{
			pri=i;
		}
		
		void print()
		{
			cout<<"pri="<<pri<<"pub="<<pub<<endl;
		}
};

int main()
{
	//const myclass myobj(0,1);		error 
	myclass myobj(0,1);
	
	cout<<myobj.getmember();
	myobj.setmember(2);
	myobj.pub=3;
	myobj.print()	;
	return 0;
}
