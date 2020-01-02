#include<iostream>
using namespace std;
class myclass
{
	int mem;
	mutable int mutablemem;
	public:
		myclass(int m,int mm):mem(m),mutablemem(m)
		{
			//blank
		}
		int getmem() const 
		{
			return mem;
		}
		int setmem(int i)
		{
			mem=i;
		}
		int getmutable() const 
		{
			return mutablemem;
		}
		
		int setmutable(int i) const   
		{
			mutablemem=i;			//if this data member would not have been mutable thos would genrate error , since setmutable function is constat
		}
		
};

int main()
{
	const myclass myconstobj(1,2);
	
	cout<<myconstobj.getmem();
	//myconstobj.setmem(3);
	
	cout<<myconstobj.getmutable();
	myconstobj.setmutable(4);
	
	return 0;
}
