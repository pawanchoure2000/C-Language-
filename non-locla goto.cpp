#include<iostream>
#include<csetjmp>
using namespace std;

/*
jmp_buf jbuf;

int  f()	//caller()
{
	A a;
	if(setjmp(jbuf)==0)
	{
		B b;
		g();
		h(); 
	}
	else
	{
		cout<<ex.what();
	}
}

int g()
{
	A a;
	UsrExcp ex("FROM G()");
	
	longjmp(jbff,1);
	
	return ; //return 0 if not setisified  
}

int main()
{
	f();
}
*/

//another example 

jmp_buf j;
int raise_exception()
{
	cout<<"exception raised "<<endl;
	longjmp(j,1);
	cout<<"this line should never appear "<<endl;
}

int main()
{
	if(setjmp==0)
	{
	cout<<"setjmp is intialising j";
	raise_exception();
	cout<<"this line should never appear "<<endl;
	}
	else
	{
		cout<<" setjmp was just jumped into "<<endl;
	}
}













