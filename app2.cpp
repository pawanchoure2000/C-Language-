#include<iostream>
using namespace std;

#include"students.h"

extern streg *reg;


namespace app2
{

	int process()
	{
	cout<<"female students ";
	int r=1;
	st *s;
	
	while(s=reg->getstudent(r++))
	if(s->getgender()==st::female)
	cout<<*s;n
	
	cout<<endl<<endl;
	}
};

