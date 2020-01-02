#include<stdlib.h>
#include<iostream>
using namespace std;

int addatbeg(struct node **,struct node **,int );
int addatend(struct node **,struct node **,int);

int delatbeg(struct node **,struct node **);
int delatend(struct node **,struct node **);

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
	
	front =rear =NULL;
	
	addatend(&front,&rear,11);
	addatbeg(&rear,&front,10);
	display(front);
	
	//item=delatbeg(&front,&rear);
	//cout<<item<<"extracted/deleted from queue ";
	
	//item=delatend(&front,&rear);
	//cout<<item<<"extracted/deleted from queue ";
	
	//display(front);
	
}

int addatend(struct node **f,struct node **r,int item)
{
	struct node *q;
	q=(node*)malloc(sizeof(struct node));
	q->data=item;
	q->link=NULL;
	
	if(*f==NULL)
	*f=q;
	else 
	(*r)->link=q;
	
	*r=q;
}

int addatbeg(struct node **f,struct node **r,int item)
{
	struct node *q;
	int *temp;
	q=(node*)malloc(sizeof(struct node));
	q->data=item;
	q->link=NULL;
	
	if(*f=NULL)
	*f=*r=q;
	else
	{
		q->link=*f;
		*r=*f;
		*f=q;
	}
}

int delatbeg(struct node **f,struct node **r)
{
	struct node *q;
	int item;
	
	if(*f=NULL)
	cout<<"queue is empty";
	else
	{
		q=*f;
		item=q->data;
		*f=q->link;
		free(q);
		
		if(*f==NULL)
		*r=NULL;
		
		return(item);
	}
	
}


int delatend(struct node **f,struct node **r)
{
	struct node *q,*rleft,*temp;
	int item;
	
	temp=*f;
	if(*r==NULL)
	cout<<"queue is empty";
	else 
	{
		while(temp!=*r)
		{
			rleft=temp;
			temp=temp->link;
			
		}
		
		q=*r;
		item=q->data;
		free(q);
		
		*r=rleft;
		(*r)->link=NULL;
		
		if(*r=NULL)
		*f=NULL;
		return(item);
	}
}

int display(struct node *q)
{
	cout<<"front ->";
	while(q!=NULL)
	{
		if(q->link==NULL)
		cout<<"<- rear";
		
		cout<<q->data;
		q=q->link;
	}
	cout<<endl;
}

int  count(struct node *q)
{
	int c=0;
	while(q!=NULL)
	{
		q=q->link;
		c++;
	}
	return c;
}



