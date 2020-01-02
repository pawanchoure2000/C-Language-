#include<iostream>
#include<cmath>	
#include<cstring> //string
#include<cstdlib>		//malloc
using namespace std;

/*
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
	
	int print()
	{
		cout<<"str_="<<str_<<"   len_="<<len_<<endl;
	}
};

int strtoupper(string1 a)  //space allocated for a.str_   and then it is copied to s.str-     //passed as a value 
{
	for(int i=0;i<a.len_;++i)
	a.str_[i]=toupper(a.str_[i]);
	
	cout<<"str to upper ";
	a.print();
}		//a is destructed   ,  a.str_ is dealloacted    but in main a.str_ is valid 

int main()
{
	//deep copy : while copying object ,the pointed object is copied in fresh allocation 
	string1 s="pawan";
	s.print();
	strtoupper(s);
	s.print();
	return 0;
}
*/


//free copy construuctar 


class string1 
{
	public : 
	char *str_;
	size_t len_;
	
	string1(char *s):str_(strdup(s)),len_(strlen(str_))
	{
	}
	
	//compile  provide  free copy constructar   
	//string1(const string1& s):str_(strdup(s.str_)),len_(s.len_)  
	//{	
	//}
	//free copy constructar provide , hence no allocation is done for str 
	
	~string1()
	{
		
		free(str_);
	}
	
	int print()
	{
		cout<<"str_="<<str_<<"   len_="<<len_<<endl;
	}
};

int strtoupper(string1 a)  //
{
	for(int i=0;i<a.len_;++i)
	a.str_[i]=toupper(a.str_[i]);		
	
	cout<<"str to upper ";
	a.print();
}		//at this point , ~string1() get executes that is it free the memmory 		//a is destucted  and a.str_ is deallocated  hence main acess to s.str_ is deallocated 

int main()
{
	//bit copy : only the pointer is copied and not the pointed object is copied ,,RISKY    
	string1 s="pawan";
	s.print();
	strtoupper(s);
	s.print();
	return 0;
	//work exaxtly on online compiler 
}



//














