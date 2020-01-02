/*
#include<iostream>
using namespace std;



template<class T>  T max(T x,T y)   /w/T is palceholder (type variable )   
{
	return x>y?x:y;
}

int main()
{
	int a=3 , b=5 ,imax ;
	double c=2.1 , d=3.7, dmax;
	
	imax=max<int>(a,b); //max is name of function     //T is taken as int   //EXPLICIT INSTIATION 
	cout<<" max a ,	b"<<a<<" "<<b<<"= "<<imax ;
	
	dmax=max<double>(c,d);		//T is taken as int  
	cout<<"max c , d "<<c<<"  "<<d<<"="<<dmax;
	
	//max<int>(a,b); //max<double>(c,d);     these are two 		overloadede functon 
	
	//no side effects 
	imax=max<int>(a++,b++); //
	cout<<" max a++ ,	b++"<<a<<" "<<b<<"= "<<imax ;
}

*/

#include<iostream>
#include<cstring>
using namespace std;

template<class T>
T max(T x, T y)
{
	return x>y?x:y;
}

template<>
char *max<char*>(char *x, char *y)
{
	return strcmp(x,y)>0?x:y;
}

int main()
{
	char *s1=new char[6];
	char *s2=new char[6];
	
	
	strcpy(s1,"black");
	strcpy(s2,"white");
	cout<<"s1 s2 "<<s1<<" "<<s2<<"="<<max<char>(s1,s2)<<endl;
	
	strcpy(s1,"white");
	strcpy(s2,"black");
	cout<<"s1 s2 "<<s1<<" "<<s2<<"="<<max<char>(s1,s2)<<endl;
	
}
//does not work on c-string as it compare pointer , not the trin pointed by them 

	
	




















