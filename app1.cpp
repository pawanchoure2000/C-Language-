#include<iostream>
using namespace std;

#include"students.h"

extern streg *reg;


namespace app1
{

	int process()
	{
	cout<<"male students ";
	int r=1;
	st *s;
	
	while(s=reg->getstudent(r++))
	if(s->getgender()==st::male)
	cout<<*s;
	
	cout<<endl<<endl;
	}
};

