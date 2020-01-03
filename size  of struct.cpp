#include<iostream>
#include<cstdlib>
using namespace std;

struct node
{
	//float f;
	int hmm;   //4
	int data;		//4
	struct node *next;		//8
};

int main()
{
	struct node *obj;
	
	
	//cout<<"hmm"<<sizeof(obj->hmm)<<endl;
	//cout<<"data"<<sizeof(obj->data)<<endl;
	
	//cout<<"object  "<<sizeof(obj)<<endl;
	//cout<<"next   "<<sizeof(obj->next)<<endl;
	//cout<<"stuct node "<<sizeof(struct node)<<endl;
	
	
	//cout<<"&obj"<<&obj<<endl;
	//cout<<"obj"<<obj<<endl;	  //
	
	/*
	struct node *q ;
	cout<<"q befor allocating  &q  q"<<&q<<"  "<<q<<endl;
	
	//cout<<" &next "<<&(obj->next)<<endl;  //
	
	q=(node*)malloc(sizeof(struct node));
	cout<<"&struct node q"<<( &q)<<endl;
	cout<<"struct node q"<<q<<endl;
	q->data=10;
	
	
	struct node *p;
	cout<<"before p"<<p;
	p=(node*)malloc(sizeof(struct node));
	cout<<"after p"<<p;
	
	
	q->next=p;
	*/
	
	int *a , b;
	cout<<"before allocating a= "<<a<<"  "<<endl;                               //*a programm crashes 
	cout<<"before allocating sizeof a="<<sizeof(a)<<"  "<<sizeof(*a)<<endl;
	
	a=(int*)malloc(sizeof(struct node));

	
	cout<<"after allocating a="<<a<<" "<<endl;								//*a programm craches  
	cout<<"after allocating  sizeof  a="<<sizeof(a)<<"  "<<sizeof(*a)<<endl;
	
	
}



