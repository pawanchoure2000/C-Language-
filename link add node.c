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
	struct node *p;
    cout<<"address of userdefined datatype(struct node)  p="<<p<<endl;
	cout<<"address of pointer p(head)  &p="<<&p<<endl;

	cout<<"data in currrent struct node p->data"<<p->data<<endl;
	cout<<"next link to struct p->link="<<p->link<<endl;
	addatbeg(&p,999);
	return 0;
}
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
