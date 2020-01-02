#include<iostream>
#include<stdlib.h>

using namespace std;

struct node
{
	int data;
	struct node *link;
};

int add(struct node **,int );
int display(struct node *q);
int count(struct node *q);
int merge(struct node *p,struct node *q,struct node **s);

int main()
{
	struct node *fir,*sec,*thr;
	fir=sec=thr=NULL;
	
	add(&fir,1);
	add(&fir,2);
	add(&fir,3);
	add(&fir,4);
	add(&fir,5);
	
	cout<<"first linked list is: "<<display(fir)<<endl
		<<"no. of elements : "<<count(fir)<<endl;
	
	add(&sec,6);	
	add(&sec,7);	
	add(&sec,8);	
	add(&sec,9);	
	add(&sec,10);
	
	cout<<"second linked list is: "<<display(sec)<<endl
		<<"no. of elements: "<<count(sec)<<endl;
		
	merge(fir,sec,&thr);	
	cout<<"concatenated linked list : "<<display(thr)<<endl
		<<"no. of elements in linked list "<<count(thr);
			
}

int add(struct node **q,int num)
{
	struct node *r,*temp=*q;
	r=(node*)malloc(sizeof(struct node));
	r->data=num;
	
	if(*q==NULL||(*q)->data>num)	//if  list is empty or new node is to be inserted before first node  
	{
		*q=r;
		(*q)->link=temp;
	}
	
	else	
	{
		while(temp!=NULL)
		{
			if(temp->data<num&&(temp->link->data>num)||temp->link==NULL)
			{
				r->link=temp->link;
				temp->link=r;
			}
			temp=temp->link;
		}
		
		r->link=NULL;
		temp->link=r;
	}
}

int display(struct node *q)
{
	while(q!=NULL)
	{
		printf("%d",q->data);
		q=q->link;		//c++ we perform count and display both in single function in one go
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

int merge(struct node *p,struct node *q,struct node **s)
{
	struct node *z;
	z=NULL;
	
	if(p==NULL&&q==NULL)
	cout<<"both "<<p<<"and"<<q<<"list are empty ";
	
	while(p!=NULL&&q!=NULL)
	{
		if(*s==NULL)
		{
			*s=(node*)(malloc(sizeof(struct node)));
			z=*s;
		}
		else
		{
			z->link=(node*)(malloc(sizeof(struct node)));
			z=z->link;
		}
		
		if(p->data < q->data)
		{
			z->data=p->data;
			p=p->link;
		}
		else
		{
			if(q->data < p->data)
			{
				z->data=q->data;
				q=q->link;
			}
			else
			{
				if(p->data==q->data)
				{
					z->data=q->data;
					p=p->link;
					q=q->link;
				}
	
			}			
			
		}
		
	}//while()
	
	
	while(p!=NULL)
	{
		z->link=(node*)malloc(sizeof(struct node ));
		z=z->link;
		z->data=p->data;
		p=p->link;
	}
	
	
	while(q!=NULL)
	{
		z->link=(node*)malloc(sizeof(struct node));
		z=z->link;
		z->data=q->data;
		q=q->link;
	}
	z->link=NULL;
	
}//merge()





















































