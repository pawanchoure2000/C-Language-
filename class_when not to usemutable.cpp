
#include<iostream>
using namespace std;
class emp
{
string name;
string id;
mutable double salary ;
public:
emp(string name_ ="no name",string id_ ="00000=00000",double salary_ =0 ):name(name_),id(id_)
{
	salary=salary_;
}

string getname() const ;
void setname (string  name_) ;
string getid() const;
void setid(string id_);
double getsalary() const;
void setsalary(double salary_);
void promote(double salary_) const 
{
	salary=salary_;
}
};

int main()
{
	const emp john("john","4474",400000);
	john.promote(40000); 	
	
}



/*
#include<iostream>
using namespace std;
class emp
{
const string name;
const string id;
 double salary ;
public:
emp(string name_ ="no name",string id_ ="00000=00000",double salary_ =0 ):name(name_),id(id_)
{
	salary=salary_;
}

string getname() const ;

string getid() const;

double getsalary() const;
void setsalary(double salary_);
void promote(double salary_) 
{
	salary=salary_;
}
};

int main()
{
	 emp john("john","4474",400000);
	john.promote(40000); 	
	
}

*/
