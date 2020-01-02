#include<iostream>
#include<cstring>
using namespace std;

/*
#define yes 1
#define no 0

int main()
{
	char master[6][10]={	//ocupy 60 bytes
		"pawan",			//here name in 'p''a''w''a''n' '\0' some of byytes goes wastage .... we can save memory by using memory datatype ARRAY OF POINTER    IMP
		"vaibhav",
	"sankalp",
	"love",
	"prakash",	"vishnu",
	"shubham",


	"anshul",
	"lucky"
			};
			
	//cantakefrom user by for loop		
	
	int i,flag,a;
	char name[10];
	
	cout<<"enter name";
	cin>>name;

	flag=no;
	for(i=0;i<=5;i++)
{
		a=strcmp(&master[i][0],name);
		if(a==0)
	{	cout<<"you can enter:";
		flag=yes;
	
	}
}

if(flag==no)
cout<<"chal bhaag yhaee seaa ****** ";

}
*/

//store string in array of pointer for efficient memmory utilisation
/*
char swap(char **s1,char **s2)   //excepting address of char pointer
{
	char *t;
	t=*s1;
	*s1=*s2;
	*s2=t;
}

int main()
{
	char *name[]={		//by using POINTER TO ARRY no need to intialise size of array
	"pawan","vaibhav", //14 bytes
	"sankalp",   //8 bytes
	"love",	//5 bytes
	"prakash",	"vishnu",  	//15 bytes 
	"shubham",  //8 bytes 
	"anshul",  //7 bytes 
	"lucky"   //6 bytes
	};		//it have BASE ADDDRESS of respective name ;name[0] =base address of "pawan"  and so on ...
	
	int s=sizeof(name);
	cout<<s;  //72 bytes  //63bytes(actual string )  +   9bytes(arry of pointer )  = 72 bytes			//imp
	
	cout<<name[1];  //vaibhav
	//can interchange name 
	swap( (name+1), (name +2) );  //passing address	  // swap (char name+1,char name+2)   [Error] cast from 'char**' to 'char' loses precision [-fpermissive]
	cout<<name[1];
	cout<<name[2];
}
*/

w




































