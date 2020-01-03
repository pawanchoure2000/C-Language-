#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

/*
void *operator new(size_t n)	//size_t is unsigned int and must be the first parameter  //always return void*  //cadn be overloaded with more no. of paramter 
{
	cout<<"overloade new ";
	void *ptr;
	ptr=malloc(n);
	return ptr;
}
void operator delete(void *p)	//first parameter must be void* and must return a void 	//try not to overoad with extra parameter 
{
	cout<<"overloade delete ";
	free(p);
}

int main()
{
	int *p =new int ; //calls opertar new passing int as parameter to size_t 	//new return pointer of required type i,e, int* 
	*p=30;
	cout<<"the value is "<<*p;
	delete p;
}


*/

void* operator new[](size_t os , char setv)	 //10 is passed to os //# is passed to setv 		//fill the allocated arry with setv
{
	void *t=operator  new(os);
	memset(t,setv,os);		//stat from address t //filled with #  // os is number of bytes 
	return t;
}

void operator delete[] (void *ss)
{
	operator delete(ss);
}

int main()
{
	char *t=new('#') char[10];		//allocate array with 10 elements and filled with # 
	for(int k=0;k<10;k++)
	cout<<t[k];
	delete []t;
	return 0;
}



