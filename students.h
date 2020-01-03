#include<iostream>
using namespace std;
#include"students.h"

class st
{
	public:
		typedef enum gender {male=0 , female };
		
		st(char *n, gender g) : name(strpy(new char [strlen(str)+1] , n))
		{	
		}
		
		int setroll(int r)
		{
			return roll=r;
		}
		
		gender getgender()
		{
			return gender;
		}
		
		friend ostream& operator<<(ostream& os ,const & s)
		{
			cout<<( (s.gender==st::male) ? "male " : " female " );
				<<s.name<<s.roll;
				return os; 
				
		}
		
		private:
			char *name;
			gender gen;
			int roll;					
};


class streg			//student register 
{
	st **rec;
	int nstudent;
	
	public:
		streg(int size) : rec( new st*[size], nstudent(0) )
		{
		}
		
		int add(student *s) 	
		{
			rec[nstudent] =s ;
			s->setroll(++nstudent);
		}
		
		student *getstudent(int r)
		{
			return (r==nstudent+1) ? 0 : rec[r-1];
		}
};

















