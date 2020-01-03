
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{    
    system("cls");
	int a=5,b=5,c=10;
	// < > <= >= ==  != 
	printf("a=5,b=5 c=10\n");
	printf(" a==b %d\n",a==b);
	printf("a!=b %d\n", a!=b);
	printf(" a==c %d\n",a==c);
	printf(" a>b %d\n",a>b);
	printf(" a>c %d\n",a>c);
	printf("a<b %d\n ",a<b);
	
	printf("a!=c %d\n",a!=c);	
	
    printf("a>=b %d\n",a>=b);
	printf("a>=c %d\n",a>=c);
    printf("a<=c %d\n",a<=c);	
				
	printf(" a>>b %d\n",a>>b);	
    printf("a>>c %d\n",a>>c);	
       printf("a<<c %d",a<<c);
       printf("a<<<c %d",a<<<c);
	return 0;
    getch();

}
