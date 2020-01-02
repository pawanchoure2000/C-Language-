#include<stdlib.h>
#include<iostream>
using namespace std;

int display(struct node *);
int add(struct node **,int );
int count(struct node *);
int deletenode(struct node **,int );

struct node
{
	int data;
	struct node *link;
};
int main()
{
	struct node *p;
	p=NULL;
	
	add(&p,4);
	display(p);
	deletenode(&p,7);	
}

int add(struct node **q,int num)
{
	struct node *r,*temp=*q;
	r=(node *)malloc(sizeof(struct node));
	r->data=num;
	
	if(*q==NULL||(*q)->data>num)
	{
		*q=r;
		(*q)->link=temp;
	}
	else
	{
		while(temp!=NULL)
		{
			if(temp->data<=num&&(temp->link->data>num||temp->link==NULL))
			{
				r->link=temp->link;
				temp->link=r;
			}
			temp=temp->link;
		}
	}
}




int display(struct node *q)
{
	while(q!=NULL)
	{
		cout<<q->data;
	}
}

int count(struct node *q)
{
	int c=0;
	while(q!=NULL)
	{
		q=q->link;
		c++;
	}
	return c;
}

int deletenode(struct node **q,int num)
{
	struct node *old,*temp;
	temp=*q;
	while(temp!=NULL)
	{
		if(temp->data==num)
		{
			if(temp==*q)
			{
				*q=temp->link;
				free(temp);
			}
			else
			{
				old->link=temp->link;
				free(temp);
				
			}
		}
		else
		{
			old=temp;
			temp=temp->link;
		}
			
	}
	cout<<"element"<<num<<"not found ";
}
