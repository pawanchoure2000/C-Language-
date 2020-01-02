#include<iostream>
using namespace std;

class math
{
	mutable bool picac;			//logical constant 
	mutable double pi_;
	public:
		math():picac(false)
		{
		}
		
		double pi() const 
		{
			if(!picac)
			{
				pi_=4;
				for(long step =4; step<1000000000; step+=4)
				{
					pi_+=( (-4.0/(double)step ) +  ( 4.0/((double)step+2) ));
				}
				picac=true;
			}
			return pi_;
		}
};

int main()
{
	const math obj;		//even object is constant but  in need to do computation  ,, so use of mutable 
	cout<<obj.pi();
	cout<<endl;
	return 0;
}
