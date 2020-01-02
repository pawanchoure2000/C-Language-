#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;

int count(struct node*);
int append(struct node**,int);
int addatbeg(struct node**,int);
int addafter(struct node *,int ,int);
int display(struct node* );				//connot use delete as it is keyword
int deletenode(struct node **,int );
int reverse(struct node **);


struct node
{
	int data;		//store data(data type :int)
	struct node *link;	//store address	(data type :struct node)					node[data + address]      <----       link
};



int main()
{
	struct node *p;		//it is head 											// struct node   <----    p    <----    q//FUNCTION
	/*																		//		^        ^          {head} 
	cout<<p->link;    //cannot use dot with pointer of type struct			//	    |        |
	p->data=10;		//p->node=10;	//error invalid use of	 node::node     //      r        temp    //FUNCTION    
	//cout<<*p;		//error
	//cout<<link<<*link;  //error link was not declared in this scope
	cout<<p->data; //no output
	*/
	
	cout<<"address of userdefined datatype(struct node)  p="<<p<<endl;
	cout<<"address of pointer p(head)  &p="<<&p<<endl;
	
	cout<<flush;
	
	//cout<<"data in currrent struct node p->data"<<p->data<<endl;
	//cout<<"next link to struct p->link="<<p->link<<endl;
	
	//cout<<"number of element in linked list count(p)="<<count(p)<<endl;
	
	p=NULL;
	cout<<"no . of element"<<count(p)<<endl;			//error			
	

	append(&p,1);	//add node at end of linked list 
	
	addatbeg(&p,999);		//add node at begining of linked list 
	
	
	display(p);	//display content of linkedlist	
				
	
	addafter(p,2,0);			//add node after specified no. of node
	
	
	display(p);				//display content of linkedlist
	cout<<"no . of element"<<count(p);
	
	deletenode(&p,888);				//delete specified node from linkedlist
	
	display(p);			//display content of linkedlist
	reverse(&p);
		
	return 0;
}


int count(struct node*q)
{
    int c=0;
    while(q!=NULL)
    {
        q=q->link;
        c++;
    }
    return c;
}



int append(struct node **q,int num)
{
	struct node *temp ,*r;
	temp=*q;	//same as temp=p  but p cannot be access here not in scope
	cout<<"address of  userdefined datatype (struct node) temp="<<temp<<endl;    //0 if p=NULL 
	cout<<"r(declared as *r) gives GARBAGE  as point to nothing  r="<<r<<endl;
	cout<<"address of userdefined datatype (struct node) *q="<<*q<<endl;		//0 if p=NULL
	cout<<"address of temp &temp="<<&temp<<endl;
	cout<<"addrese of r &r="<<&r<<endl;
	
	if(*q==NULL) //execute if p=NULL	//linked-list is empty
	{
		cout<<"linked list is empty .."<<endl;
		temp=(node*)malloc(sizeof(struct node));
		cout<<"single node added to empty linked list "<<endl;
		cout<<"address of userdefined datatype (struct node) temp="<<temp<<endl;
		temp->data=num;
		temp->link=NULL;
		
		
		*q=temp;   //assign address of temp to p i.e. head //p must point to first node (*q=p)
		cout<<"address of userdefined datatype(struct node) *q="<<*q<<endl;
		cout<<"here temp = *q because only single node is formed ";
		
	}
	else	//p= non-NULL
	{
		cout<<"address of userdefined datatype(struct node) before going to last node is temp="<<temp<<endl;
		temp=*q;	//goto first node
		cout<<"address of datatype(struct node) after going to last node is temp="<<temp<<endl;
		
		cout<<"they are same because only single node is present already ";
	
		while(temp->link!=NULL)		//traverse entire linkedlist	//make temp to point to next node..	//at last node condition fail
		temp=temp->link;	//point  to next node after each iteration
	
		cout<<"new node added to existing linked list "<<endl;
		cout<<" new address of userdefined datatype(struct node) temp="<<temp<<endl;
		
		r=(node*)malloc(sizeof(struct node));		//temp point to last  node // p point to first node 
		r->data=num;
		r->link=NULL;	//this node is last node in list	//r point to new last node
		temp->link=r;	//
	}
	
}




int addatbeg(struct node **q,int num)
{
	struct node *temp;
	cout<<"do not need to pass address of userdefined datatype(stuct node) to new node"<<endl;
	
	cout<<"temp(declared as *temp) gives GARBAGE as point to nothing temp="<<temp;
	temp=(node*)malloc(sizeof(struct node));
	temp->data=num;
	temp->link=*q;	//link of new node point to existing first node
	cout<<"adddress of struct node is assigned to link";
	cout<<"address of link"<<temp->link<<endl;
	*q=temp;	//new node made first node of list
}


//devc++ do not support this code 
//further code of this linked list is in codeblock.


int addafter(struct node *q,int loc,int num)         //only execute if p is not null                  //struct node <-- p (in main)
{                                                           //struct node  <---   q,temp ,r
    struct node *temp,*r;
    cout<<"address of  userdefined datatype (struct node)GARBAGE temp="<<temp<<endl;    //0 if p=NULL
	cout<<"address of  userdefined datatype (struct node)GARBAGE  r="<<r<<endl;
    int i;
    temp=q;
    cout<<"address of  userdefined datatype (struct node)after passing actual adress  temp="<<temp<<endl;
    for(i=0;i<loc;i++)//skip desired  portion
    {
        temp=temp->link;

        if(temp=NULL)
        cout<<"there are less than"<<loc<<"element in list "<<endl;

        r=(node*)malloc(sizeof(struct node));
        r->data=num;
        
        //while making point to link
		//left side(-)
		//right side(>)        
        r->link=temp->link;		//new node made to point to next node 		//temp->link:previous point to next   //r->link:new point to next
        temp->link=r;		//previous node made to point to new node		//r:
    }
    return 0;
}



int display(struct node* q)
{
	while(q!=NULL)		//traverse entire linked list
	{
		cout<<q->data;
		q=q->link;
	}
}


int deletenode(struct node **q,int num)
{
	
	struct node *old,*temp;
	temp=*q;
	
	while(temp!=NULL)	//traverse  the linked list
	{
		if(temp->data==num)
		{
			if(temp==*q)//if first node to be deleted
			{
				*q=temp->link;	//shifted p(*q) to next node
				free(temp);
				return 0;
			}
			
			else //delete interemediate linked list
			{
				old->link=temp->link;
				free(temp);
				return 0 ;
			}
		}
		
		else	//traverse entire linked list till last node
		{
			old=temp;	//old point to previous node 
			temp=temp->link;	//go to last node
		}
	}//while
	 cout<<"element "<<num<<"not found " ; 
}

int reverse(struct node **x)
{
	struct node *q,*r,*s;
	q=*x;
	r=NULL;
	
	while(q!=NULL)
	{
		s=r;
		r=q;
		q=q->link;
		r->link=s;
	}
	*x=r;
}



















