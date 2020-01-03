/*
#include<iostream>
using namespace std;

class B;
class A
{
	public:		
};

class B
{
};

int main()
{
	A a;
	B b;
	
	int i=5;
	
	//B==>A
	//a=b;					//xError] no match for 'operator=' (operand types are 'A' and 'B')
	//do i have way to create a object from b object 
	
	//a=static_cast<A>(b);		//Error] no matching function for call to 'A::A(B&)'
	//a=(A)b;					//Error] no matching function for call to 'A::A(B&)'
	
	//int==>A
	//a=i;			Error] no match for 'operator=' (operand types are 'A' and 'int')
	//a=static_cast<A>(i); 		//Error] no matching function for call to 'A::A(int&)'
	//a=(A)i;					//Error] no matching function for call to 'A::A(int&)'
	///i have an object or an expresssion and from tha i need to crete the object of target type 
}
*/

#include<iostream>
using namespace std;

class B;
class A
{
	public:	
	A(int i=0) {		//user-defined constructor, provide constructor from target type to source type   
		cout<<"A::A(i)"<<endl;
	}	
	A(const B&)			//user-defined constrotar 
	{
		cout<<"A::A(B&)"<<endl;
	}
};//free copy assigment operator 

class B
{
};

int main()
{
	A a;
	B b;
	
	int i=5;
	
	//B==>A
	//a=b;					//xError] no match for 'operator=' (operand types are 'A' and 'B')
	//do i have way to create a object from b object, so by constructor it does that with free copy assigment opertor 
	
	//a=static_cast<A>(b);		//Error] no matching function for call to 'A::A(B&)'
	//a=(A)b;					//Error] no matching function for call to 'A::A(B&)'
	
	//int==>A
	//via free copy assigment operator 
	//a=i;			Error] no match for 'operator=' (operand types are 'A' and 'int')
	//a=static_cast<A>(i); 		//Error] no matching function for call to 'A::A(int&)'
	//a=(A)i;					//Error] no matching function for call to 'A::A(int&)'
	///i have an object or an expresssion and from tha i need to crete the object of target type 
}
