#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;
/*
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
	
	book	b;   //no need of struct keyword.....
	b.id=123;
	strcpy(b.name,"c programming");
	
	packet p={10};  //intialise idata i.e, first member 
	printf("%d",p.idata);  //10
	p.ddata=2.2;   //2.200000
	printf("%lf",p.ddata);
		
}
*/
//over and out				//over and out			//over and out			//over and out
/*
#include<stdio.h> 

struct Point 
{ 
int x, y; 
}; 

int main() 
{ 
struct Point p1 = {0, 1}; 

// Accesing members of point p1 
p1.x = 20; 
printf ("x = %d, y = %d", p1.x, p1.y); 

return 0; 
}
*/
//over and out				//over and out			//over and out			//over and out
//Designated Initialization allows structure members to be initialized in any order.
 
/*
struct Point 
{ 
int x, y, z; 
}; 

int main() 
{ 
// Examples of initializtion using designated initialization 
struct Point p1 = {.y = 0, .z = 1, .x = 2}; 
struct Point p2 = {.x = 20}; 

printf ("x = %d, y = %d, z = %d\n", p1.x, p1.y, p1.z); 
printf ("x = %d", p2.x); 
return 0; 
} 
*/
//over and out				//over and out			//over and out			//over and out
//struct can be written inside the main function
/*
int main()
{
	struct account		//collection of disimilar  data items		//stored in contiguous memory location 
	{
	char name;
	int no;
	float bal;	
	};
	struct account a1,a2,a3;
	
	cout<<"enter your name,account no , balance";
	scanf("%s %d %f",a1.name,&a1.no,&a1.bal);		// name  is string ,baseaddress can be obtained a1.name  i.e no need of & 
}
*/
//MORE ABOUT STRUCTURES
/*
//anonymous struct
	//struct 
	//{
	//char name[20];
	//int age;
	//}p1={"pawan",20};		//with no struct name

// C Program to demonstrate working of anonymous struct and Anonymous union
#include<stdio.h> 
struct Scope 
{ 
	// Anonymous structure    //Anonymous union
	struct						//write union in place of struct
	{ 
		char alpha; 
		int num; 
	}; 
}; 

int main() 
{ 
	struct Scope x; 
	x.num = 65; 
	x.alpha = 'B'; 

	// Note that members of structure are accessed directly 
	printf("x.alpha = %c, x.num = %d", x.alpha, x.num); 

	return 0; 
} 

*/

//value of one struct vare can be assigned to other vare of same type (of struct p type)using assigment
/*
struct p
{
	char name;
	int age;
};
struct player p2,p1={"pawan",30};
p2=p1;
*/

//nested structure
/*
struct part
{
	char type;
	int qty;
};		//p

struct vechile
{
	char marauti[12];
	struct part p;		//struct part is nested in struct vechile
};	//v

int main(9)
{
struct vechile v;
v.p.qty=300;
}
*/

////over and out				//over and out			//over and out			//over and out

//struct variable can be pass to function
//pass ind. structure element or entire struct
//pass address of structure element or address of structure vare

struct player
{
	char name[20];
	int age;
};



int display(char n,int a)
{
	//cout<<n<<a;
}

int show(struct player p1)
{
	cout<<p1.name;
}

int dis(char *n,int *a)
{
	cout<<*a<<*n;
}

int print(struct player *p2)
{
	cout<<(*p2).name<<p2->name;
}

int main()
{
	struct player p;
	display(p.name,p.age);	//pass individual element
	show(p);					//pass struct varei
	dis(p.name,&p.age);		//pass address of struct element  p.nam is address
	print(&p);					//pass address of struct vare
}









































































