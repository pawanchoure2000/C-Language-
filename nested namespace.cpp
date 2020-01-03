/*
#include<iostream>
using namespace std;

int data=0;

namespace name1
{
	int data=1;
	namespace name2
	{
		int data=2;
	}
}

int main()
{
	int data=100;
	cout<<data<<endl;
	cout<<::data<<endl;				// global has no name , i.e, is namespace has noname  it is a blank name 
	cout<<name1::data<<endl;
	cout<<name1::name2::data<<endl;	
}

*/

/*
#include<iostream>
using namespace std;

namespace name1
{
	int v11=1;
	int v12=2;
}

namespace name2
{
	int v21=3;
	int v22=4;
}


using namespace name1;
using name2::v21;   

int main()
{
	cout<<v11<<endl;
	cout<<name1::v11<<endl;
	cout<<v21<<endl;
	cout<<name2::v21<<endl;
	//cout<<v22;
}
*/

w
int main()
{
	using name1::data; 
	cout<<data<<endl;  // refer to the name1 data 
	cout<<name1::data<<endl;
	cout<<::data;
}





























