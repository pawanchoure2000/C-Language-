#include<iostream>
using namespace std;

class window 
{
	public:
		virtual void onresize();
};

class specialwindow : public window
{
	//derived class 
	public:
		virtual void resize()
		{
			//*this point to spaecial window 
			static_cast<window>*this.onresize();  //cast *this to window 
			//lead to have new window object from current special window object i.e, temporaray object is created  and from this temporary object resize get called 
			//cast the pointer or cast the refrence but here whole object is cast 
			//we cannot take spaecialwindow object and make window object  
			
			
				
			//this donot work
			
			
			//.... performing later stuff 
			//from window object 	
		}
};

class specialwindow : public window
{
	//derived class 
	public:
		virtual void resize()
		{window::onresize();  //it has the this pointer of specialwindow object 
			//not cast the object and create temporary 
			//casting this pointer through impilit cast (implicit upcast )  and we are still refering to sane object 
		}
};

int main()
{
	window w;
	specialwindow sw;
}


