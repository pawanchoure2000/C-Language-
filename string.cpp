#include<iostream>
using namespace std;
/*
int main()
{
	char name[]="Pawan"; //string
	int i;
	
	//cout<<name;  // OUTPUT : Pawan  use %s specifier 
	
	i=0;
	while(name[i])	//name = base address of string
	{
	//cout<<name[i]<<*(name+i)<<*(i+name)<<i[name];   //print single character at a time  use %c specifier 
	i++;
	}	
}
*/
//print using pointer  
/*
int main()
{
	char name[]="pawan";
	char *ptr;
	ptr = name;
	
	while(*ptr!='\0')
	{
		cout<<*ptr;cout<<*name;		//*name=p as it the value at base address   //   OUTPUT : ppapwpapnp
		//cout<<*ptr;			//use %c specifier  prin single character 
		cout<<*ptr<<name;        // OUTPUT :ppawanapawanwpawanapawannpawan
		ptr++;
	}
}
*/




























