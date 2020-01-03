#include<iostream>
#include<cstring>
using  namespace std;
/*
int main()
{
	char str1[20]="pawan";
	char str2[]="choure";
	char str3[20];		//str3 is empty string 
	
	int len,res;
	len=strlen(str1);				//we are passing BASE ADDRESS OF STRING for strlen
	cout<<len<<endl;	//5
	
	int len2=strlen("YOO YOO HONEY SINGH');
		
	strcpy(str3,str1);  //str1 gets copied to str3
	cout<<str3<<endl;	//pawan
	
	res=strcmp(str1,str3);
	cout<<res<<endl;//strcmp return 0 =EQUAL ; return NON ZERO  = If NOT EQUAL		//0
	
	strcat(str1,str2);
	cout<<str1<<endl;	
}
*/
//for function
/*

int xstrlen(char *s)
{
	int len=0;
	while(*s!='\0')
	{
		len++;
		s++;
	}
		return len;
}

char  xstrcpy(char *t,const char *s)   //can place const to avoid change in source string
{
	while(*s!='\0')
	{
		*t=*s;
		s++;
		t++;	
	}
	return *t;
}

char xstrcat(char *s1,char *s2)
{
	*s1=*s1+*s2;
	return *s1;
}



char xstrcmp(char *s1,char *s2)
{
	while(*s1==*s2)
	{
		if(*s1==*s2)
		return 0;
		
		s1++;
		s2++;
	}
	return (*s1-*s2);
}

int main()
{
	char arr[]="hello";
	int len1,len2;
	
	len1=xstrlen(arr);
	len2=strlen("this is world of programming");
	
	char st1=xstrcpy(" ","hello");
	char st2=xstrcat("hello","world");

	char st3=xstrcmp("hello","hello");
	
	cout<<st1<<endl<<st2<<endl<<st2<<endl;
	
}
*/
//

















