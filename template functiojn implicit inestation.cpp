#include<iostream>
#include<cstring>
using namespace std;

template<class T>   T max(T x,T y)
{
	return x>y?x:y;
}

int main()
{
	int a=3,b=5,imax;
	double c=2.1,d=3.7, dmax;
	
	imax=max(a,b);      //type int infered from 'a' 'b' parameter 
	cout<<" max a ,	b"<<a<<" "<<b<<"= "<<imax ;
	
	dmax=max(c,d);		////type double infered from 'a' 'b' parameter 
	cout<<"max c , d "<<c<<"  "<<d<<"="<<dmax;
	//if compiler cannot infer it we use explcit instatiomn 
}
