#include<iostream>
#include<string>

using namespace std;

string digitname( int n)
{
	if(n==1) return"one";
	if(n==2) return"two";
	if(n==3)return"three";
	if(n==4) return"four";
	if(n==5) return"five";
	if(n==6) return"six";
	if(n==7) return"seven";
	if(n==8) return"eight";
	if(n==9) return"nine";
	return"";	
}
string teenname(int n)
{
	if(n==10) return  "ten";
	if(n==11) return "eleven";
	if(n==12) return "twelve";
	if(n==13) return "thirteen";
	if(n==14) return "fourteen";
	if(n==15) return "fifteen";
	if(n==16) return "sixteen";
	if(n==17) return "seventeen";
	if(n==18) return "eighteen";
	if(n==19) return "nineteen";
	return"";
}
int main()
{
	int n;
	string str;
	cout<<"enter number";
	cin>>n;
	if(n<=9)
	str=digitname(n);
	else
	str=teenname(n);
	cout<<n<<"in alphabetic is "<<str;
	return 0;
	
}
