#include<iostream>
#include<cmath>
using namespace std;
/*
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
	complex c1(3,4);
	complex c2(c1);
	complex c3=c2;
	
	c1.print();
	c2.print();
	c3.print();
}

*/


//free copy constructar 

class complex
{
	int re_ ,im_ ;
	public :
		
		complex(int re,int im):re_(re),im_(im)
		{
			cout<<"complex constructar "<<endl;
			print();
		}
		
		~complex()
		{
			cout<<"complex  destructar "<<endl;
			print();
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

void display(complex c_par)
{
	cout<<"display "<<c_par.print();
}

int main()
{
	complex c(4,8);
	display(c);	
}		
	
