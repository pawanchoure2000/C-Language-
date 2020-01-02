#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

class string1 
{
	public : 
	char *str_;
	size_t len_;
	
	string1(char *s):str_(strdup(s)),len_(strlen(str_))
	{
	}
	
	string1(const string1& s):str_(strdup(s.str_)),len_(s.len_)
	{	
	}
	
	~string1()
	{
		free(str_);
	}
	
	string1& operator=(const string1& s)
	{
		if(this!=&s)		//true only if two object are not equal 
		{
		free(str_);		//release existing memeory 
		str_=strdup(s.str_);		//deep copy
		len_=s.len_;
		}
		return *this;		//return object for chain assigment 
	}



int  print() const   //since no change in data-members we can use const 
{
	cout<<"str_="<<str_<<"  len_="<<len_<<endl; return 0;
}

};

int main()
{
	string1 s1="pawan" ,s2="choure";
	s1.print();
	s2.print();
	s2=s1;	
		//change this code to s1=s1 self copy ........ garbage is printed because it free the object and have nothing to copy from   ..works exactly as excepted online compiler
	s2.print();
	
}	
	
