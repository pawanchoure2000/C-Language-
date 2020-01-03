#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;

int count(struct node*);
//int append(struct node **,int);
//int addatbeg(struct node**,int);
int addafter(struct node *,int,int);

struct node
{
	int data;		//store data(data type :int)
	struct node *link;	//store address	(data type :struct node)					node[data + address]      <----       link
};

int main()
{
	struct node *p;
	//p=NULL;

    cout<<"address of userdefined datatype(struct node)  p="<<p<<endl;
	cout<<"address of pointer p(head)  &p="<<&p<<endl;

	cout<<"data in currrent struct node p->data="<<p->data<<endl;
	cout<<"next link to struct p->link="<<p->link<<endl;

	cout<<"number of element in linked list count(p)="<<count(p)<<endl; //passing struct node addressggg
	//append(&p,1);
	//addatbeg(&p,999);
	addafter(p,7,0);    //passing struct node address, locatiojn, number/data
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
/*
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


		*q=temp;   //assign address of temp to p i.e. head
		cout<<"address of userdefined datatype(struct node) *q="<<*q<<endl;
		cout<<"here temp = *q because only single node is formed ";

	}
	else
	{
		cout<<"address of userdefined datatype(struct node) before going to last node is temp="<<temp<<endl;
		temp=*q;	//goto last node
		cout<<"address of datatype(struct node) after going to last node is temp="<<temp<<endl;

		cout<<"they are same because only single node is present already ";

		while(temp->link!=NULL)																//doubt
		temp=temp->link;

		cout<<"new node added to existing linked list "<<endl;
		cout<<" new address of userdefined datatype(struct node) temp="<<temp<<endl;


		r=(node*)malloc(sizeof(struct node));
		r->data=num;
		r->link=NULL;
		temp->link=r;
	}

}

int addatbeg(struct node **q,int num)
{
	struct node *temp;
	cout<<"do not need to pass address of userdefined datatype(stuct node) to new node"<<endl;

	cout<<"temp(declared as *temp) gives GARBAGE as point to nothing temp="<<temp<<endl;
	temp=(node*)malloc(sizeof(struct node));
	temp->data=num;
	temp->link=*q;  //*q=p
	cout<<"adddress of struct node is assigned to link"<<endl;
	cout<<"address of link temp->link="<<temp->link<<endl;
	cout<<"address of userdefined datatype = temp->link "<<endl;
	*q=temp;
}

*/
int addafter(struct node *q,int loc,int num)         //only execute if p is not null
                                                            //struct node <-- p (in main)
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
        r->link=temp->link;
        temp->link=r;
    }
    return 0;
}


