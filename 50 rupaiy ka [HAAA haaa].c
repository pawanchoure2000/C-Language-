#include<iostream>
using namespace std;

 //50 
 /*
{
	int  b=12 ,b1=43;  
	char a,d ,d1;
	int c,c1;
	
	//rvalue converts to type of lvalue  i.e , int (decimal)
	c='A'+b;   //'A convert to ASCII A=65  i.e 65+12 =77
	cout<<c; 	//77
	
	//rvalue convert to lvalue  i.e, char(character )
	d=b+'a';      //'a' + 12 ='m'  where a=97 in decimal
	cout<<d;
	
	c1=a+b;    //a=null in decimal  
	cout<<c1;
	

	//assign int to char means  decimal to character conversion ASCII
	
	d=b;   //something like question mark 
	cout<<d;  //FF (form feed)
	
	d1=b1;  // in ascii table 43 is +
	cout<<d1  //+
}
*/
//100
/*
{										//    number (and with zero,or with one , or with zero) don't work
  int a=2,b=3,c=4,x,y;
  
  x=a&1;     //when & with 1   ;  even gives zero    ;  odd gives one
  cout<<x;   
  y=b&1;
  cout<<y;
  x=c&1;
  cout<<x;
}
*/
//150
/*
{
	//double  a=3.00%2;     can not perform modulas operation on float number   ERROR
	int a=3%2;
	cout<<a;
}
*/
//200
/*     //use 100 vala concept 
{
	int num;
	cout<<"enter num";
	cin>>num;
	if(num&1)       //
	cout<<"ODD";
	else
	cout<<"even";
}
*/
//250
/*
#define pawan int           //alternative name of the datatype 
{
	pawan i=10;			//i  declared is int 
	cout<<i;W
}
*/
/*
//300
//in c89 not necessrry to providde a return statment if func does not return 
//in c99 necessary to provide  a return statment  if the function doesnoty return anything...
*/
//350
// structure, all of its data members are stored in contiguous memory locations. i.e calloc()

//400
/*
#include <stdio.h> 
enum State {WORKING = 0, FAILED, FREEZED}; 
enum State currState = 2;                                 //[Error] invalid conversion from 'int' to 'State' [-fpermissive]

enum State FindState() { 
	return currState; 
} 

int main() { 
(FindState() == WORKING)? printf("WORKING"): printf("NOT WORKING"); 
return 0; 
}
*/
//450
//in printf specifier %d can be writeen  as %i 

//500
//internally array member are access are using pointer 
/*	int a[]={2.4.6.8.10};
	a[i] becomes *(a+i)   which maeans ith integer from base address 
	therfore i[a] is same as *(i+a)    
	a[i] and i[a] are same ...
*/

//550
//que : do array name always give base address
//sol : when array name give base address it is said that ARRAY HAS DECAYED INTO POINTER ,DECAYING DO NOT TAKE PLACE in TWO condition
// 1.when ARRAYNAME is used with SIZEOF OPerator
// 2/ when ARRAYNAME IS operand with & Operatar 

//600				FIRST INT (arr)		ARRAY OF INT(&arr) 
//QUE : do arr and &arr are same
//SOL : NO, arr = address  of FIRST INT
// 			&arr =address of ARRAY OF INT 

//650
//char a[] and char *a is treataed as SAME  ,when using them as FORMAL PARAMETER 

//700
//**can ASSIGN NEW STRING TO POINTER 
//**can NOT ASSIGN NEW STRING TO ARRAY
/*
int main()
{
	char a[]="array";
	char *p="pointer";
	a="can not assign to array";
	p="can assign to pointer";
	cout<<p;
}
*/

//750
//pointer to block of memory is effiectinely same as array

//800
//if we pass 1D int array to function it decay into POINTER (int) 
//pass 2D int array to function it decay into  POINTER TO ARRAY (int) and not POINTER TO POINTER 

//850
//char **pt,ch,*p[]   are not same

//900
/*
//use p to print 50
int main()
{ //
	char *p;
	p=(char *)a;
	cout<<*((int *)p+4);
		
}
*/

//950
//'\0' and 0 are not same .
//ASCII value of '\0'=0  ;ASCII value of 0= 48;

//1000
//char name[25];
//set aside 25 characters unde the array name[]
//scanf() fills the character typed at keyboard into the array until ENTER KEY  is hit; 
//we should pass the BASE ADDRESS of array to scanf() function

//1050
//#include<stdbool.h> header provided by c99
 //bool is builtin datatype in c++ i.e no header file required 
 
//string is type but not built in datatype

//1100
//= can be used in c to assign one string to other  and < ,>= ,<= , to compare   

//1150
//'\0' is printed as blank by the printf statment
	//int main()
//	{
//	cout<<'\0';
//	}

//1200
//lvalue required error is encouter when incrementing the base address of ARRAY or POINTER ARRAY  
//not encounter when pointer is not declared as ARRAY it can point to other address ............ I HOPE NEXT TIME YOU READ THIS YOU CAN UNDERSTAND IT 

//1250
//In character array (string) //  strlen(array)-1  gives last index of array

//1350
/*
int main()
{
	//cout<<2["pawanchoure"]; //%c specifier in printf
	//printf("%d",1["pawanchoure"]);  	//gives ASCII value of a(char) as format specifier used is %d
	//printf("%c",1["pawanchoure"]); 		//a gives single char
	printf("%s",5["pawanchoure"]);       //DOUBT								//DOUBT 						//DOUBT
}
*/

//1400
//char *p="samuel";	//point to string constant		//pointer canbe  modify to point to another string ,but cannot modify the string at which p is  pointing  

//char a[]="samuel";	//individual char(element) within  array can be changed  but not address

//1450
//string processed only on character by character 

//1500
//we cannot declare cout statment inside the structure  //only type statment are declared
//we can not intialised or assign  any value to data members of struct

//1550
//int *ptr[20]   or  int *(ptr[20])		ptr is array of 20 pointer 

//int (*ptr)[20]		ptr is pointer to array of 20 integer

//1600
/*
int main()		//variable name 
{
//int @i=10;	    //[Error] stray '@' in program
//int #i=10;		//[Error] stray '#' in program

//int !i=10;	//[Error] expected unqualified-id before '!' token
//int %i=10;	//[Error] expected unqualified-id before '%' token
//int ^i=10;    //[Error] expected unqualified-id before '%' token
//int ?i=10;		//[Error] expected unqualified-id before '?' token
//int -i=10;       //[Error] expected unqualified-id before '-' token
//int +i=10;		//[Error] expected unqualified-id before '+' token
int =i=10;					//[Error] expected unqualified-id before '=' token


//int &i=10;		//	[Error] invalid initialization of non-const reference of type 'int&' from an rvalue of type 'int'
//int *i=10;	[Error] invalid conversion from 'int' to 'int*' [-fpermissive]

//int  ~i=10;	//[Error] expected class-name before '=' token


int $i=10;		//$ correct variable name
int _i=10; // _ is correct variable name  
}
*/

//1650
/*
int main()
{
	enum hello{a,b,c=20.1,d};	//[Error] enumerator value for 'c' is not an integer constant   //not integeral constant not allow in enum
	cout<<d;																					//floating point not allowed  in enum
}//next value is incremented by one
*/ 
 
//1700
//= operatar can be used in place of strcpy in c++
//< <= >  >= can be used in place of strcmp in c++

//1750
//#define is known as manifest const in c 
//in c++ direct use the 2,3 or any word then compiler doesnot recognised it as variable
//therfore const comes under c++ i.e, cannot modify value
//#define two 2  (global )
//const int two=2;  (have defined scope)
//const use for two purpose   1.natural constant  2.program constant
//cannot see #define in debugger 

//1800
/*
int main()
{
	const int a=5;
	int *p=0;
	*p=2;
	p=&a;	//  error  //const can be used for any datatype e.x, struct 
}
*/
//pointer to constant data    :  pointee (pointed data) can not be change 
//constant pointer    :  pointer (address) cannot be change
  
//pointer change : when pointer is made to point to differrent vare
//pointee change : when data to which pointer point is change

//pointer const : when pointer is made to point to const/same vare      int* const p=&n;  (const of address )  
//pointee const : when data to which pointer point is const				const int* p=&n;	(const of data )


//1850
//int* add(int,int);
//return pointer but function is not pointer
 
//int (*add)(int,int);
//return integer but function is pointer 


//1900
//c-v qualifier 
//constant-volatile 
//const volatile int a=4;

//1950
//as we knoe that #define preprocessar(type checking for parameter is not done)(not available in debugger) statment are written in single line ..
//in c++ the new function inline(type checking for parameter is done ) (available in debugger )was introduce 
//as there was a pitfall in #define preprocessar ..........
//but both reduses the memory and reduce the size 

//i.e, to swap no./vare. where datatype is not known we should use #define 
//debug build(check inside what is happening) inline is not done 
//release build(check the efficiency ) inline is done

//inlining is called directive.......

//2000
//pinter and refrence both are address 
//refrence is just alias of variable(alternate name ) ...

//pointer can point to null  int* p=NULL; 
//refrence cannot be null   int& j;  //error

//pointer can point to differnt vare
//for refrence it is fixed 

//pointer NULL checking is required 			//user operate on address ,pointer .address 
//refrence NULL checking is required 			//not allow user to operate on address 

//2050
//string = sequence of character
//splicing in string
/*
int main(){
	printf("%s","you have to dream come true \
			----- a.p.j kalam ");		//add space  after the \ 
	printf("%s","you have to dream before dream come true"	//do not add the space 
			"------a.pj. abdul kalam");  	}
*/

//2100
//functon overloading binding occur at compile time //binding means which particular function will  get called 	as they have same function name		
			
			
