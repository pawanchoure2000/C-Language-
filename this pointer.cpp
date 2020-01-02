#include<iostream>
using namespace std;

class x
{
	public:
		int m1,m2;
		int f(int k1 ,int k2)
		{
			m1 = k1;
			this->m2=k2;
			cout<<"id  ="<<this<<endl;		//address (identity)  of object 
		}
};

int main()
{
	x a;		
	a.f(2,3);
	cout<<"&a="<<&a;		//address (identity)  of object 
	cout<<"  a.m1="<<a.m1<<" a.m2="<<a.m2<<endl;
}
