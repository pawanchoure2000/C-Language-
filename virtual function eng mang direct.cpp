#include<iostream>
#include<cstring>

using namespace std;

class engineer
{protected :
	string name_;
	public:
		engineer(const string& name);
		virtual int psalary();		
};

class manager : public engineer 
{
	public:
		manager(const string& name);
		int psalary();
};

class director : public manager
{
	public:
		director(const string & name);
		int psalary();
 } ;
 
 
 int main()
 {
 	engineer e1("rohit");
 	manager m1("kamla");
 	director d("ranjana");
 	
 	engineer *staff[]={&e1 , &m1 ,d };
 	for(int i=0 ;i<sizeof(staff)/sizeof(engineer*);++i)
 	staff[i]->psalary();
 	return  0; 
 }
