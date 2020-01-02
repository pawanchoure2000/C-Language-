#include<iostream>
using namespace std;

class point 
{
	int x_,y_;
	public:
		point(int x,int y):x_(x),y_(y)			//constructar -ctor 
		{
			cout<<"point constructar";
			print();
			cout<<endl;
		}
		point() :x_(0),y_(0)			//default constructar   -dctor
		{
			cout<<"point constructar ";
			print();
			cout<<endl;
		}
		
		point(const point& p):x_(p.x_),y_(p.y_)				//copy constructar    -cctor
		{
			cout<<"point constructar ";
			print();
			cout<<endl;
		}
		~point()							//destructar      -dtor
		{
			cout<<"point destructar ";
			print();
			cout<<endl;
		}
		
		int print()
		{
			cout<<"  x_ ="<<x_<<"  y_ ="<<y_;
		}
		
};

class rect
{
	point tl;
	point br;
	public:
		rect(int tlx ,int tly,int brx,int bry):tl(tlx,tly),br(brx,bry)		//constructor  uses ctor 
		{
			cout<<"rect constructar ";
			print();
			cout<<endl;
		}
		rect(const point&  p_tr,const point& p_br):tl(p_tr),br(p_br)		//constructor   uses    cctor 
		{
			cout<<"rect constructar ";
			print();
			cout<<endl;
		}
		rect(const point& p_br,int brx ,int bry):tl(p_br),br(brx,bry)		//constructar   uses   ctor   cctor 
		{
			cout<<"rect constructar ";
			print();
			cout<<endl;
		}
		rect()																//default constructor  uses dctor
		{
			cout<<"rect constructar ";
			print();
			cout<<endl;
		}
		rect(const rect& r):tl(r.tl),br(r.br)								//copy constructar   uses ctor 
		{
			cout<<"rect constructar ";
			print();
			cout<<endl;
		}
		~rect()															//destructar   uses dtor
		{
			cout<<"rect destructar ";
			print();
			cout<<endl;
		}
		
		int print()
		{
			cout<<"  tl="<<tl.print()<<"  br="<<br.print();
		}
};

int main()
{
	rect r(0,2,5,7);
	//rect(int ,int ,int ,int )
	
	rect r2(point(2,3),point(6,9));
	//rect(point& , point& )
	
	rect r3(point(2,2),3,4);
	
	rect r4;
}
