#include<iostream>
#include<stdlib.h>
using namespace std;
struct node		//16
{
	int data;	//4
	struct node *link;	//8(node* , link )
};
 
//int push(struct node** ,int );	//adding element
//int pop(struct node**);		//deleting element
//int display(struct node *);
//int count(struct node *);

int main()
{
	struct node *top;					//struct   <--  top   <--  s
	int item;						//		^
	//top=NULL;						//		|
									//		q
	
	//cout<<"top->data"<<top->data;		
	
	cout<<"sizeof node"<<sizeof(node)<<"sizeof data and link"<<sizeof(top->data)<<sizeof(top->link)<<"sizeof node*"<<sizeof(struct node*)<<"sizeof top"<<sizeof(top);
	
	cout<<"size of "<<sizeof(top);					
	cout<<"top="<<top<<endl;
	cout<<"&top="<<&top<<endl;
									
//	push(&top,100);
//	push(&top,200);
	
//	display(top);
//	item=pop(&top);
//	cout<<item<<"removed/extracted from stack";
	//display(top);
}

/*
int push(struct node **s,int item)				//similar to adding node at the begining of list
{
	cout<<"*s="<<*s<<endl;
	struct node *q;			//cout<<"sizeof q="<<sizeof(q);  8
	cout<<"q="<<q<<endl;
	
	q=(node*)malloc(sizeof(struct node));
	cout<<"q="<<q<<endl;				//for each and every iteration of push statment new address is assigned q=0x811530  1st pusk statment
																										//q=0x811550	2nd push statment
	
	
	q->data=item;
	q->link=*s;
	*s=q;	//
}

int pop(struct node **s)			//similar to deleting node at begining of linkedlist
{
	int item;
	struct node *q;
	
	if(*s==NULL)
	cout<<"stack is empty";
	else
	{
		q=*s;
		cout<<"item to be deleted at address  q="<<q<<endl;
		item=q->data;
		*s=q;
		free(q);
		cout<<"after deletion  q="<<q<<endl;
		return(item);
		
	}
}


int display(struct node *q)
{
	while(q!=NULL)
	{
		cout<<q->data;
		q=q->link;
	}
	cout<<endl;
}

int count(struct node *q)	//count the no. of node present in linkedlist in stack
{
	int c=0;
	while(q!=NULL)
	{
		q=q->link;
		c++;
	}
	return c;
}

*/
