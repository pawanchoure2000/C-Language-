#include<iostream>
using namespace std;

//BUBBLE SORT 
int main()
{
	int data[]={12,32,45,21,98};
	int n=5,temp;
	int stepcount =0,icount=0,datacount=0; 
	
	for(int step=0;step<n-1;step++)  
	{
	stepcount++;          			//4 (0,1,2,3)
	for(int i=0;i<n-step-1;++i)    //   (0_step;0,1,2,3_i)  (1_step;0,1,2_i)  (2_step;0,1_i) (3_step;0_i)
	{
		icount++;					//10
		
		if(data[i]>data[i+1]) // 0_step[0-1,1-2,3-4]  1_step[0-1,1-2,2-3]  2_step[0-1,1-2]  3_step[0-1] 
		{
			datacount++;				//2 (depand on array elements)
			temp=data[i];
			data[i]=data[i+1];
			data[i+1]=temp;
		}	
		
	}//i
	
	}//step
	
	for(int i=0;i<n;++i)
	cout<<data[i]<<"  ";
	
	cout<<"loop step  "<<stepcount <<" loop  i  "<<icount<<" withiin if data   "<<datacount;
}
