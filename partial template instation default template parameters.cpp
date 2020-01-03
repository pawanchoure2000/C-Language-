#include<iostream>
#include<string>
using namespace std;

template<class t1 =int , class t2=string>      //default parameter 
class student 
{
	t1 roll;
	t2 name;
	public:
		student(t1 r,t2 n) : roll(r) , name(n)
		{
			int print() const 
			{
				cout<<"version 1 "<<name<<"  "<<roll<<endl;
			}
		}
};


template<class t1>                          //partial template specilastion 
class student<t1 , char *>
{
	t1 roll;
	char* name;	
	public:
		student(t1 r, char * n) : roll(r) , name(strcpy)(new char [strlen(n)+1],n) 
		{
		}
		int print() const 
		{
			cout<<"version 2"<<name<<"   "<<roll<<endl;
		
		}
	
};


int main()
{
	student<int, string>  s1(1,"ramesh");
	student<int>  s2(2,"ramesh2");
	student<>  s3(3,"ramesh3");
	student<string>  s4(4,"ramesh4");
	student<int, char*>  s5(5,"ramesh5");
	
	
	s1.print();
	s2.print();
	s3.print();
	s4.print();
	s5.print();



}


