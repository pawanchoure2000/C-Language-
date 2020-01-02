#include<iostream>
#include<cstring>
using namespace std;

template<class T>   T max(T x,T y)
{
	return x>y?x:y;
}

template<>  char *max<char *>(char *x, char *y)
{
	return strcmp(x,y)>0?x:y;
}


template<class T,int size>   T max(T x[size])    //int size is non-type parameter 
{
	T t=x[0];
	for(int i=0;i<size;++i)
	{
		if(x[i]>t)
		t=x[i];
	}
	return t;
}

int main()
{
	int arr[]={1,2,3,4,5,6,7};
	cout<<"max(arr) "<<max(int,7)(arr)<<endl;
	return 0;
}

//templete functon can be overloaded
//templete function can be non-type constant (int )


