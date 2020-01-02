/*
#include<iostream>
using namespace std;

class B
{
	protected :
		int data;
		public:
			
			
			friend ostream& operator<<(ostream&os , const B& b)
			{
				cout<<"b.data="<<b.data<<endl;
				return os;
			}			
};

class D: public B
{
	int info;
	public:
		
		//friend ostream& operator<<(ostream&os , const D& d)
		//	{
		//		cout<<"d.data="<<d.data<<endl;
		//		cout<<"d.info="<<d.info<<endl;
		//		return os;
		//	}			
};


int main()
{
	//B b(0);  //data=0
//D d(1,2);		//data=1 , info=2
	
	B b;
	D d;
	cout<<b;
	cout<<d;		
}
*/



#include<iostream>
using namespace std;

class B
{
	protected :
		int data;
		public:
			
			
			friend ostream& operator<<(ostream&os , const B& b)    //overload b
			{
				cout<<"b.data="<<b.data<<endl;
				return os;
			}			
};

class D: public B
{
	int info;
	public:
		
		friend ostream& operator<<(ostream&os , const D& d)			//overload  d   , resolve by thier signature 
			{
				cout<<"d.data="<<d.data<<endl;
				cout<<"d.info="<<d.info<<endl;
				return os;
			}			
};

int main()
{
	//B b(0);  //data=0
//D d(1,2);		//data=1 , info=2
	
	B b;
	D d;
	cout<<b;		//calls overload  b
	cout<<d;			//calls overload  d 
}












