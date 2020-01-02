/*
#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


typedef struct sdata
{
	int adata;
	int bdata;
	union{
	int adata;
	int bdata;	
	}u;	
}data;

int main()
{
	data s;
	s.adata=10;
	s.bdata=20;
	s.u.adata=10;		//s.u.adata is intialised to bdata as they are assigned in same address
	s.u.bdata=20; 
	//u.adata=10;   //error 
	cout<<s.adata<<s.bdata<<s.u.adata<<s.u.bdata;	
}
*/
/*
int main()
{
	int data[]={10,20,30,40,50};
	int *p=data;
	cout<<2[p];			//30  p[2] is same as 2[p]
	cout<<-2[p];  		//-30
	cout<<p[p-data];	//10
	
}
*/

/*
int conc(char *a[],int n)
{
}
int main()
{
	char str[10][80];  //10 string of 80 length
	conc(str,10);
}
*/

/*
int main()
{
	int i=10,*p;
	p=&i;
	*p=*p**p;	//*p chamges the value
	i=i**p;
	cout<<*p<<i;
	 
}
*/

/*
int main() 
{
	int data[]={10,20,30,40,50};
	
	rotate(data,data+4,data+5);
	rotate(data+1,data+4,data+5);
	
	for(int i=0;i<5;i++)
	cout<<data[i]<<"  "; //50 40 30 20 10
}
*/

/*
int main()
{
	int data[]={10,20,30,40,50};
	
	for(int i=0;i<2;i++)
	{
		int j=data[i];
		replace(data,data+5,j,data[4-i]);
		replace(&data[0],&data[5],data[4-i],j);
	}
	
	for(int i=0;i<5;i++)
	cout<<data[i];
}
*/
/*
int main()
{
	vector<int> g;
	for(int i=1;i<=5;i++)
	g.push_back(i*10);
	
	g.resize(3);
	g.resize(8,100);
	g.resize(7);
	
	for(int i;i<g.size();i++)
	cout<<g[i]<<" ";		
}
*/

						//DOUBT 		DOUBT       DOUBT           DOUBT
/*
int add(int n1, int n2) {
    return n1 + n2;
}


int caller(int n1, int n2, int(*functocall)(int, int)) {		//
    return (*functocall)(n1, n2);
}


int main() {
    int  a, b, c;

    cin >> b >> c;
    //the pointer to function p which is initialized to function add 
   // caller(int a,int b ,int*) = &add;    // Line-1
	int *p=(int*)&add;
	*p=caller(b,c,&p);												add  <--     p    <----   
   

 // invo
// declareke the caller function to pass b, c and pointer to function caller
    a =add(b,c);    // Line-2

 printf("%d", a);

    return 0;

} // End of main

*/

/*

#include <iostream>
#include <string>
using namespace std;

int StrCmp(string s1, string s2) {
    if (s1==s2)                  // Line-1
        
        return 0;

    else if (s1>s2)              // Line-2
        
        return 1;

    else
        return -1;
}

int main() {
    string str1, str2;
    cout<<"enter string";
    cin >> str1 >> str2;

    if (StrCmp(str1, str2) == 0)        // Call-1
        cout << "equal" << endl;

    else if (StrCmp(str1, str2) > 0)    // Call-2
        cout << str1;

    else
        cout << str2;

    return 0;
}
*/

/*
// define compare function to compare between char i and j													//doubt   /doubt
 void sort(char *c,char *c1,int c){       // Line-1: Write proper function header
	c=*c-*c1;
	cout<<c;
    ;   // Line-2: Write correct function body
   
}
int main() {
    char data[5];

    for (int i = 0; i < 5; i++)
        cin >> data[i];

    sort(data, data + 5,int compare);

    for (int i = 0; i < 5; i++)
        cout << data[i] << " ";

    return 0;
}
*/

/*														//DOUBT  DOUBT 

#include <iostream>
#include <algorithm>
using namespace std;
// define compare function to compare between char i and j
 void sort(char **a,char **b,int c){       // Line-1: Write proper function header
	
   char temp;
   for(a;a<b;a++) // Line-2: Write correct function body
{ 
  	  if(**a>++**a)
     continue;
     else
   { char **temp;
     **temp=**a;
     **(a+1)=**a;
     **(a+1)=**temp;
   }
   
}//end of for
   
}  //end of sort

int main() {
    char data[5];

    for (int i = 0; i < 5; i++)
        cin >> data[i];

    sort(data, data + 5,  compare);

    for (int i = 0; i < 5; i++)
        cout << data[i] << " ";

    return 0;
} 

*/

/*
#include <iostream>

#include <cstring>

#include <cstdlib>

using namespace std;

typedef struct _String { char *str; } String1;
char strdup(char sen) {           // LINE-1: Write Function Header
    String1 s;
    s.str = (char*)(malloc(sizeof(sen)*sizeof(char))) ;// LINE-2: allocate memory for s.str
      return (char)s.str;
}
strcpy(s.str, s1.str);
    strcat(s.str, " ");   // An extra blank separator between strings
    strcat(s.str, s2.str);

    return s;
}

int main() {
    String1 s1, s2, s3;
    char line[80];

    cin >> line;
    s1.str = strdup(line); // Line-3

    cin >> line;
    s2.str = strdup(line); // Line-4

    s3 = s1 + s2;
    cout << s3.str << endl;

    free(s1.str); // Free memory allocated by strdup in Line-3
    free(s2.str); // Free memory allocated by strdup in Line-4
    free(s3.str); // Line-5: Free memory allocated in Line-2

    return 0;
}

*/

/*
#include <iostream>
#include <algorithm>
using namespace std;
// define compare function to compare between char i and j					alexstacy001@gmail.com    //answered by

int compare(char i,char j)
{
  return (i<j);
}


int main() {
    char data[5];

    for (int i = 0; i < 5; i++)
        cin >> data[i];

    sort(data, data + 5, compare);

    for (int i = 0; i < 5; i++)
        cout << data[i] << " ";

    return 0;
}
*/

/*
#include <stdio.h>
#include <iostream>
using namespace std;

int add(int n1, int n2) {
return n1 + n2;
}

int caller(int n1, int n2, int(*functocall)(int, int)) {
return (*functocall)(n1, n2);	//function pointer     as * is bind to function name

}
int main() {
int a, b, c;
cin >> b >> c;// declare the pointer to function p which is initialized to function add 
int (*caller)(int,int)=&add;    // Line-1		add  <--  caller		//caller=&add;

   

 // invoke the caller function to pass b, c and pointer to function caller
a=add(b,c);    // Line-2
cout<<a;
return 0;
}
*/

/*
#include<iostream>
#include<stdlib.h>
using namespace std;

void charArray(char *a) {

cout<<"enter 3 array elements";
    for (int i = 0; i < 3; ++i)
        cin >> a[i];

    for (int i = 0; i < 3; ++i)
        cout << a[i] << " ";
}

int main() {
char a[10];
  //a=((char*)malloc(a*sizeof(char)));  // LINE-1: dynamically allocate the 	//no need to allocate size of array dynamically if the size is declarted as ststically
                            // memory to array 'a' by C++ operators

    charArray(a);

    free(a);    // LINE-2: free the memory allocated to 'a'
    
    return 0;
}
*/























