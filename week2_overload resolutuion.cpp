//resolve overloaded function with one parameter
//1   identify set of candidate function		//SAME FUNCTION NAME
//2   among candidate function , identify viable function			//NUMBER OF PARAMETERS
//3   select best viable name(order is important)  exactmatch , promotion , stansdrad type conversion , user defined conversion ..		//MATCH THE TYPE OF ACTUAL AND FORMAL PARAMETER

 //different cases of exact match
 //lvalue(address) to rvalue(value) conversion , array to pointer conversion  , function to pointer conversion , quallification conversion 
 
 #include<iostream>
 using namespace std ;
 
 /*
 
 int f(int *a)
 {
 	//cout<<*a<<*(a+1)<<*(a+2); //garbage value as nothing is intiallised to array
 }
 
 //typedef int (*fp) (int);  //defination that my fp is functionpointer  
 int fp(int *a)
 {
 	cout<<*a; //a - address ,*a - blank space
 }
 
 int g()		//functiom defination of g()  if not included undefined refrence to g();
 {
 	return 42;
 }
  
 int main()
 {
 	int arr[10];
 	f(arr);			//1. example of array to pointer conversion
 	
 	int g();	//function declartion g() 
 	fp((int*)5);		//it must be address to which *a point to or type of int*
 	
 	f((int*)g);			//2 .functiom to pointer conversion as no need of address
 	f((int*)&g);		
 
 //qualification conversion converting pointer)(only) to const pointer	
 	
}
 */
 
 /*
 //when overload resoluton fails
 int fun(float f){		//except 1 parameter 
 }
 
 int fun(float x,float y=5){		//except 1,2 parameter 	
 }																//fun function have differnt number and different type of paramter i.e different signature 
//can also result in ambugnity for same type function signature  

	int f();			//except 0 para 
	int f(int a=0);		//except o,1 para 

 int main() 
 {
 	float p=4.5 ,t=10.5;
	int s=30;
	
	f();
	
	fun(t); 	//[Error] call of overloaded 'fun(float&)' is ambiguous 
	//can either call either of any function
 }
 */
 
 //default parameter as special case of function overloading  with added feature it contain default paramter 
 
 /*
 //int f(int a=1,int b=2);	//defalut para   
 
 //int f();					//..
 //int f(int);				//...
 //int f(int ,int );			//.... function overload
 
 double area(double a,double b){ return(a*b);
 }
 
  
 int main()
 {
 	int x=5,y=6;
	// f();
 	//f(x);
 	//f(x,y);
 	
 	//f();
 	//f(x);
 	//f(x,y);
 	
 	double ar=area(x,y);	//int to double donot loses information
 	cout<<"area  ="<<ar;
 }
 
 */
