#include<iostrea>
#include<stdlib.h>
using namespace std;


int add(struct node **,struct node **,int );
int del(struct node **,struct node **);
int display(struct node *);


struct node 
{
	int data;
	struct node *link;
};

int main()
{
	struct node *front,*rear;
	
	front=rear=NULL;
	cout<<"rear and front end are NULL"<<endl;
	
	add(&front,&rear,10);
	add(&front,&rear,20);
	add(&front,&rear,30);
	add(&front,&rear,40);
	add(&front,&rear,50);
	
	cout<<"after adding element 5 elements ";
	display(front);
	
	//del(&front,&rear);
	//del(&front,&rear);
	//del(&front,&rear);
		
	//cout<<"after deleting 3 elements";
	display(front);	
}

int add(struct node **f,struct node **r,int num)
{
	struct node *q;
	
	q=(node*)malloc(sizeof(struct node));
	q->data=num;
	
	if(*f==NULL)
	*f=q;
	else
	(*r)->link=q;
	
	*r=q;
	(*r)->link=*f;
}

int del(struct node **f,struct node **r)
{
	struct node *q;
	int item;
	
	if(*f==NULL)
	cout<<"queue is empty ";
	else
	{
		if(*f==*r)
		{
			item=(*f)->data;
			free(*f);
			*f=NULL;
			*r=NULL;
		}
	
		else
		{
			q=*f;
			item=q->data;
			*f=(*f)->link;
			(*r)->link=*f;
			free(q);
		}
	return(item);
	}
}

int display(struct node *f)
{
	struct node *q=f,*p=NULL;
	cout<<"front--->"<<endl;
	
	while(q!=p)
	{
		cout<<q->data;
		q=q->link;
		p=f;
	}
	cout<<"---> front "<<endl;
}





