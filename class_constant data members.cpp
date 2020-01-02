#include<iostream>
using namespace std;

class myclass 
{
	int pri;
	const int cpri;
	
	public:
		int pub;
		const int cpub;
		
		myclass(int cmpri,int mpri,int cmpub ,int mpub): cpri(cmpri), pri(mpri),cpub(cmpub) ,pub(mpub)
		{}
		int getcpri()
		{
			return cpri;
		}
		
		void setcpri(int i)
		{
			//cpri=i;
		}
		
		int getpri()
		{
			return pri;
		}
		
		int setpri(int i)
		{
			pri=i;	
		}		
		
};

int main()
{
	
	myclass myobj(1,2,3,4);
	
	cout<<myobj.getcpri()<<endl; myobj.setcpri(6);
	cout<<myobj.getpri()<<endl;myobj.setpri(6);
	
	cout<<myobj.cpub;
	//myobj.cpub=3;
	cout<<myobj.pub<<endl;
	myobj.pub=3;
	return 0;
}


