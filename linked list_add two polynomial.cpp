#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct node
{
	float coeff;
	int exp;
	struct node *link;
};

int append(struct node**,float,int);
int add(struct node*,struct node *,struct node **);
int display(struct node *);

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


add(fir,sec,&thr);
display(thr);
//cout<<"no. of element in merged linked list"<<count(thr);	
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

int add(struct node *x,struct node *y,struct node **s)
{
	struct node *z;
	
	if(x==NULL && y==NULL)	//if both linked list are empty
	return 0;
	
	while(x!=NULL && y!=NULL )
	{
		if(*s==NULL)
		{
			*s=(node*)malloc(sizeof(struct node));
			z=*s;
		}
		else											//crete new node at intermediate stage
		{
			z->link=(node*)malloc(sizeof(struct node));
			z=z->link;
		}
		
		if(x->exp < y->exp)
		{
			z->coeff=y->coeff;
			z->exp=y->exp;
			y=y->link;
		}
		else
		{	
			if(x->exp==y->exp)
			{
				z->coeff=y->coeff;
				z->exp=y->exp;
				y=y->link;	//go to next node 
			}
			else
			{
				if(x->exp==y->exp)
				{
					z->coeff=x->coeff+y->coeff;
					z->exp=x->exp;
					x=x->link;	//go to next node 
					y=y->link;
				}
				
			}
		}
	}	//while()
	
	while(x!=NULL)
	{
		if(*s==NULL)
		{
		*s=(node*)malloc(sizeof(struct node));
		z=*s;
	    }
	    else
	    {
	    	z->link=(node*)malloc(sizeof(struct node));
	    	z=z->link;
		}
	
		z->coeff=x->coeff;
		z->exp=x->exp;
		x=x->link;		//go to last node 
	}
	
	while(y!=NULL)
	{
		if(*s=NULL)
		{
		*s=(node*)malloc(sizeof(struct node));
		z=*s;
	    }
		else	
		{
		z->link=(node*)malloc(sizeof(struct node));
		z=z->link;
		}
		z->coeff=y->coeff;
		z->exp=y->exp;
		y=y->link;
	}

} //add()






