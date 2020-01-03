#include<iostream>
#include"boundset.h"
using namespace std;
int main()
{
	int i;
	boundset<int> bsi(3,21);
	set<int> *setptr=&bsi;
	
	for(i=0;i<25;i++)
	{
		setptr->add(i);
	}
	
	if(bsi.find(4))
	cout<<"we found excepted value ..."<<endl;
	
	if(bsi.find(0)||bsi.find(25))
	{
		cout<<"we have found an unexcepted  value "<<endl;
		return -1;
	}
	else
	{
		cout<<"we found no excepted value "<<endl;
	}
}


