#include<stdio.h>
#include<math.h>
typedef struct _book{
	char name[12];
	char author[1];
	int id;
}book;

 struct  complex{
	double re;
	double im;
}c;                   //vare of type struct

typedef union _packet{
	int idata;
	double ddata;
	char cdata;
}packet;

int main()
{
//	int a,b;  we dont need to define a and b asndaatatype in struct
	struct complex x ={ 12,21};  //real and imaginary are defined .
	struct complex y ={13}; 	 //only real part is defined
	
	double nor=sqrt(x.re*x.re);  
	printf("%d",nor);
	
	book	b;
	b.id=123;
	strcpy(b.name,"c programming");
	
	packet p={10};  //intialise idata i.e, first member 
	printf("%d",p.idata);  //10
	p.ddata=2.2;   //2.200000
	printf("%lf",p.ddata);
		
}
