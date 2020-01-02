#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

class string 
{
	char *str;
	size_t len;
	public:
	string(char *s):str(strdup(s)),len(strlen(str))
	{
		cout<<"constructar ";
		print();
	}
	~string()
	{
		cout<<"destructar";
		print();
		free(str);
	}
	
	void print()
	{
		cout<<str<<"  "<<len;
	}
	
	/*
	size_t len_()
	{
		return len;
	}
	*/	
};


int main()
{
	string s = "pawan";
	s.print();	
}
