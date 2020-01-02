#include<iostream>
#include<cmath>			//pow()
#include<cerrno>   //global variable 
#include<cstdlib>   //
using namespace std;


static int atexit_handler1(void)
{
	cout<<"within  a_text_handler1"<<endl;
}

static int atexit_handler2(void)
{
	cout<<"within  a_text_handler2"<<endl;
}


int main()
{
	
	atexit(atexit_handler1);		//register 
	atexit(atexit_handler1);
	
	exit(EXIT_SUCCESS);		//it does not immediately exist it  first call the last register function , used too clean object ; by calling thier destructors  
	//abort is equivalent to crashing of programm
	cout<<"this line should never appear  ";	
}

	
	
