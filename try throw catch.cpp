#include<iostream>
using namespace std;

int f()
{
	A a;
	try
	{
		 B b;
		 g();
		 h();
	}
	catch (usrexcp&  ex)  //it should be unique    //it is  usually pass as a reference (need not to copy the exception object )
	{
		cout<<ex.what();
	}
	
}

class usrexcp: public exception()

int g()
{
	A a;
	usrexcp ex("from g()");
	throw ex;
	return ; 
}
//exception object are kind of automatic object ... constructed at point they are thrown or before that in function that is throwing them and will get destructed in some other kind of fi=unction scope in catch handler 
//lifetime scope that is dependent on runtime and  not necersiry on compille time , typical for other autoatic object 
//exception object will have have to be created in free store in stack not in  the stack 
//speclised class have to come higher and genralised class have to come below that  
