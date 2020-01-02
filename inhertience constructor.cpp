/*
#include<iostream>
using namespace std;
class B
{
	public:
		B(){
		cout<<"B()"<<endl;	}
		~B(){
		cout<<"~B"<<endl;	}
};

class C
{
	public:
		C(){
		cout<<"C()"<<endl; }
		~C(){
		cout<<"~C()"<<endl; }
};

class D : public B                        //first construct the inhertirnce class[class B] , then construct the data menbers  [class c] 
{
	C  data;
	public:									
		D(){
		cout<<"D()"<<endl;  }
		~D(){
		cout<<"~D()"<<endl;  }
};

int main()
{
	D d;
	return 0;
}
*/

#include<iostream>
using namespace std;
class B
{
	protected:
		B(){
		cout<<"B()"<<endl;	}
		~B(){
		cout<<"~B"<<endl;	}
};

class C : public  B
{
	public:
		C(){
		cout<<"C()"<<endl; }
		~C(){
		cout<<"~C()"<<endl; }
};

class D : private C                        //first construct the inhertirnce class[class B] , then construct the data menbers  [class c] 
{
	C  data;
	public:									
		D(){
		cout<<"D()"<<endl;  }
		~D(){
		cout<<"~D()"<<endl;  }
};

int main()
{
	D d;
	return 0;
}


