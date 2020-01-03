/*

#include<iostream>
using namespace std;

int abs(int n)
{
	if(n<-128) return 0;
	if(n>127) return 0;
	if(n < 0) return -n;
	return n;
}

int main()
{
	std::cout<<abs(-123)
				<<abs(-6)
				<<abs(77)
				<<abs(196)	<<std::endl;				
}

*/

#include<iostream>
#include<cstdlib>

namespace myidentifier
{
	int abs(int n)
	{if(n<-128) return 0;
	if(n>127) return 0;
	if(n < 0) return -n;
	return n;
	}
	
}

int main()
{
	std::cout<<myidentifier::abs(-203)
				<<myidentifier::abs(-6)
				<<myidentifier::abs(77)
				<<myidentifier::abs(179)
				<<std::endl;
				
	std::cout<<abs(-203)
				<<abs(-6)
				<<abs(77)
				<<abs(179)			
				<<std::endl;
}









