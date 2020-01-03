/*
//reverse string 

#include<stdio.h>
typedef struct stack
{
	char data[100];
	int top;
}stack;

int empty(stack *p)
{
	return (p->top==-1);				//-1 indicattes there is no element(empty stack) because minimum index value in arrayy could be zero
}

int top(stack *p)
{
	return p->data[p->top];   //return the element from top postion 
}
void push(stack *p,char x)
{
	p->data[++(p->top)]=x;    //increment the top postion and add the new element given to stack 
}

void pop(stack *p)
{
	if(!empty(p))  //check if stack is not empty    //if empty condition is false...
	(p->top)=(p->top)-1;   //the elment below the top is considerd as top most element of stack ..
}

int main()
{
	stack s;
	s.top=-1;
	
	char ch,str[10]="ABCDE";
	int i,len=sizeof(str);
	
	for(i=0;i<len;++i)
	push(&s,str[i]);
	
	printf("reversed string");
	while(!empty(&s))
	{
		printf(" %c",top(&s));	//	E has been added last so it would come out first ,,,,, //then D has been added so it would come after ......
		pop(&s);		
	}
	
}// main()

*/

/*
//reverse string in c++
#include<iostream>
#include<string.h>
#include<stack>
using namespace std;

int main()
{
	char str[]="ABCDE";
	stack<char> s;         //here no need to intialise the top to -1 as compiler takes care of it
	int i;
	
	for(i=0;i<strlen(str);i++)
	s.push(str[i]);
	
	cout<<"reversed string ";
	
	while(!s.empty())
	{
	
	cout<<s.top();
	s.pop();
	}
}
//no code for stack
//no intialisation
//clean interface 
//available in libraray

*/

/*

//evaluting postfix expression 
#include<stdio.h>
#include<ctype.h>
typedef struct stack
{
	char data[100];
	int top;
}stack;

int empty(stack *p)
{
	return (p->top==-1);				//-1 indicattes there is no element(empty stack) because minimum index value in arrayy could be zero
}

int top(stack *p)
{
	return p->data[p->top];   //return the element from top postion 
}
void push(stack *p,char x)
{
	p->data[++(p->top)]=x;    //increment the top postion and add the new element given to stack 
}

void pop(stack *p)
{
	if(!empty(p))  //check if stack is not empty    //if empty condition is false...
	(p->top)=(p->top)-1;   //the elment below the top is considerd as top most element of stack ..
}

int main()
{
	stack s;
	s.top=-1;
	
	char postfix[]={'1','2','3','*','+','4','-'};
	int i,op1,op2;
	for(i=0;i<7;i++)
	{
	char ch=postfix[i];
	
		if(isdigit(ch))
		push(&s,ch-'0');
		else
		{
			op2=top(&s);
			pop(&s);
			op1=top(&s);
			pop(&s);
			switch(ch)
			{
				case '+':   push(&s,op1+op2); break;
				case '-':   push(&s,op1-op2); break;
				case  '*':  push(&s,op1*op2); break;
				case '/':   push(&s,op1/op2); break;
			}
			
		}
	}
	
	printf("evaluated    %d",top(&s));
}
*/	

#include<iostream>
#include<string.h>
#include<stack>
using namespace std;

int main()
{
stack<int> s;
	char postfix[]={'1','2','3','*','+','4','-'};
for( int i=0;i<7;i++)
	{
		char ch=postfix[i];
		if(isdigit(ch))
		s.push(ch-'0');
		else
		{	int op2=s.top();
			s.pop();
			int op1=s.top();
			s.pop();
			switch(ch)
			{
				case '+':   s.push(op1+op2); break;
				case '-':   s.push(op1-op2); break;
				case  '*':  s.push(op1*op2); break;
				case '/':   s.push(op1/op2); break;
			}
			
		}
	}

	cout<<s.top();
}

//similar container include in c++
//queue
//deque add and remove from both end
//list	slike singly linked list
//map 	name value pair
//set	order is not important 
//union
//intersection
//and many more








