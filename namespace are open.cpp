#include<iostream>
using namespace std;

namespace open
{
	int x=1;
}

namespace open        //we can open namespace define variable and close it's scope multiple times which is not posiible in class   
{
	int y=2;
}

int main()
{
	using namespace open;
	x=y=20;
	cout<<x<<" "<<y;
	
}

