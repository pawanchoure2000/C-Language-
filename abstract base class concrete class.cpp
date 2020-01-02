#include<iostream>
using namespace std;

class shape
{
	public:
		virtual int draw() = 0;      // = 0 signify that the it is  pure virtual function            //abstract base class 
		
};

class polygon:public shape										//concrete class 
{
	int draw()
	{
		cout<<"polygon : draw by trangulation "<<endl;
	}
};

class closedconics: public shape									//abstarct base class 
{
	//one pure virtual function 
	// draw() inherited pure virtual function  
};

class traingle: public polygon									//concrete class 
{
	public:
		int draw()
		{
			cout<<"traingle ! draw by lines "<<endl;
		}
};

class quadrilateral: public polygon									//concrte class 
{
	public:
		int draw()
		{
			cout<<"quadrilateral : draw by line ";
		}
};

class circle:public closedconics 								//concrete class 
{
	public:
		int draw()
		{
			cout<<"draw circle by breheshman method "<<endl;
		}
};

class ellipse :public closedconics 									//concrete class
{
	public:
		int draw()
		{
			cout<<"draw ellipse by enginering design "<<endl;   //overwrite the draw function 
		}
};


int main()
{
	shape *arr[]={new traingle , new quadrilateral , new circle ,new ellipse };				//array of pointer to shape 
	
	for(int i=0 ; i<sizeof(arr)/sizeof(shape *);++i)
	arr[i]->draw();
}

/*


	





#include<iostream>
using namespace std;

class shape
{
	public:
		virtual int draw() = 0;      // = 0 signify that the it is  pure virtual function            //abstract base class 
		//{cout<<"shape : init brush"<<endl;         //may or maynot have body
		//}
};

class polygon:public shape										//concrete class 
{
	int draw()
	{
		shape::draw();
		cout<<"polygon : draw by trangulation "<<endl;
	}
};

class closedconics: public shape									//abstarct base class 
{
	//one pure virtual function 
	// draw() inherited pure virtual function  
};

class traingle: public polygon									//concrete class 
{
	public:
		int draw()
		{
			shape::draw();
			cout<<"traingle ! draw by lines "<<endl;
		}
};

class quadrilateral: public polygon									//concrte class 
{
	public:
		int draw()
		{
			shape::draw();
			cout<<"quadrilateral : draw by line ";
		}
};

class circle:public closedconics 								//concrete class 
{
	public:
		int draw()
		{
			shape::draw();
			cout<<"draw circle by breheshman method "<<endl;
		}
};

class ellipse :public closedconics 									//concrete class
{
	public:
		int draw()
		{
			shape::draw();
			cout<<"draw ellipse by enginering design "<<endl;   //overwrite the draw function 
		}
};


int main()
{
	shape *arr[]={new traingle , new quadrilateral , new circle ,new ellipse };				//array of pointer to shape 
	
	for(int i=0 ; i<sizeof(arr)/sizeof(shape *);++i)
	arr[i]->draw();
}


*/

	


