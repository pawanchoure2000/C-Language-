#include<iostream>
#include<string>
using namespace std;
string digit_name(int n)
{
	if(n==1) return"one";
	if(n==2) return "two";
	if(n==3) return "three";
	if(n==4) return "four";
	if(n==5) return "five";
	if(n==6) return "six";
	if(n==7) return"seven";
	if(n==8) return"eight";
	if(n==9) return"nine";
	return "";
}

int main()
{    int n;
    string str;
	cout<<"enter intger";
	cin>>n;
	str=digit_name(n);
	cout<<str;
	return 100;
}	
	

