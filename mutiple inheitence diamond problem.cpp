/*
#include<iostream>
using namespace std;

class person
{
public:
person(int x)
{
	cout<<"person::person(int)  "<<endl;
	}	
};



class faculty: public person
{
public:
faculty(int x) : person (x)
{
	cout<<"faculty::faculty(int)  "<<endl;
	}	
};		


class student : public person 
{
public:
student(int x) : person(x)
{
	cout<<"student::student(int)  "<<endl;
	}	
};	


class ta: public faculty , public student 
{
	public:
		ta(int x) : student (x), faculty (x)
		{
			cout<<"ta::ta(int) "<<endl;
		}
};


int main()
{
	ta t(30);
//ta object have two person class  in it's object layout 	
}

*/

/*
#include<iostream>
using namespace std;

class person
{
public:
person(int x)
{
	cout<<"person::person(int)  "<<endl;
	}	
	
	person()							//for virtual 
	{cout<<"person::person() "<<endl;
	}
};



class faculty:virtual  public person
{
public:
faculty(int x) : person (x)
{
	cout<<"faculty::faculty(int)  "<<endl;
	}	
};		


class student : virtual public person 
{
public:
student(int x) : person(x)
{
	cout<<"student::student(int)  "<<endl;
	}	
};	


class ta: public faculty , public student 
{
	public:
		ta(int x) : student (x), faculty (x)// ,person(x) can include this .... passing parameter to constructor 
		//calls the parameter from right to left in above equation 
		{
			cout<<"ta::ta(int) "<<endl;
		}
};


int main()
{
	ta t(30);
	//diamond problem 
//ta object have two person class  in it's object layout 	
}


*/


/*
#include<iostream>
using namespace std;
class person
{
	public:
		person(int x)
		{
			cout<<"person::person(int)"<<endl;
		}
		person()
		{cout<<"person::person()"<<endl;
		}
		virtual ~person();
		virtual int teach() = 0;		
};


class faculty : virtual public person
{
	public:
		faculty(int x) : person(x)
		{cout<<"faculty::faculty(int) "<<endl;
		}
		
		virtual int teach();
};


class student : virtual public person
{
	public:
		student(int x) : person (x)
		{
			cout<<"student::student(int) "<<endl;
		}
		virtual int teach();
};



class ta: public faculty , public student 
{
	public:
		ta(int x) : student(x) , faculty (x)
		{
			cout<<"ta::ta(int)  "<<endl;
		}
		virtual int teach();
};




int main()
{
	ta t(10);
	//ta object have one person class  in it's object layout 	
	//should not use diamond in multiple inheritence scenrieo , 
}

*/


//just an extra example ...............
#include<iostream>
using namespace std;

class A
{
	public:
		virtual ~A()
		{cout<<"A::~A()"<<endl;
		}
		virtual int foo()
		{
			cout<<"A::foo()"<<endl;
		}
		
		pointera()
		{
			cout<<"pointer of class A inokeded  just trying to know whether you know pointer "<<endl;
		}
};

class B : public virtual A
{
	public:
		virtual ~B()
		{cout<<"B::~B()"<<endl;
		}
		virtual int foo()
		{
			cout<<"B::foo()"<<endl;
		}
};

class C   //: public virtual A //then problem becomes diamond problem 
{
	public:
		virtual ~C()
		{cout<<"C::~C()"<<endl;
		}
		virtual int foo()
		{
			cout<<"C::foo()"<<endl;
		}
};

class D : public B ,public C 
{
	public:
		virtual ~D()
		{cout<<"D::~D()"<<endl;
		}
		virtual int foo()
		{
			cout<<"D::foo()"<<endl;
		}
		virtual int foobar()
		{
			cout<<"D::foobar"<<endl;
		}
};



int main()
{
	 A a;
	 B b;
	 C c;
	 D d;
	 
	 A *pa;
	 pa->pointera();
}
















