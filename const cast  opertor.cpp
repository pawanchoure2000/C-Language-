/*
#include<iostream>
using namespace std;

class A
{
	int i_;
	public:
		A(int i):i_(i)
		{
		} 
		int get() const    //const mamber function  , can be called with constant or non-constant object  because it gaurantee it will not change .
		{
			return i_; 		//it cannot change change the content of class
		}
		
		int set(int j)		//non-constant mamber function 
		{
			i_=j;			//it can change the content of class  
		}
};

int print(char * str)
{
	cout<<str;
}

int main()
{
	const char *c="smart people";
	//print(c);  //error as print argument is of type char*
	print(const_cast<char*>(c));   //c type is const char , which is convered into of type char*  as 
	
	const A a(1);		//a is constant object of type A   	 	
	
	a.get();
	//a.set(5);
	
	const_cast<A&>(a).set(5);//creating non-constant refrence   //passing a refrence of type a    //it has this pointer which point to non-constant object not comstant object 
	//const_cast<A>(a).set(5);
		
}
*/

/*
//it is c style , which should be avoided  ...
#include<iostream>
using namespace std;

class A
{
	int i_;
	public:
		A(int i):i_(i) {
		}
		
		int get() const 
		{
			return i_;
		}
		int set(int j)
		{
			i_=j;
		}		
};



int print(char * str)
{cout<<str;
}

int main()
{
	const char* c="smart boy salute him ";
	
	print(const_cast<char *>(c));
	//print((char*)(c)); //doing because to remove const or converting void* pointer to char* 
	
	const A a(1);
	
	const_cast<A&>(a).set(5);  //cast the object to non-constant refrence 
	//((A&)a).set(5);
	
	//const_cast<A>(a).set(5);   error
	((A)a).set(5);  //, but it works in C but do not use 
	
	//whole object cannot beb const cast , we cannot take constant object  and const cast to non-constant object  ,bec it refer completly different object 
}
*/

//let's take an example 
#include<iostream>
using namespace std;

struct type 
{
	type():i(3)
	{}
	
	int m1(int v) const 
	{
		//this->i=v; //error
		const_cast<type*>(this)->i=v;
	}
	int i;	
};

int main()
{
	int i=3;
	const int& cref=i;
	const_cast<int&>(cref)=4;
	cout<<"i="<<i<<endl;
	
	type t;
	t.m1(4);
	cout<<"type::i "<<t.i<<endl;
	
	const int j=3;
	int * pj = const_cast<int*>(&j);    //pj silently create the other memory location 
	*pj=4;
	cout<<" j="<<j<<" , *pj="<<*pj;
	
	int (type::*mfp)(int) const=&type::m1;
	
		//const_cast<void(type::*)(int)>(mfp);
		
}






