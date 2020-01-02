 //user defined data type in C.assign names to integral constants
 // An example program to demonstrate working 
// of enum in C 
#include<stdio.h> 

enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};  //MOn=0 ,Tue=1 , Wed=2 and so on....  DEFAULT INTILISATION
enum year{jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec};
enum res{pass=1,fail=0,back=0};   //Two enum names can have same value
enum frend{aditya=1,anshul,aritra=5,ashutosh,manish=11,mayur,vaibhav=24,ayushi}; //assign values to some name in any order. All unassigned names get value as value of previous name plus one.


int main() 
{ 
	enum week day; 
	day = Wed; 
	printf("wed=%d \n",day); 
	
	for(int i=Mon;i<=Sun;i++)
	printf(" week=%d \n",i); 
	
	enum frend dost;
	dost=anshul;
	printf("anshul=%d ",dost);
	
	return 0; 
} 

