// CPP program to illustrate 
// push_back() function 
#include <iostream> 
#include <vector> 
using namespace std; 
#define max=10;	//manifesto constant   //easy to alter 

int main() 
{ 
	vector<int> myvector{ 1, 2, 3, 4, 5 }; 
	myvector.push_back(6); 

	// Vector becomes 1, 2, 3, 4, 5, 6 

	for (auto it = myvector.begin(); it != myvector.end(); ++it) 
		cout << ' ' << *it; 
		
//vectar as array
vector<int>	arr(max);	
int n,sum=0;
cout<<"enter the size of array \n";
cin>>n;

for(int i=0,i<max;i++)
{
a[i]+=i;
sum+=a[i];
}

vector<int> arr1;
int count1;
cout<<"enetr arr1 size  ";
cin>>count1;

arri.resize(count1);





} 

