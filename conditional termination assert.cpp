#include<iostream>
#include<cassert>
#include<cstdlib>
#include<cstdio>

#define NDEBUG  //we are not debugining   //if it is ON then assert feature will not be there 
//assert much assert  .i.e assert  	 	will get removed at compile time in buid code 
using namespace std;
int main()
{
	int i=0;
	assert(++i==0);
	//help to different condtion in run time in a programm 
	// help to check whether this condtion is satisefied    , here not satisfied 
	
	//if put too many on programm the n in lot of placess check woild be happenning  , performance decreases  
	//
	cout<<i;
}

int _assert(int test , char const *test_image , char const * file , int line)
{
	if(!test)
	{
		cout<<"assertion failed "<<test_image<<"  " <<file<<"  "<<line;
		abort();
	}
	
}
