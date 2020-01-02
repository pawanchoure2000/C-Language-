/*
#include<iostream>
using namespace std;
class engine
{
	public:
		engine(int num)
		{cout<<"engine num"<<num;
		}
		int start(){
		}
};

class car
{
	private:
		engine e;
	public:
		car():e(8) {
		}	
		int start(){
			e.start();
		}
};

int main()
{
	car c;
	c.start();
	return 0;	 	
}
*/


#include<iostream>
using namespace std;
class engine
{
	public:
		engine(int num)
		{cout<<"engine num"<<num;
		}
		int start(){
		}
};

class car: private engine
{
	public:
		car() : engine(8) 
		{
		}
		using engine::start;
};

int main()
{
	car c;
	c.start();
	return 0;
}



















