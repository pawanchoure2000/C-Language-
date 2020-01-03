	/*
#include<iostream>
#include<cstring>
using namespace std;

class enginner{
	protected :
		string name_;
		public:
			engineer(const string &name)//: name_(name) 
			{
			}
			
			virtual int psalary()
			{
				cout<<name_<<"process salary for engineer "<<endl;
			}
			
};

class manager :   public engineer 
{
	engineer *report_[10];
	public:
		manager(const string& name ) : engineer(name)
		{
		}
		
		int psalary()
		{
			cout<<name_<<"manger salary for manager "<<andl;
		}
};

class director :   public manager  
{
	manager *report_[10];
	public:
		director(const string& name ) : manager(name)
		{
		}
		
		int psalary()
		{
			cout<<name_<<"director salary for manager "<<andl;
		}
};


int main()
{
	engineer  e1("rohit") ,e2("pawan") ,e3("qwwrty");
	manager m1("kamka") , m2("rajib") ;
	director d("asdf");
	
	engineer *staff[]={&e1 , &m1 , &m2 , &e2 ,&e3 ,d };
	
	for(int i=0;i<sizeof(staff)/sizeof(engineer *);++i)
	staff[i]->pasalary();
}
*/


#include<iostream>
#include<cstring>
using namespace std;

class employee
{
	protected :
		string name_;
		public:
			virtual int psalary() =0;
};

class enginner{
	protected :
		string name_;
		public:
			engineer(const string &name)//: name_(name) 
			{
			}
			
			virtual int psalary()
			{
				cout<<name_<<"process salary for engineer "<<endl;
			}
			
};

class manager :   public engineer 
{
	engineer *report_[10];
	public:
		manager(const string& name ) : engineer(name)
		{
		}
		
		int psalary()
		{
			cout<<name_<<"manger salary for manager "<<endl;
		}
};

class director :   public manager  
{
	manager *report_[10];
	public:
		director(const string& name ) : manager(name)
		{
		}
		
		int psalary()
		{
			cout<<name_<<"director salary for manager "<<andl;
		}
};

class sales:public employee
{
	public:
		sales(const string& name )
		{
			name_=name;
		}
		
		int psalary()
		{
			cout<name_<<"process salary for sales executive ";
		}		
};


int main()
{
	engineer  e1("rohit") ,e2("pawan") ,e3("qwwrty");
	manager m1("kamka") , m2("rajib") ;
	director d("asdf");
	
	employee *staff[]={&e1 , &m1 , &m2 , &e2 ,&e3 ,d };
	
	for(int i=0;i<sizeof(staff)/sizeof(engineer *);++i)
	staff[i]->psalary();														//pointer to object based on dyamic type i dispatch depand on thos function type 
	
	
	for(int i=0;i<sizeof(staff)/sizeof(engineer *);++i)
	cout<<typeid(staff[i]).name()<<"    "<<typeid(*staff[i]).name()<<endl;
	
}
