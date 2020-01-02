#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

class complex
{
	double re_;
	double im_;
	public:
		complex(double re=0.0 , double im=0.0)  : re_(re) , im_(im) 
		{
		};
		
		double norm() const 
		{
			return sqrt(re_*re_+ im_*im_);
		}
		friend bool operator>(const complex& c1 ,const complex& c2)    //most imp for userdefined instiating in function templete
		{
			return c1.norm()>c2.norm();
		}
		friend ostream& operator<<(ostream& os,const complex& c)
		{
			os<<"re_ "<<c.re_<<"im_ "<<c.im_;
			return os;
		}
};


template<class T> T max(T x, T y)
{
	return  x>y?x:y;
}

template<> char  *max<char*>(char *x ,char *y)
{
	return strcmp(x,y)>0?x:y;
}


int main()
{
	complex c1(2.1, 3.2) , c2(3.4,4.5);
	cout<<c1<<c2<<max(c1,c2)<<endl;
	//need comparison opertor for complex 
	//not compile without bool opertor 
	//traits of variable T include bool operator >(T,T) which the instiating type must fullfill
	
}




