#include<iostream>

using namespace std;

class complex
{
	int re_ ,im_ ;
	public :
		
		complex(int re,int im):re_(re),im_(im)		//costructar 
		{
			cout<<"complex constructar "<<endl;
			print();
		}
		
		complex(const complex& c):re_(c.re_),im_(c.im_)		//copy constructar 
		{
			cout<<"complex copy constructar "<<endl;
			print(); 
		}
		
		~complex()
		{
			cout<<"complex  destructar "<<endl;
			print();
		}
		
		complex& operator=(const complex& c)			//copy assigment operator , need to be present at time of copy assigment   //every operator function has corresponding opertor function 
		{												//should return object of same type (copy construction to happen and then assigment )
		re_=c.re_;										//because , it is able to support chain assigment 
		im_=c.im_;
		cout<<"copy : ";
		print();
		return *this;		
		}
		
		int norm()
		{
			return (re_*re_+im_*im_);
		}
		
		int print()
		{
			cout<<"  re="<<re_<<"  im="<<im_<<"  norm="<<norm()<<endl;  
		}
		
};

int main()
{
	complex c1(4.2,5.3),c2(7.9,8.8);
	complex c3(c2);		//copy construction  , object is created at time of copy 
	
	c1.print();
	c2.print();
	c2=c1;			//copy assigment   ,  object already exist we only copy the data members   //simple assigment  //c2.operator=(c1);
	
	c2.print();
	c1=c2=c3;		//= ,right to left associtivity    // c1=(c2=c3);
	c1.print();
	c2.print();
	c3.print();
	 
	return 0;
}

		

