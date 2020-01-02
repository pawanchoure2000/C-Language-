#include<iostream>
using namespace std;
class complex
{
	private :
		int re,im;
		
	public :
	complex(int x=0,int y=0) :re(x) ,im(y)
	{
		cout<<"constructar "<<re<<"    "<<im<<endl;
	}
	~complex()
	{
		cout<<"destructar  "<<re<<"    "<<im<<endl;
	}
	
	int print()
	{
		cout<<"print   "<<re*re+im*im<<endl;
	}
		
};

complex c(4,8);		//global vareiable 

int main()
{
	//dynamic allocation 
	unsigned char buf[100];
	complex* pc= new complex(3,6);
	complex* pd=new complex[2];
	
	complex* pe=new(buf) complex(2,3);
	
	complex c[3];
	for(int i=0;i<3;i++)
	{
		c[i].print();
	}
	
	return 0;
}
