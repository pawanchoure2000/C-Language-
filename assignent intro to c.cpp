
#include<stdio.h>
#include<iostream>
using namespace std;
int  main()
{
  int  fir,sec,thr;
  float avg;
  int n,count=0;
  
  scanf("%f %f %f",&fir,&sec,&thr);
    
   //int  arr[n];

  while(thr!=-1)
  {
  	scanf("%f",&n);
  	count++;
  	if(arr[count]==-1)
  	break;
    
  }
  
  avg=(fir+sec+thr)/3;
  printf("%f",avg);
  
  
  //avg=(thr+avg[0]+avg[1])
  //printf("%f",avg);
  
  for(int i=0;i<count+3;i++)
  {
  	if(i==0){
  	avg=(fir+sec+arr[i])/3;
  printf("%f",avg);}
}
  	for(int j=0;j<count+3;j++)
  	{
  	 if(j==1){
  		avg=(sec+arr[j-1]+arr[j]);
  		 printf("%f",avg);}
  }
  	for(int k=0;k<count+3;k++)	 
  	{
  	avg=(arr[k-2]+arr[k-1]+arr[k])/3;
  	printf("%f",avg);
  }

}


/*

/////////////////ass 3 q 3
#include<stdio.h>
void main()
{
  int c,word=0;
  c=getchar();
  
  while(c!=EOF){
   
    c=getchar();
    if(c==' ')
    {
      back:
      c=getchar();
      if(c==' '||c=='.'||c=='\t'||c==';')
       goto back;
      else
      ++word;
    }
    
    else if(c=='\t')
      ++word;
      
      else if(c=='.')
    {	c=getchar();
      if(c!=EOF)
      ++word;
    }
    
      else if(c==',')
      ++word;
        
      else if(c==';')
      ++word;
        
      else
      c=getchar();
      
  }
  
  printf("%d",word);
  
}

*/

/////////////////solved by someone else/////////////////////////////
/*
#include<stdio.h>
void main()
{
  int c,set=0;
  int count=0;
  c=getchar();
  while(c!=EOF)
  {
    if(c==' '||c==';'||c=='.'||c==','||c=='\t')
    {
      set=0;
    }
    else if(set==0)
    {
      set=1;
      count++;
    }
    c=getchar();
  }
  printf("%d",count);
}


#include<stdio.h>
int find_even(int k);
void main()
{
int k,res;
scanf("%d",&k);
res=find_even(k);
printf("%d",res);
}
int find_even(int k)
{
int result=-1,a,i=0;
scanf("%d",&a);

while(a!=-1)
{
	if(i<k&&a%2==0)
	{
	result=a;
	i++;
	}
	scanf("%d",&a);
}

if(i!=(k))
  result=-1;
return result;
}

*/
