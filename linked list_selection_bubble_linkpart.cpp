#include<iostream>
#include<stdlib.h>
using namespace std;


int getdata();
int append(struct node **,int );
int display();
int selection();
int bubble();

struct node 
{
	int data;
	struct node *link;
}*start,*visit;

int main()
{
	cout<<"selection sort working ";
	getdata();
	printf("befor sorting ");
	display();
	
	selection();
	printf("after selection sort ");
	display();
	
	cout<<"bubble sort working ";;
	getdata();
	printf("befor sorting ");
	display();
	
	bubble();
	printf("after selection sort ");
	display();
	
}

int getdata()
{
	int val,n;
	char ch;
	struct node *new1;
	
	new1=NULL;
	do
	{
		printf("enter value ");
		scanf("%d",&val);
		
		append(&new1,val);
		cout<<"want to enter more";
		ch=getchar();
	}while(ch=='y'||ch=='y');
	
	start=new1;
}

int append(struct node **q,int num)
{
	struct node *temp;
	temp=*q;
	if(*q=NULL)
	{
		*q=(node*)malloc(sizeof(struct node));
		temp=*q;
		cout<<"memory allocated for empty node";
	}
	else
	{
		while(temp->link!=NULL)
		temp=temp->link;
		
		temp->link=(node*)malloc(sizeof(struct node));	//add node at the end
		cout<<"memory alloacted for single node " ;
		temp=temp->link;
	}
	
	temp->data=num;
	temp->link=NULL;
}


int display()
{
	visit =start;
	while(visit!=NULL)
	{
		cout<<visit->data;
		visit=visit->link;
	}
}

int selection()
{
	struct node *p,*q,*r,*s,*temp;
	p=r=start;
	while(p->link!=NULL)
	{
	s=q=p->link;	
		while(q!=NULL)
		{
			if(p->data>q->data)
			{	
				if(p->link==q)		//adjancent  node 
				{
					if(p==start)
					{
						p->link=q->link;
						q->link=p;
					
						temp=p;
						p=q;
						q=temp;
					
						start=p;
						r=p;
						s=q;
						q=q->link;
					}
					else
					{
						p->link=q->link;
						q->link=p;
						r->link=q;
					
						temp=p;
						p-q;
						q=temp;
					
						s=q;
						q=q->link;
					}
				
				}
				else
				{
					if(p==start)
					{
						temp=q->link;
						q->link=p->link;
						p->link=temp;
					
						s->link=p;
					
						temp=p;
						p=q;
						q=temp;
						
						s=q;
						q=q->link;
						start=p;
				}
					else
					{
						temp=q->link;
						q->link=p->link;
						p->link=temp;
					
						r->link=q;
						s->link=p;
					
						temp=p;
						p=q;
						q=temp;
						s=q;
						q=q->link;
					}
				}
			}
			else
			{
				s=q;
				q=q->link;
			}
		}
		r=p;
		p=p->link;
		}
	}	

int bubble()
{
	struct node *p,*q,*r,*s,*temp;
	s=NULL;
	
	while(s!=start->link)
	{
		r=p=start;
		q=p->link;
		
		while(p!=s)
		{
			if(p->data>q->data)
			{
				if(p==start)
				{
					temp=q->link;
					q->link=p;
					p->link=temp;
					start=q;
					r=q;
				}
				else
				{
					temp=q->link;
					q->link=p;
					p->link=temp;
					
					r->link=q;
					r=q;
				}
			}
			else
			{
				r=p;
				p=p->link;
			}
			q=p->link;
			if(q==s)
			{
				s=p;
			}
		}
	}
}











































