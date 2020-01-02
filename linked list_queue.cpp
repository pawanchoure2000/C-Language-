
#include<stdlib.h>
#include<iostream>
using namespace std;
int add(struct node **,struct node **,int );
int delq(struct node **,struct node **);
int display(struct node* );
int count(struct node * );


struct node
{
	int data;
	struct node *link;
};

int main()
{
	struct node *front ,*rear;
	int item;
	
	front =rear=NULL;
	
	add(&front,&rear,11);
	display(front);
	
	cout<<"no. of element in quene ="<<count(front);
	
	item=delq(&front,&rear);
	cout<<item<<"item deleted/removed from queue ";
	
	cout<<"no. of element in quene ="<<count(front);
		
}

int add(struct node **f,struct node **r,int item)
{
	struct node *q;
	q=(node*)malloc(sizeof(struct node));
	q->data=item;
	q->link=NULL;
	
	if(*f=NULL)
	*f=q;
	else
	(*r)->link=q;
	
	*r=q;
}

int delq(struct node **f,struct node **r)
{
	struct node *q;
	int item;
	
	if(*f==NULL)
	cout<<"queue is empty";
	else
	{
		q=*f;
		item=q->data;
		*f=q->link;
		free(q);
		
		if(*r=NULL)
		*r=NULL;
		
		return(item);
	}
}

int display(struct node* q)
{
	cout<<"front ->";
	while(q!=NULL)
	{
		if(q->link==NULL)
		cout<<"<-rear";
		
		cout<<q->data;
		q=q->link;
	}
}

int count(struct node * q)
{
	int c=0;
	while(q!=NULL)
	{
		q=q->link;
		c++;
	}
	return c;
}






