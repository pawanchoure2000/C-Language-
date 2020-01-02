 //user defined data type in C.assign names to integral constants
 // An example program to demonstrate working 
// of enum in C 
#include<stdio.h> 
#define pawan=100;			//advantage of enum over  macro //Enums follow scope rules.	// Enum variables are automatically assigned values								
#define passion =101;

enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};  //MOn=0 ,Tue=1 , Wed=2 and so on....  DEFAULT INTILISATION
enum year{jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec};
enum res{pass=1,fail=0,back=0};   //Two enum names can have same value
enum frend{aditya=1,anshul,aritra=5,ashutosh,manish=11,mayur,vaibhav=24,ayushi}; //assign values to some name in any order. All unassigned names get value as value of previous name plus one.

enum state  {working, failed}; //All enum constants must be unique in their scope.
//enum result {failed, passed};  // HERE ,failed cannot be declare twice 


int main() 
{ 
	enum week day; 
	day = Wed; 
	printf("wed = %d",day); 
	
	for(int i=Mon;i<=Sun;i++)
	printf("  %d \n",i); 
	
	enum frend dost;
	dost=anshul;
	printf("anshul=%d",dost);
	
	return 0; 
} 

