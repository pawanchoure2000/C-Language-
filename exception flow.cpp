#include<iostream>
#include<exception>
using namespace std;

class myexception:public exception
{
};

class myclass {
};

int h()
{
	myclass a;
	
	//throw 1;     //this is  handled by, catch(int)  
	//throw 2.5;		//this is  handled by, catch(double)    //destructor will get called and only after that stackframe will get squasshed .
	//destroy all localobject 
	//throw myexception();  //this is  handled by, catch(...)
	//throw exception();
	//throw myclass();
}	

int g()
{
	myclass a;
	try
	{
		h();
	}
	catch (int) 			//if this catch matches then other catch are skipped 		//overloaded reolution  
	{
		cout<<"int "<<endl;
	}
	catch (double)
	{
		cout<<"double "<<endl;
	}
	catch(...)  //ellipses : match with anything , also known as match clause   //default catch clause i.e by default it rethrow it 
	{
		throw ;  //rethorw the exception 
	}
}


int f()
{
	myclass a;
	try()
	{
		g();
	}
	catch(myexception)
	{
		cout<<"myexception "<<endl;
	}
	catch(exception)
	{
		cout<<"exception "<<endl;
	}
	catch(...)
	{
		throw ;
	}
}


int main()
{
	try
	{
		f();
	}
	catch(...)
	{
		cout<<"unknown  "<<endl;      //termiation handler will get called 
	}
}



//call stack
//h______|
//g______| 
//f______|
//main___|


