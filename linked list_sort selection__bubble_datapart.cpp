#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int getdata();
int append(struct node **,int);
int display();
int count(struct node*);

int selection(int );
int bubble(int n);

struct node
{
	int data;
	struct node *link;
}*newnode,*start,*visit;

int main()
{
	int n;
	cout<<"selection sort working ";
	getdata();
	printf("befor sorting ");
	display();
	n=count(start);
	selection(n);
	printf("after selection sort ");
	display();
	
	cout<<"bubble sort working ";;
	getdata();
	printf("befor sorting ");
	display();
	n=count(start);
	bubble(n);
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

int selection(int n)
{
	int i,j,temp;
	struct node *p,*q;
	
	p=start;
	for(i=0;i<n-1;i++)
	{
		q=p->link;
		
		for(j=i+1;j<n;j++)
		{
			if(p->data>q->data)
			{
				temp=p->data;
				p->data=q->data;
				q->data=temp;
			}
			q=q->link;
		}
		p-p->link;
	}
} 

int bubble(int n)
{
	int i,j,k,temp;
	struct node *p,*q;
	
	k=n;
	for(i=0;i<n-1;i++,k--)
	{
		p=start;
		q=p->link;
		
		for(j=1;j<k;j++)
		{
			if(p->data>q->data)
			{
				temp=p->data;
				p->data=q->data;
				q->data=temp;
			}
			
			p=p->link;
			q=q->link;
		}
	}
}





