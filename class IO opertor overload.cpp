#include<iostream>
using namespace std;

class complex
{
	public:
		double re,im;
		complex(double r=0,double i=0) : re(r) ,im(i)
		{
		}		
};
//it breaks the encapsulation x
ostream& operator<< (ostream& os,const complex &a)		//return same output stream operator
{
	os<<a.re<<"+j"<<a.im<<endl;
	return os;
}             
istream& operator>> (istream& is ,complex& a)  // second parameter as non-constant as except that input parameter to change
{
	is>>a.re>>"+j">>a.im;
	return is;
}             

int main()
{
	complex d;
	cin>>d;
	cout<<d;
	
}           
