#include<iostream>
#include<string>
using namespace std;

typedef enum etype (er ,mgr , dir );

class enginner{
	protected :
		string name_;
		etype type_ ;
		public:
			engineer(const string &name,etype  e= er ): name_(name) ,type_(e)
			{
			}
			
			etype getdata()
			{
				return type_;
				}	
				int psalary()
				{
					cout<<name_;
				}
}; 

class manager : public engineer 
{
	engineer *report[10];
	public:
	manager(const string& name ,etype  e =mgr ) : engineer (name,e) {
	} 
	int psalary
	{cout<<name_<<"process salary for manager "<<endl;
	}
};

class director : public manager
{
	engineer *report[10];
	public:
	director(const string& name ,etype  e =mgr ) : engineer (name,dir) {
	} 
	int psalary
	{cout<<name_<<"processs salary for director "<<endl;
	}
};


int main()
{
	engineer e1("qwerty") , e2("asdf") , e3("zxcvb");
	manager m1("poiuy") , m2("lkjh") ;
	director d("mnbvc");
	
	engineer *staff[]={&e1 , &m1 , &m2 , &e2 , &e3 , &d};
	
		
	for(int i=0;i<sizeof(staff)/sizeof(engineer *);++i)
	{
		etype=staff[i]->gettype();
		if(t==er)	
		staff[i]->psalary(allstaff[i].pe);
		
		else if(t==mgr)
		(manager*)staff[i]->psalary(allstaff[i].pm);
		else if(t==dir)
		(director*)staff[i]->psalary(allstaff[i].pm);
		else 
		cout<<"invalid staff type ";
	}
}
























