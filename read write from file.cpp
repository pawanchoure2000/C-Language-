#include<stdio.h>
int main()
{
	int *fp=NULL;
	int i;
	
	fp=fopen("input.dat","r");			//.dat  genric data file   		//created by application 	//data in binary or text format		//only access by application 
	fscanf(fp,"%d",&i);
	fclose(fp);
	
	fp=fopen("output.dat","w");
	fprintf("%d i^2 %d \n ",i,i*i);
	fclose(fp);
	
	return 0;
								
}
