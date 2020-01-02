#include<iostream>
using namespace std;
#define square(x) x*x
#define square1(x) (x)*(X)
int main()
{
	int a=3,b;
	b=square(a);	//a is passed to x //in c++ replaced by a*a 
	cout<<"when square(a) is passed  answer="<<b<<endl;
	
	//wrong macro expansion 
	b=square(a+1);			//there is pitfall therfore inline was introduced by c++
	cout<<"when square(a+1) is passed  answer="<<b<<endl;
	cout<<"a+1*a+1  is evaualted as 3+1*3+1 = 3+3+1 = 7";
	
	b=square1(a+1);
	cout<<"when square1(a+1) is passed  answer="<<b<<endl;
	cout<<"parnenthisis is putted to square1()";
	
	b=square(++a);
	cout<<"when square(++a) is passed  answer="<<b<<endl;
	cout<<"because a is incremented twice";
	
	
}

