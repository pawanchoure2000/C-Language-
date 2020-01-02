#include<iostream>
#include<cmath>			//pow()
#include<cerrno>   //global variable 
using namespace std;

int main()
{
	double x, y , res ;
	errno = 0;
	
	res=pow(x,y);
	
	if(errno == EDOM )
	{
		cout<<"domain error in x/y pair  "<<endl;
	}
	else if(errno == ERANGE )
	{
		cout<<"range error in result "<<endl;
	}
	else 
	{
		
			cout<<(int)res;
	}
}



