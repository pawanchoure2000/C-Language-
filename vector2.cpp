#include<iostream>
#include<vector>
using namespace std;
int main()
{
	cout<<"enter the no. of elements for resize operation";
	int count,sum=0,j=0;
	cin>>count;
	
	vector<int> arr;  //same as int arr[] with default size 
	arr.resize(count);
	
	for(int i;i<arr.size();i++)
	{arr[i]=i;
	sum+=arr[i];
	}
	
	cout<<"array sum "<<sum;
}
