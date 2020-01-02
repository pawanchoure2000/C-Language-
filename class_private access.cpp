/*
#include<iostream>
using namespace std;

class B
{
	private:
		int data;
	public :
	int print()
	{
		cout<<"b object"<<data;
	}	
};

class D :public B 
{
	int info;
	public:
		int print()
		{
			//cout<<"d object"<<data;
			cout<<info;
		}
};

int main()
{
B b(0);
D d(0,1);
//b.data=5;
d.print=6;
}

*/

#include<iostream>
using namespace std;

class B
{
	protected :
		int data;
	public :
	int print()
	{
		cout<<"b object"<<data;
	}	
};

class D :public B 
{
	int info;
	public:
		int print()
		{
			cout<<"d object"<<data;		//acessiable 
			cout<<info;
		}
};


int main()
{
B b(0);
D d(0,1);
//b.data=5;		//inacessiable
d.print=6;
}


