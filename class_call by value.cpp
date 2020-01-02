#include<iostream>
#include<cmath>
using namespace std;

class complex
{
	int re_ ,im_ ;
	public :
		
		complex(int re,int im):re_(re),im_(im)
		{
			cout<<"complex constructar "<<endl;
			print();
		}
		
		complex(const complex& c):re_(c.re_),im_(c.im_)
		{
			cout<<"complex copy constructar "<<endl;
			print();
		}
		
		~complex()
		{
			cout<<"complex  destructar "<<endl;
		}
		
		int norm()
		{
			return (re_*re_+im_*im_);
		}
		
		int print()
		{
			cout<<"re ="<<re_<<"  im="<<im_<<"  norm()="<<norm()<<endl;
		}
		
};

int display(complex c_para) :
{
	cout<<"display="<<c_para.print()<<endl;
}

int main()
{
	complex c1(3,4);
	
	display(c1);		//copy constructar called to copy c1 to c.para_
	
}

