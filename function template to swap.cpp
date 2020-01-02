#include<iostream>
#include<cstdio>
using namespace std;
template<class T> int swap(T&one ,T& other)
{
	T temp;
	temp=one;
	one=other;
	other=one;
}
int main()
{
	int i=10,j=20;
	cout<<"i="<<i<<"j="<<j<<endl;
	swap(i,j);
	cout<<"i="<<i<<"j="<<j<<endl;
	
	string s1("abc") , s2("def");
	
	cout<<"s1="<<s1<<"s2="<<s2<<endl;
	swap(s1,s2);
	cout<<"s1="<<s1<<"s2="<<s2<<endl;
}
