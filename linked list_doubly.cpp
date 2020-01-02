#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
	struct node *prev;
	int data;
	struct node *next;
};

int append(struct node **,int );
int addatbeg(struct node **,int );
int addafter(struct node *,int ,int );
int display(struct node *q);
int del(struct node **,int );
int count(struct node *);

int main()
{
	struct node *p;
	p=NULL;
	append(&p,11);
	
	display(p);
	
	cout<<"no. of elements in linked  list   ="<<count(p)<<endl;
	
	addatbeg(&p,33);
	
	display(p);
	cout<<"no. of elements in linked  list  ="<<count(p)<<endl;
	
	addafter(p,1,40);
	
	display(p);
	cout<<"no. of elements in linked  list  ="<<count(p)<<endl;
	
	del(&p,51);
	
	display(p);
	cout<<"no. of elements in linked  list   ="<<count(p)<<endl;
}

int append(struct node **s,int num)
{
	struct node *r,*q=*s;
	if(*s==NULL)	//if linked list is empty 
	{
		*s=(node*)malloc(sizeof(struct node));	//create  new node 
		(*s)->prev=NULL;
		(*s)->data=num;
		(*s)->next=NULL;
	}
	else
	{
		while(q->next!=NULL)
		q=q->next;
		r=(node*)malloc(sizeof(struct node));
		r->data=num;
		r->next=NULL;
		r->prev=q;
		q->next=r;
	}
}

int addatbeg(struct node **s,int num)
{
	struct node *q;
	q=(node*)malloc(sizeof(struct node ));
	q->prev=NULL;
	q->data=num;
	q->next=*s;
	
	(*s)->prev=q;
	*s=q;
}

int addafter(struct node *q,int loc,int num)
{
	struct node *temp;
	int i;
	for(i=0;i<loc;i++)
	{
		q=q->next;
		if(q==NULL)
		cout<<endl<<"there are less than "<<loc<<"elemennts"<<endl;
	}
	
	q=q->prev;
	temp=(node*)malloc(sizeof(struct node))	;
	temp->data=num;
	temp->prev=q;
	temp->next=q->next;
	temp->next->prev=temp;
	q->next=temp;
}

int display(struct node *q)
{
	while(q!=NULL)
	{
		cout<<q->data<<"\t";
		q=q->next;
	}
	cout<<"->NULL"<<endl;
}

int count(struct node *q)
{
	int c=0;
	while(q!=NULL)
	{
		q=q->next;
		c++;
	}
	return c;
}

int del(struct node **s,int num)
{
	struct node *q=*s;
	while(q!=NULL)
	{
		if(q->data==num)	//if node to be deletd is foound
		{
			if(q==*s)	//if node to be deleted is first node 
			{
				*s=(*s)->next;
				(*s)->prev=NULL;
			}
			else
			{
				if(q->next==NULL)	//if node t be deleted is last node
				q->prev->next=NULL;
				else
				{
					q->prev->next=q->next;
					q->next->prev=q->prev;
				}
				free(q);
			}
		}
		q=q->next;
	}
	cout<<num<<"num not found "<<endl;
}



