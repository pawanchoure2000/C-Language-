#include<iostream>
#include<cstdlib>
#include<csignal>  //signal.h
#include<tchar.h>		//tchar.h
using namespace std;


int signalhandler(int signal)
{
	cout<<"appictaion    aborting...... "<<endl;
	return 0;
}

int main()
{
	//handler i.e, function popinter 
	typedef void(*signalhandlerpointer)(int);
	signalhandlerpointer  previoushandler;		//define handler 
	
	previoushandler=signal(SIGABRT,signalhandler); //passing different sigmals 
	//with different signls you can associate different handler 
	
	abort();
	
}

