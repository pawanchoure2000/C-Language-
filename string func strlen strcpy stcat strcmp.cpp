#include<iostream>
#include<cstring>
using  namespace std;

int main()
{
	char str1[20]="pawan";
	char str2[]="choure";
	char str3[20];		//str3 is empty string 
	
	int len,res;
	len=strlen(str1);
	cout<<len;	//5
	
	strcpy(str3,str1);  //str1 gets copied to str3
	cout<<str3;	//pawan
	
	res=strcmp(str1,str3);
	cout<<res;//strcmp return 0 =EQUAL ; return NON ZERO  = If NOT EQUAL		//0
	
}

