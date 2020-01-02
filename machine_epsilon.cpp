#include<iostream>
#include<cfloat>
using namespace std;
void machine_ep(float ep)
{

float prev_ep;
while((1+ep)!=1)
{
	prev_ep =ep;
	ep/=2;
}
cout<<"machine epislon is "<<prev_ep<<endl;
}

int main()
{
machine_ep(0.5);
return 0;	
}
