#include<iostream>
#include<cstring>		//strcpy
#include<stdlib.h>		//malloc
#include<stdio.h>		//printf
using namespace std;


/*
struct s
{
	char ch;	//%c
	int i;		//%d
	float a;		//%f
};
int f(struct s v)
{
	//cout<<v->ch<<v->i<<v->a;	//on left of arrow there must be a pointer t structure Error] base operand of '->' has non-pointer type 's'
}

int g(struct s *v)
{
	cout<<v.ch<<v.i<<v.a;		//on left of dot there must be a variable of type structure Error] request for member 'ch' in 'v', which is of pointer type 's*' (maybe you meant to use '->' ?)
}

int main()
{
	struct  s var ={'C',100,12.55};
	f(var);
	g(&var);
}
*/

/*
int main()
{
	struct 
	{
		int num;
		float f;
		char mess[50];
	}m;
	
	m.num=1;
	m.f=3.14;
	cout<<m.mess<<"base address of m.mess"<<endl;
	//m.mess="tumse naa ho pyegaa";				//Error] incompatible types in assignment of 'const char [20]' to 'char [50]'  it can ever ocuur on lefthand side //it is not lvalue 
	strcpy(m.mess,"chal nikal ");
	cout<<&m.num<<&m.f<<&m.mess<<"address stored in contigous memory location "<<endl;	//%u opertar for address 
	cout<<m.num<<m.f<<m.mess;		//%d %f %s
}
*/
/*
int main()
{
	struct a
	{
		char arr[10];
		int i;
		float b;
	}v[2];
	
	cout<<v[0].arr<<"after arr[10] storage"<<&v[0].i<<&v[0].b<<endl;
	cout<<v[1].arr<<"after arr[10] storage"<<&v[1].i<<&v[1].b;
	cout<<"stored in contionous memory location ";
}
*/

/*
int main()
{
	struct a
	{
		char ch[7];
		char *str;
	};
	
	
	struct a s1={"nagpur", "bombay"};
	cout<<s1.ch[0]<<*s1.str<<endl;		//%c %c	//[0]th element of array   //value at address 
	cout<<s1.ch<<s1.str<<endl;		//%s %s
	
	printf("%c",s1.ch[0]);cout<<endl;	//n
	printf("%s",s1.ch);						//nagpur
	
	printf("%s",s1.ch[0]);		//they do not print anything 
	printf("%c",s1.ch);			//they do not print anything 
	
	
	//struct a *s2={"pune"};		//Error] cannot convert 'const char*' to 'main()::a*' in initialization
	
}
*/

/*
//question 5
int main()
{
	struct a
	{
		char ch[7];
		char *str;
	};
	
	struct b
	{
		char *c;
		struct a ss1;
	};
	
	//struct a ss2;
	//struct  b s2;
	
	struct b s2={"raipur","kanpur","jaipur"};	//
	//s2.c="raipur";
	//s2.ss2.ch="kanpur";
	//s2.ss2.str="jaipur";
	
	cout<<s2.c<<s2.ss1.str<<endl;
	cout<<++s2.c<<++s2.ss1.str;
}

*/

/*
//que 6
int main()
{
	struct s1
	{
		char *z;
		int i;
		struct s1 *p;
	};
	
	static struct s1 a[]={
								{"nagpur ",1,a+1},	//a[0]	 //p --> a[1]		//a[0].z ,a[0].i  ,a[0].p
								{"raipur",2,a+2},	//a[1] 	//p --> a[2]		//a[1].z , a[1].i  ,a[1].p		
								{"kanpur",3,a}		//a[2]	//p --> a[0]		//
														};
	
	struct s1 *ptr=a;	//  a <--  ptr
	///////////////////////////
	
	cout<<"********************************************address of each struct array****************"<<endl;
	cout<<ptr<<"and"<<a<<"are same i.e, address of a and ptr"<<endl;
	cout<<"&a[0]="<<&a[0]<<"  &a[1]="<<&a[1]<<"  &a[2] ="<<&a[2]<<endl;
	
	cout<<"******************************************** ptr point to a[0]***********"<<endl;
	cout<<"&a[0]="<<&a[0]<<"  &(a[0].z)="<<&(a[0].z)<<"  &a[0] and &(a[0].z) are same "<<"  or &(ptr->z)="<<&(ptr->z)<<" or  &(a[2].p->z)="<<&(a[2].p->z)<<endl;
	cout<<"further :"<<"  &(a[0].i=)"<<&(a[0].i)<<"  or &(ptr->i)="<<&(ptr->i)<<"  a+1="<<a+1<<"is same as  a[1]"<<endl;
	cout<<"hi hi "<<&(a[2].p->z)<<endl;
	
	++ptr;
	cout<<"check if it changes "<<&(a[2].p->z)<<"and it works"<<endl;
	cout<<"********************************************after increment pointer ****"<<endl;
	cout<<"&a[1]="<<&a[1]<<"  &(a[1].z)="<<&(a[1].z)<<"  &a[0] and &(a[0].z) are same "<<"  or &(ptr->z)="<<&(ptr->z)<<" &(a[0].p->z)="<<&(a[0].p->z)<<endl;
	cout<<"further :"<<"  &(a[1].i=)"<<&(a[1].i)<<"  a+1="<<a+2<<"is same as  a[2]"<<endl;
	
	++ptr;
	cout<<"*********************************************after increment pointer ****"<<endl;
	cout<<"&a[2]="<<&a[2]<<"  &(a[2].z)="<<&(a[2].z)<<"  &a[2] and &(a[2].z) are same "<<"  or &(ptr->z)="<<"  &(ptr->z)="<<&(a[1].p->z)<<endl;
	cout<<"further :"<<"  &(a[2].i=)"<<&(a[2].i)<<"  a="<<a<<"is same as  a[0]"<<endl;
	
	cout<<&(ptr->p);	//doubt
	/////////////////////////////
	

	cout<<a[0].z<<endl	//nagpur
		<<ptr->z<<endl	//nagpur	//raipur if below statment is executed   //doubt
		//<<(++ptr)->z<<endl //raipur //a[1] <-- ptr	//++ptr->z  diffrent from (++ptr)->z //->(arrow opertar) has more precedence than ++(increment opertar)
		<<a[2].p->z;	//nagpur												
}
*/


/*
//que 7

int main()
{
	struct s1
	{
		char *str;
		int i;
		struct s1 *ptr;
	};
	
	static struct s1 a[]={
							{"nagpur",1,a+1},	//a[0]
							{"raipur",2,a+2},	//a[1]
							{"kanpur",3,a}		//a[2]
											};
											
	struct s1 *p=a;
	int j;
	
	for(j=0;j<=2;++j)
	{
		cout<<--a[j].i<<"\t";	//dot opertar has high precedence than -- and ++
		cout<<++a[j].str<<endl;
	}										
	
}
*/

/*
//que 8

int main()
{
	struct s1
	{
		char  *z;
		int i;
		struct s1 *p;
	};
	
	static struct s1 a[]={  {"nagpur",1,a+1},
							{"raipur",2,a+2},
							{"kanpur",3,a}
												};
	
	static s1 *ptr =a;
	cout<<++(ptr->z)<<endl;		//ptr --> a[0] 
	cout<<a[(++ptr)->i].z<<endl;	//ptr  -->  a[1] (++ptr)			//kanpur		
	cout<<a[--(ptr->p->i)].z<<endl;		//ptr -->  a[2] (ptr->p) i.e a+2		//kanpur
}
*/

/*
//que 9		//doubt
int main()
{
	struct s1
	{
		char *str;
		struct s1 *ptr;
	};
	
	static struct s1 arr[]={
							{"pawan",arr+1},	//arr[0]
							{"prakash",arr+2},	//arr[1]
							{"choure",arr}		//arr[2]
													};
	
	struct s1 *p[3];
	int i;
	
	for(i=0;i<=2;i++)
	p[i]=arr[i].ptr;		//(*ptr) p[0]=arr[1]  p[1]=arr[2]    p[2]=arr[0]
	
	//p cannot  be incremented or decremented  as it is array of pointer(base adddress ) .......... if it is done so it would don't recognise from where array started i.e base address
	cout<<p[0]->str<<endl;		
	cout<<(*p)->str<<endl;
	
	
	cout<<**p.str<<endl;
													
}
*/



/*
//que 10

struct s1
{
	char *str;
	struct s1 *next;
};

int swap(struct s1 *p1,struct s1 *p2)		//exchange string(char *str) with eachother .... 
{
	char *temp;				
	temp=p1->str;
	p1->str=p2->str;
	p2->str=temp;
}

int main()
{
	static struct s1 arr[]={
								{"pawan",arr+1},	//arr[0]
								{"prakash",arr+2},		//arr[1]
								{"apna swag",arr}		};		//arr[2]
	
	struct s1 *p[3];
	int i;
	
	for(int i=0;i<=2;i++)
	p[i]=arr[i].next;		// p[0]-->arr[1], p[1]-->arr[2] , p[2]-->arr[0]						//MOST IMPORTANT LINE FOR OUTPUT OF ANY STATMENT
	
	cout<<p[0]->str<<endl		//prakash		//p[0] point to arr[1]
		<<(*p)->str<<endl		//prakash
		<<(**p).str<<endl;		//prakash
								
	swap(*p,arr);			//same as: swap(&arr[1] , arr) 			//result: arr[1].str=pawan    arrr[0].str=prakash				
	cout<<p[0]->str<<endl;		//pawan
	cout<<(*p)->str<<endl;		//pawan
	cout<<(*p)->next->str<<endl;		//apna swag
	cout<<(*p)->next->next->str<<endl;		//prakash
	
	
	swap(p[0],p[0]->next);		//same as: swap(&arr[1],&arr[2])	//result :arr[1].str=apna swag   arr[2].str=pawan
	cout<<p[0]->str<<endl;			//apna swag
	cout<<(*++p[0]).str<<endl;		//pawan
	cout<<++(*++(*p)->next).str<<endl;			//pna swag
}

*/

/*
//que 11
int main()
{
	struct node 			//sizeof struct npde is 8 
	{
		int data;		//4
		struct node *link;			//4
	};
	
	struct node *p,*q;
	
	p=(node*)malloc(sizeof(struct node));		//return the base address of 8 bytes 
	q=(node*)malloc(sizeof(struct node));
	
	cout<<sizeof(p)<<endl;		//8
	cout<<sizeof(q)<<endl;			//8		
}

*/

/*
//que 12
int main()
{
	struct node
	{
		int data;
		struct node *link;
	};
	
	struct node *p,*q;
	p=(node*)malloc(sizeof(struct node));		
	q=(node*)malloc(sizeof(struct node));		
	
	p->data=30;
	p->link=q;
	
	q->data=40;
	q->link=NULL;
	
	cout<<p->data;	//30
	//cout<<q->data;		//40
	p=p->link;	//p=q->link;(what is difference between these two)		//change content of p to p->link	//p is now equal to q
	cout<<p->data;		//40
}
*/
/*
//que13

int main()
{
	struct node 
	{
		struct node *prev;
		int data;
		struct node *next;
	};
	struct node *p,*q;									//
	p=(node*)malloc(sizeof(struct node));				//		[NULL]<--(prev) p (next)-->      <---(prev) q (next)--->[NULL]
	q=(node*)malloc(sizeof(struct node));				//
	
	p->data=75;
	q->data=90;
	p->prev=NULL;
	p->next=q;
	q->prev=p;
	q->next=NULL;
	
	while(p!=NULL)
	{
		cout<<p->data;
		p=p->next;	//75 90  q->next=NULL terminate the node struct otherwise it print the garbage value  
		
		//p=q->prev;	//print 75 for infinte loop
		//p=q->next;		//75  q->next is NULL therfore node is terminated it just like skkiping the node  q
		//p=p->prev;			//75  p->prev is NULL therfore node is terminated  and does not print the data of  node q
		
	}
}

*/

/*
//que 14
int main()
{
	struct node
	{
		int data;
		struct node *next;
	};
	
	struct node *p,*q;	
	p=(node*)malloc(sizeof(struct node));		//		p --> q -->(circular linked list)
	q=(node*)malloc(sizeof(struct node));		//
	
	p->data=10;
	q->data=20;
	p->next=q;
	q->next=p;
	
	while(p!=NULL)	
	{
		cout<<p->data;
		p=p->next;			// 10 20 in infinite loop 
	}
}
*/

//what will be the output if the following ..

/*
int main()
{
	struct a
	{
		char *str;
		struct a *ptr;
	};
	
	static struct a arr[]={{"happiness",arr+2},		//arr[0]
							{"money",arr},			//arr[1]
							{"life",arr+1} };		//arr[2]}
							
	struct a *p[3];
	
	int i;
	
	for(int i=0;i<=2;i++)
	p[i]=arr[i].ptr;		//p[0]=arr[2]  ,p[1]=arr[0]   p[2]=arr[1]		//MOST IMPORTANT FOR ANSWER 
	
	cout<<p[0]->str;		//
	cout<<(*p)->str;			
	cout<<(**p).str;						
							
}

*/

/*
int main()
{
	struct  a
	{
		struct a *next;
		int data;
	};
	
	struct a *ptr[3];
	int i;
	
	ptr[0]=(a*)malloc(sizeof(struct a));			//ptr[0]   -->  ptr[1]   --->   ptr[2]
	ptr[1]=(a*)malloc(sizeof(struct a));
	ptr[2]=(a*)malloc(sizeof(struct a));
	
	ptr[0]->data=10;
	ptr[1]->data=20;
	ptr[2]->data=30;
	
	ptr[0]->next=ptr[1];
	ptr[1]->next=ptr[2];
	ptr[2]->next=NULL;		//i.e linked list is linear 
	
	while(ptr[0]!=NULL)
	{
		cout<<ptr[0]->data;
		ptr[0]=ptr[0]->next;
	}
	
}
*/

/*
struct a
{
	char city[3[10];		//3 string  with 10 character each
	char state[3][10];
};

int main()
{
	struct a arr={ {"nagpur","mumbai","bqanglore"},
					{"mahrastra","tamilnadu","karnataka"}
															};
															
	cout<<*(arr.city)<<endl
	<<*arr.state<<endl
	<<*arr.cityge+2<<endl
	<<*arr.state+2<<endl;							
}

*/

/*
int main()
{
	struct a
	{
		struct b
		{
			char name[10];
			int age;
		}	bb;
	
		struct c
		{
			char addr[50];
			int kill;
		}cc;	
	};
	
	struct a *ptr
	struct a aa={{"panda pubg",20},
				{"pochinki",2000}   };
	
	ptr=&aa;
	
	cout<<ptr->bb.name<<endl
		<<ptr->cc.addr<<endl
		<<ptr->bb.age<<endl
		<<ptr->cc.kill<<endl;
	
}	
*/

struct b
{
	char name[10];
	char add[50];
};

int print(struct b *bb)
{
	cout<<bb->name;
	cout<<bb->add;
}

int main()
{
	struct b bb={"pawanbhau","chand p"};
	print(&bb);	
}





































































