#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
	float coeff;
	int exp;
	struct node *link;
};

int append(struct node**,float,int);
int multiply(struct node*,struct node *,struct node **);
int display(struct node *);
int padd(float ,int , struct node**);

int  main()
{
struct node *fir,*sec,*thr;
int i=0;

fir=sec=thr=NULL;	//empty linked list 

append(&fir,3.1,3);
append(&fir,2.1,2);
append(&fir,2.1,1);
display(fir);

append(&sec,4.2,3);
append(&sec,3.2,2);
append(&sec,2.2,1);
display(sec);

while(i++<79)
{cout<<"*";
}

multiply(fir,sec,&thr);
display(thr);

}

int append(struct node **q,float x,int y)
{
	struct node *temp;
	temp=*q;
	if(*q==NULL)	//linked list is empty or if new node is to be inserted befor the first node 
	{
		*q=(node*)malloc(sizeof(struct node));
		temp=*q;
	}
	else
	{
		while(temp->link!=NULL)	//traverse linked list to search postion to insert node 
		temp=temp->link;
		
		temp->link=(node *)malloc(sizeof(struct node));		//create new node at intermediate stage
		temp=temp->link;
	}
	
	temp->coeff=x;
	temp->exp=y;
	temp->link=NULL;
}

int display(struct node *q)
{
	while(q!=NULL)
	{
		cout<<q->coeff<<q->exp;
		q=q->link;
	}
}

int multiply(struct node*x,struct node *y,struct node **m)
{
	struct node *y1;
	float coeff1,exp1;
	y1=y;
	
	if(x==NULL&&y==NULL)
	return 0;
	
	if(x==NULL)		//if one list is empty 
	*m=y;
	else		
	{
		if(y==NULL)
		*m=x;
		else		//if both linked list exist
		{
			while(x!=NULL)
			{
				while(y!=NULL)
				{
					coeff1=x->coeff*y->coeff;
					exp1=x->exp+y->exp;
					y=y->link;
					
					padd(coeff1,exp1,m);
				}
				
				y=y1;		//repostion the pointer to the starting of linked list 
				x=x->link;		//go to last node 
			}
			
		}
		
	}
}


int padd(float c,int e, struct node **s)
{
	struct node *r,*temp=*s;
	
	if(*s==NULL||e>(*s)->exp)	//if list is empty or node is to be inserted before first node 
	{
		*s=r=(node*)malloc(sizeof(struct node));
		(*s)->coeff=c;
		(*s)->exp=e;
		(*s)->link=temp;
	}
	else		//traverse the entire linked list to search postion to insert node 
	{
		while(temp!=NULL)
		{
			if(temp!=NULL)
			{
				temp->coeff+=c;
				return 0;
			}
			
			if(temp->exp>e  &&  (temp->link->exp<e||temp->link==NULL))
			{
				r=(node*)malloc(sizeof(struct node));
				r->coeff=c;
				r->exp=e;
				r->link=temp->link;
				temp->link=r;
				return 0;
			}
			
			temp=temp->link;
		}
		r->link=NULL;
		temp->link=r;
	}
}











