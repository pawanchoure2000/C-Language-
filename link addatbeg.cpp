#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;

//int append(struct node **,int);
int addatbeg(struct node**,int);

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

	cout<<"data in currrent struct node p->data"<<p->data<<endl;
	cout<<"next link to struct p->link="<<p->link<<endl;

	//p=NULL;
	//count(p);			//error

/*
	append(&p,1);	//add node at end of linked list
	append(&p,2);
	append(&p,3);
	append(&p,4);
	append(&p,17);
*/


	addatbeg(&p,999);		//add node at begining of linked list
	//addatbeg(&p,888);
	//addatbeg(&p,777);
/*
	display(p);				//display content of linkedlist

	addafter(p,7,0);			//add node after specified no. of node
	addafter(p,2,1);
	addafter(p,1,99);

	display(p);				//display content of linkedlist
	//cout<<count(p);

	delete(&p,888);				//delete specified node from linkedlist
	delete(&p,1);
	delete(&p,10);

	display(p);				//display content of linkedlist

	*/
	return 0;
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

*/


int addatbeg(struct node **q,int num)
{
	struct node *temp;
	cout<<"do not need to pass address of userdefined datatype(stuct node) to new node"<<endl;

	cout<<"temp(declared as *temp) gives GARBAGE as point to nothing temp="<<temp;
	temp=(node*)malloc(sizeof(struct node));
	temp->data=num;
	temp->link=*q;
	cout<<"adddress of struct node is assigned to link";
	cout<<"address of link"<<temp->link<<endl;
	*q=temp;
}

//devc++ do not support this code
//further code of this linked list is in codeblock.




