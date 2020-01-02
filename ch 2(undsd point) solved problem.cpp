#include<iostream>
using namespace std;

//problem 1
/*
{	int main()
	int a[]={10,20,30,40};  //it rembers about array once declared is  only the base address 
	int j;
	//int *k;
	for(j=0;j<5;j++)
	{
		cout<<a;
		a++;    //eror //c does not perform bound chcking on array // attempt to change the base address 
		
	}
}
*/
//problem 2
/*
{	int main()
	float a[]={13.24,1.5,1.5,5.4,3.5};
	float *j,*k;
	j=a;
	k=a+4;
	j=j*2;							//	[Error] invalid operands of types 'float*' and 'int' to binary 'operator*'			//only operation performed on pointer are addition and subtraction 
	k=k/2;						//	[Error] invalid operands of types 'float*' and 'int' to binary 'operator*'
	cout<<*j<<*k;
}
*/
//problem 3
/*
{	int main()
	int n[25];
	n[0] =100;
	n[24]=200;
	cout<<*n<<*(n+24)+*(n+0);  //*n=value at base address //*(n+24) give value of 24 place in array   //*(n+0) give value at o place in array 
}
*/
//problem 4
/*
{	int main()
	int b[]={10,20,30,40,50};
	int i,*k;
	k=&b[4]-4;				//&b[4] have address of 50			//here -4 means get the address of integer which is 4 integer to left 	  i.e 10
	for(i=0;i<=4;i++)
	{
		cout<<*k;
		k++; 		   //increment k such that it have address of next integer NOTE IT IS NOT THE BASE ADDRESS asin problem 1
	}
}
*/
//problem 5
/*
{	int main()
	char a[]="Visual c++";
	char *b="Visual c++";
	
	cout<<&a<<&b; //address 
	
	cout<<a<<sizeof(a)<<endl<<b<<sizeof(b)<<endl;      // 11 a=Visual c++     //8 b=Visual c++
	cout<<*a<<sizeof(*a)<<endl<<*b<<sizeof(*b);			//1 *a=V    //1 *b=V
	
	//a++;//*a++             ///vallue required 
	cout<<a<<endl;
	*b++;
	cout<<b;		//isual c++

}
*/
//problem 6
/*
{	int main()
	int arr[]={2,3,4,1,6};
	cout<<arr<<endl<<sizeof(arr); 		//name of array give base address   	 //5*4=20 

}
*/
//problem 	7  IMPORTANT
/*
{	int main()
	int arr[]={12,14,15,23,45};
	cout<<arr<<endl<<&arr;          // both give base address i.e same address
	cout<<(arr+1)<<endl<<(&arr+1);   //give address of next element i.e.14    *(arr+1)=14        			//address of next array of 5 integer which is same as *(&arr+1) THIS ARRAY DO NOT EXIST  
}
*/
//problem 8    IMPORTANT
/*
{	int main()
	int a[3][4]={
				 1,2,3,4,
				 4,3,2,1,
				 7,8,9,0 };
	cout<<a+1;		//address of  next element(i.e,2) of 1st 1D array
	cout<<&a+1<<endl;		//address of next 2D array  which DO NOT EXIST
}
*/
//problem 9
/*
{	int main()
	int a[3][4]={
					1,2,3,4,
					5,6,7,8,
					9,10,11,12	};
	cout<<*a<<"same as"<<a[0]<<" *a is same as a[0]"<<endl;   //address     //IMPORTANT 				
					
	cout<<a[0]+1<<endl;			// same as *(a+0)+1   same as *a+1     //a[0]+1 give address of next integer i.e,2
	cout<<*(a[0]+1)<<endl;			//gives value of above address 
	cout<<*(*(a+0)+1)<<endl;		//expanded version of above statment 					
}
*/
//problem 10
/*
fun (int **p)
{
	cout<<**p;
}

int main()
{
	int a[3][4]={
				 1,2,3,4,
				 4,3,2,8,
				 7,8,9,0 };          a[0][0]  <--  ptr   <--   p 
	int *ptr;
	ptr=&a[0][0];
	fun(&ptr);
}
*/
//problem 11
/*
int main()
{
	int a[2][3][4]= {
					{
			        1,2,3,4,
					5,6,7,8,
					9,1,1,2 },
					
				
					
	            	{
					2,1,4,7,
					6,7,8,9,
					0,0,0,0 }
				};					//end of array
	cout<<a<<*a<<**a<<***a;  //base address of 0th 2D array  //base address of 0th 1D array  //base address of 0th element  in 0-2d array;0-1D array   //value at 0-2D array;0-1D array 
	//a[0][0][0] is expanded as *(*(*(a+0)+0+)+0)   same as ***a
}
*/
//problem 12      ######ARRAY IS ACCESS AS POINTER IN ARRAY
/*
int main()
{
	int a[]={2,4,6,8,10};
	int i;
	for(i=0;i<=4;i++)
	{
		*(a+i)=a[i]+i[a];    //a[i] is same as i[a]  also a[i] is same as *(a+i)   //for 1D array a[i] give element value but for 2D array a[i] gives address of ith 1D array 
		cout<<*(i+a)<<"\t"<<a[i]<<endl;										//important  	my favourite   // because array is access as pointer 
	}
}
*/
//problem 13
/*
int f(int x,int *y)
{
	x=*(y)+=2;  //which is same as 	x=*y=*y+2;       *(y)+2 is evaluted first  and result is assigned to x    //i.e they should be equal but they are not 
}

int main()
{
	int a[5]={2,4,6,8,10};
	int i,b=5;
	for(i=0;i<5;i++)
	{
		f(a[i],&b);      //a[i] does not get changed since it is call by value 	//address of b is passed 
		cout<<a[i]<<"\t"<<b<<endl;
	}
}
*/
//problem 14
/*
int change(int *b)
{
	int i;
	for(i=0;i<=4;i++)   //executed only 5 times even though their are 6 elment in array
	{
		*b=*b+1;   //adding 1 to the first five element  of array therfore array element becomes {3,4,5,6,7}
		b++;
	}
}
int main()
{
	int a[6]={2,3,4,5,6,7};
	int i;
	
	change(a); 						// while calling change() we are passing base address of array  CALL BY ADDRESS
	for(i=5;i>=0;i--)
	cout<<a[i];      //print array in reverse order 	
}
*/
//problem 15
/*
int main()
{
	int arr[]={0,1,2,3,4};
	int &ptr;
	for(ptr=&arr[0];ptr<=&arr[4];ptr++)   //execute  5 times   //ptr have base address of array(BASE ADDRESS)          arr <-- ptr 
	cout<<*ptr;

*/
//problem 16
/*
int main()
{
	int arr[]={0,1,2,3,4};
	int i,*ptr;
	for(ptr=&arr[0],i=0;i<=4;i++)
	cout<<ptr[i];         //ptr[i] is nothing but *(ptr +i)    //(ptr+i) give  address of ith integer from  base address 
}
*/
//prpblem 17
/*
int main()
{
	int arr[5]={0,1,2,3,4};
	int i,*p;
	for(p=arr,i=0;p+i<=arr+4;p++,i++)	//+ high priority than <=        first iteration     //p+i give address of 0         and 				arr+4 give address of 4  
	cout<<*(p+i);														 //second iteration   //p=address of 1, i=1 ; p+i=address of 2          ar+4 address of 4
}
*/																		//third iteration // p=address of 2 ,i=2;p+i= address of 4             arr+4 address of 4
//problem 18
/*
int main()
{
	int arr[]={0,1,2,3,4};
	int *ptr;
	for(ptr =arr+4;ptr>=arr;ptr--)		//at first ,ptr=addresss of 4     address of 4 is bigger than address of 0   
	{									//                                address of 3 is biger than address of 0
	cout<<arr[ptr-arr];	
	cout<<ptr-arr ; //same as arr[ptr-arr]     //difference of address gives value   //DOUBT
	
   //cout<<arr[ptr];																//	[Error] invalid types 'int [5][int*]' for array subscript
    //cout<<*(ptr-arr);242															//[Error] invalid type argument of unary '*' (have 'long long int')
   }
}
*/
//problem 19
/*
int main()
{
	int arr[]={0,1,2,3,4};
	int i,*ptr;
	for(ptr=arr+4,i=0;i<=4;i++)    //ptr equal to address of 4
	cout<<ptr[-i];           //ptr[-i] is equal to *(ptr-i)
	
}
*/
//problem 20
/*
int main()
{								//bytes					4      8       12        16     20
	int arr[]={0,1,2,3,4};		//value			       	0      1		2		3		4
	int *ptr;					//address		    	600   604      608     612      616
	for(ptr=arr+4;ptr>=arr;ptr--)         
	cout<<arr[ptr-arr];        //iteration               //1. 616-600 =16  	2.612-600 =12    3.608-600=8    4.604-600=4    //consider one element forward
	cout<<sizeof(arr);   //20
}
*/
//problem 21
/*
int main()
{
	static int a[]={0,1,2,3,4};						//	a <-  p[]  <- ptr
  	static int *p[]={a,a+1,a+2,a+3,a+4};
	int **ptr=p;
	cout<<a<<"\t"<<*a<<endl;				//	0x472050 (address of a BASE ADDRESS)       0
	cout<<p<<"\t"<<*p<<"\t"<<**p<<endl		//0x472020        0x472050        0
		<<ptr<<"\t"<<*ptr<<"\t"<<**ptr<<endl;		//0x472020        0x472050        0
	
	cout<<**p+1;  //0+1=1

}
*/
//problem 22
/*
int main()															//	a[] <---  p[]   <--- ptr  
{
	static int a[]={0,1,2,3,4};					//				a[0]=0 	 a[1]=1		a[2]=2    	a[3]=3    	a[4]=4
									//	address				//	600		  604		608			612          616
	
	
 	static int *p[]={a,a+1,a+2,a+3,a+3,a+3};      //		p[0]=600     p[1]=604		p[2]=608 		p[3]=612 		p[4]=616
 									//address                 700			704           708             712              716
	
	int **ptr=p;							//				ptr=700
									//address                  800					
	
	
	
	
	ptr++;			//point to next intger pointer in array p[]     //&ptr++ means array of next 5 integer 					//ptr=700	-->(ptr++)		ptr=704
																	     								    	//address        800					 800
	cout<<"hi "<<**ptr;  //**ptr=1
	//cout<<("%d \t %d \t %d  \n",ptr-p,*ptr-a,**ptr);			//LOL BY MISTAKE 
	
	cout<<ptr-p<<"\t"<<*ptr-a<<"\t"<<**ptr<<endl;// 1(ptr++ is same as p+1 i.e, p+1-p =1)	 1(*ptr=a+1,a+1-a=1 )	      1(a+1 =1)	       				
																													
																													
																													
																												
	*ptr++; (*ptr)++		//same as ptr++ as it already pointing to second element																		    	 //ptr=704	-->(*ptr++)    ptr=708
	cout<<ptr-p<<"\t"<<*ptr-a<<"\t"<<**ptr<<endl;				//	2(p+2-p)	2(a+2-a)	2													//adress    800						800
	
	*++ptr;	//++ precedes ptr ;increment address and then obtain value																        	 //ptr=708    -->(*++ptr)      ptr=712	
	cout<<ptr-p<<"\t"<<*ptr-a<<"\t"<<**ptr<<endl;				//3(p+3-p)		3(a+3-a)	3										  //address       800				       800
	
	++*ptr;	//here * high priority *ptr=712																	//ptr=712  -->   ptr=712	p[3] change to 616											
	cout<<ptr-p<<"\t"<<*ptr-a<<"\t"<<**ptr<<endl;				//3((p+3-3)	  4(a+3-a)   	4	//address				800				800
	
}
*/
//problem 23
/*
int main()

{
	static int a[]={0,1,2,3,4};
	static int *p[]={a,a+1,a+2,a+3,a+3,a+3};//p is intialised such that it contain addresses elements of array a[] ;ARRAY OF POINTER; p[0]=a[0] ; p[1]=a[1] ;...... and so on
	int **ptr;
	
	ptr=p;//base address of p       //i.e point to base address of p
	
	**ptr++;// (*(*ptr))++        //i.e ptr point to base address of (p+1)  
	cout<<ptr-p<<"\t"<<*ptr-a<<"\t"<<**ptr<<endl;  //1(p+1-p)	1(a+1-a)	1()	
	
	*++*ptr;//*(++(*ptr))     //p[1]=608 	 //i.e ptr still point to base address of(p+1)	//p[1]0r (p+1) point to a[2] ; p[2] point to a[2]
	cout<<ptr-p<<"\t"<<*ptr-a<<"\t"<<**ptr<<endl;	//1(p+1-p)       2(a+2-a)       2()
			
	++**ptr;//++(*(*ptr))  //ptr still point to base address of(p+1)  //**p=2 is increment i.e 2+1=3
	cout<<ptr-p<<"\t"<<*ptr-a<<"\t"<<**ptr<<endl;//1       2       3		
}
*/
//problem 24 and 25
/*
int main()
{
	int n[3][3]={2,4,9,   
				 6,8,5,
				 3,5,1};
	cout<<n<<"\t"<<n[2]<<"\t"<<n[2][2]<<endl;		//n[[0]=n=base address(0th 1D array )  //n[1]=address of 1st 1D array  //n[2]=address of 2nd 1D array  //n[2][2]=value
	int *ptr;  //pointer has not been declared as array  //point  to base address 
	ptr=(int *)n;
	cout<<n[2]<<endl;
	cout<<ptr[2]<<endl;//*(ptr +2) address of 9
	cout<<*(ptr+2)<<endl;
}
*/
//problem 26
/*
int main()
{
	int n[3][3]={2,4,3,    //for 2D array using pointer need ** to access element 
	        	6,8,5,						using array need * to acess element
	         	3,5,1};
	int i,j;
	for(i=2;i>=0;i--)
	{
		for(j=2;j>=0;j--)
		cout<<n[i][j]<<"\t"<<*(*(n+i)+j)<<endl;		//*(n+i) is same as n[1];   //  *(n+i)=address 
    }         	
}
*/
//problem 27
/*
int main()
{
	static int a[3][3]={1,2,3,						a[][] <--   ptr   <---  **ptr1
						4,5,6,
						7,8,9
						};
	static int *ptr[3]={a[0],a[1],a[2]};
	int **ptr1=ptr;
	
	int i;
	
	
	cout<<endl;
	for(i=0;i<=2;i++)
	cout<<*ptr[i];		//147   //*(a+i) OR ptr[i]  give addrsess  //ptr[0] or*(a+0) address of 0th 1D aray  ....	.... and so on 
	
	cout<<endl;
	for(i=0;i<=2;i++)
	cout<<*a[i];		//147
	
	cout<<endl;
	for(i=0;i<=2;i++)
	{
	cout<<**ptr1;		//147	//1. point to address of a[0]   	2.point to address of a[1]  and so on .. 
	ptr1++;
	}
}
*/
//problem 28
/*
int main()
{
	int t[3][2][4]={   {2,4,3,6,
						1,6,7,9,},
	
	                 	{8,2,1,1,
						 2,3,7,3},
					 
						 {1,6,2,4,
						 0,7,9,5}		};
	cout<<t[2][1][3]<<endl<<*(*(*(t+2)+1)+3);  //2nd 2D array-1st row-3rd coloum
}
*/
//answer the following
//q.1
/*
int main()
{
	char arr[]="surprised";	//move three past 
	char *ptr="surprised";	//add three pointer 
	cout<<arr[3]<<ptr[3];  //pp
	
	char *p;
	p=malloc(100);		
	
	char *p1=malloc(100);	
}
*/
//q.2
/*
int main()															//	DOUBT
{
	static int a[3][3][3]={{1,2,3,
							 4,5,6,
							 7,8,9},
							 {2,4,6,
							 8,10,12,
							 14,16,18,},
						    {3,6,9,
						    12,15,18,
						    21,24,27} };
	static int *ptr[]={
						a[0][0],a[0][1],a[0][2],
						a[1][0],a[1][1],a[1][2],
						a[2][0],a[2][1],a[2][2]  };
	
	int *ptr1[]={a[0],a[1],a[2]};	//	[Error] cannot convert 'int (*)[3]' to 'int*' in initialization
	int **ptr2=ptr,i;
	
	cout<<endl;
	for(i=0;i<=8;i++)
	{cout<<*ptr2;
	ptr2++;
	}
	
	cout<<endl;
	for(i=0;i<=2;i++)
	cout<<*(ptr1[i]);
	
	cout<<endl;
	for(i=0;i<=8;i++)
	cout<<*ptr[i];												
}
*/

//que 3
/*

print(int *a,int *b,int *c,int *d,int *e)										//DOUBT
{
	//cout<<"in loop"<<*a<<endl<<*b<<endl<<*c<<endl<<*d<<endl<<*e;			//44434
}

int show(int *a,int *b)									
{
	cout<<*a<<*b;
}

int main()
{
	static int arr[]={1,2,3,4,5,6,7,8};			
	//cout<<"addres of arr\n"<<"of 1\n"<<arr<<"of2\n"<<arr+1<<"of 3\n "<<arr+2<<"of 4 \n"<<arr+3<<"of 5\n"<<arr+4<<"of 6 \n"<<arr+6<<"of 7\n"<<arr+6<<"of 8\n"<<arr+7;							
	int *ptr=arr+1;//address of 2
	//cout<<"hi"<<*ptr;    
	//print(++ptr,ptr--,ptr,ptr++,++ptr);  //33223
	//show(++ptr,++ptr);  //44
	//show(++ptr,ptr);	//33
	//show(ptr,++ptr);	//33
	//show(ptr,ptr);	//22
	show(ptr+2,ptr+3);		//45
}
*/
//q 4		//doubt

int main()
{
	static int a[]={0,1,2,3,4};
	static int *p[]={a,a+1,a+2,a+3,a+4,a+3};
	
	int **ptr;
	
	cout<<"hi"<<**ptr<<ptr-p<<*ptr-a;
}


























































































































