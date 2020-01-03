#include<iostream>
#include<cstdlib>
#include<cmath>
#include<ctime>

using namespace std;

void rand_seed()
{
	int seed=static_cast<int>(time(0));
	srand(seed);
}
double rand_double(double a,double b)
{
	return a+(b-a) *rand()*(1.0/RAND_MAX);
	
}
bool approx_equal(double x, double y)
{
	const double epsilon=1E-14;
	if(x==0) return fabs(y)<=epsilon;
	if(y==0) return fabs(x)<=epsilon;
	return fabs(x-y)/max(fabs(x),fabs(y))<=epsilon;
}
double squareroot(double a)
{
	if(a==0) return 0;
	double xnew=a;
	double xold;
	
	do
	{ xold=xnew;
	xnew=(xold+a/xold)/2;
	}
	while(!approx_equal(xnew,xold));
	return xnew;
}



int main()
{
	rand_seed();
	int i;
	for(i=1;1<=100;i++)
	{
		double x=rand_double(0,1E6);
		double y=squareroot(x);
		cout<<"square root of"<<x<<"="<<y;
	}
	return 0;
}





