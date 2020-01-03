#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	//test 1 
	int *intp;
	cout<<"intp  before dynammic intialiation "<<intp<<endl;
	intp=(int*)malloc(sizeof(float));
	cout<<"intp after dynammic intialisation "<<intp<<endl;
	
	
	
	//test 2
	double *intdp;
	cout<<"intdp before dynamic intialisation "<<intdp<<endl;
	intdp=(double*)malloc(sizeof(char));
	cout<<"intdp  after dynamic intialisation  "<<intdp<<endl;
}
