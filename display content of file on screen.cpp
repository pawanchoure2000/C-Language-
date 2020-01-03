#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	FILE *fp;
	cout<<"sizeof FILE  type of pointer "<<sizeof(FILE)<<endl;
	cout<<"sizeof fp pointer is "<<sizeof(fp)<<endl;
	char ch;
	fp=fopen("hello.txt","r");
	if(fp=NULL)
	cout<<"file cannot be opened ";
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
		break;
		cout<<ch;
		
	}
	fclose(fp);
	
}
