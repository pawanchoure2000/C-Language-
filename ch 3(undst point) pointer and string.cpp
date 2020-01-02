#include<string.h>
#include<iostream>
using namespace std;
//problem 1
/*
int main()
{
	char s[]="pawan!";
	cout<<*(s+strlen(s));	//strlen(s)=6	s=base address  i.e, base address +6='\0'  i.e ASCII value is printed 0
}
*/
//problem 2
/*
int main()
{
	cout<<5+"pawanchoure";	//BASE ADDRESS +5 is passed to function i.e address of c in choure
}
*/
//problem 3
/*
int main()
{
	char ch[20];
	int i;
	for( i=0;i<19;i++)
	*(ch+i)=67;			//67 i.e, C is assigned to string from i=0 to i=18  and (i is intialised to 19 but llop is not executed )
	
	*(ch+i)='\0';   //at postion 19 '\0' is assign to mark end of string 
	cout<<ch;	//complete string is printed

}
*/
//problem 4
/*
int main()
{
	char str[]={48,48,48,48,48,48,48,48,48,48};		//48 is interpreted as ASCII value of character to store in string i.e 0
	char *s;
	int i;
	s=str;
	cout<<s<<"hi"; 		//0000000000
	cout<<*s;	//0
	for(i=0;i<=9;i++)
	{
		if(*s)		//here 0 represent ASCII 48 condition is true 
		cout<<*s;
		s++;
	}
}
*/
//problem 5
/*
int main()
{
	char str1[]="hello";
	char str2[]="hello";
	if(str1==str2)				//str1 and str2 represent two differnt array i.e BASE ADDRESS 
	cout<<"equal base address ";
	else
	cout<<"unequal base address ";
	
	if(*str1==*str2)
	cout<<"equal array";
	else
	cout<<"unequal array ";
}
*/
//problem 6
/*
int main()
{
	char str[10]={0,0,0,0,0,0,0,0,0,0};		//doubt		//passing int to char == (int get converted to ASCII char ) 
	
	char *s;
	int i;
	s=str;
	cout<<*s<<"hi";		//space			//ASCII 0
	for(i=0;i<=9;i++)
	{
		if(*s)				//ascii zero i,e loop does not execute
		cout<<*s;
		s++;
	}
}
*/
//problem 7
/*
int main()
{
	cout<<"pawanchoure"[5];		//give char at 5th index      *("pawanchoure"+5) 
}
*/

//problem 8
 /*
int main()
{
//	char str[5]="pawan";	//6 character string is passed     	[Error] initializer-string for array of chars is too long [-fpermissive]
//	cout<<str;
}
*/

//problem 9
/*
int main()
{
	char *str[]={"pawan","prakash","bhanu","aditya"};
	cout<<sizeof(str)<<"\t"<<sizeof(str[0]);					//sizeof gives number of bytes occupy by array	4*8     8(address of pawan)
}
*/

//problem 10
/*
int main()
{
	char s[]="c smart";
	int i;
	for(i=0;s[i];i++)		//for loop terimnate when s[i]='\0' i.e, ASCII value of '\0' is 0
	cout<<s[i]<<*(s+i)<<i[s]<<*(i+s)<<endl;
}
*/
//problem 11
/*
int main()
{
	char s[]="pawanchoure";		
	cout<<*(&s[2])<<endl;		//w			//same as s[2]
	cout<<s+5<<endl;			//choure
	cout<<s<<endl;				//pawanchoure
	cout<<*(s+2)<<endl;			//w
	cout<<s<<endl;				//pawanchoure
	printf("%u",s);			//BASE ADDRESS of string	
}
*/
//problem 12
/*
int main()
{
	char arr[]="pawanchoure";
	int i;
	cout<<*arr;
	arr++;				//arr BASE ADDRESS ,help compiler to track string arr[] ,if this is lost compiler cannot access string	[Error] initializer-string for array of chars is too long [-fpermissive]
	cout<<*arr;	
}
*/
//problem 13
/*
int main()
{
	char str[]="pawanchoure";
	char *s;
	s=&str[6]-6;	//&str[6]=(str+6)     i.e., &str[6]-6 =str  //s=address of zero element  
	cout<<*s;		//*s is pointer and point  to single element in string 
	
	while(*s)		
	cout<<*s++;		//pawanchoure		//now at last *s is pointing  to end of string 
	
	while(*s)
	cout<<s++;		//no output  if previous while loop is not executed  output  comes with incrementing the address to next one  	
}
*/
//problem 14
/*
int main()
{
	static char *s[]={"ice","green","cone","please"};//array of pointer 	//s point to "pawan" 
	static char **ptr[]={s+3,s+2,s+1,s};
	char ***p=ptr;		//it point to single character i,e. character pointer
	
	//cout<<*s<<"hi"<<s[0]<<"hi"<<endl;				//ice  //ice
	
	//cout<<**ptr<<"hi"<<*ptr[0]<<"hi"<<endl;			//please	//please
	
	//cout<<***p<<"hi"<<endl;				//p
	
	cout<<**++p<<endl;				//cone //p point to s+2 ; value at pointer p gives "cone"  ;ptr point to s+3 ;
	
	//cout<<**ptr<<"hi";			//please   //i.e, ptr point to s+3 i.e, please
	
	//cout<<*--*++p <<endl;		//*--*(++p)+3		//ice		//*(++p): p point to s+1;p point to ptr[2]  //--*(++p) : s+1-1 =s  //*(--*++p) =*s i.e value at address 0
	
	cout<<*--*++p+3<<endl;	//blank	//--*(++p):s //+ have high precedence than *//*(s+3) // s+3: address is increment by 3 i.e '\0'  ['i','c','e','\0'] //
	
	cout<<*(p[-2])+3<<endl;			//ase //*p[-2] same as *(*(p-2))	 //p point to  s+1 //*(*(s-1)): "please" //add 3 to please :"ase"
	
	cout<<p[-1][-1]+1<<endl;		//reen	//p point to s+1;ptr[2]  //*(p[-1]-1)+1 //*(*(p-1)-1)+1  
											//*(p-1):p point to s+2;ptr[1]  //*(s+2-1)+1 : *(s+1) + 1 :   //*(s+1): green //*(s+1)+1:add 1 to green 
											
}
*/

//problem 15
/*
int main()
{
	char str[]="for your eyes only";
	int i;
	char *p;
	for(p=str,i=0;p+i<=str+strlen(str);p++,i++) //str+strlen(str) =address of '\0';	p=base address ;//p+i= address of f , r ,y ,u ,<space> ,y ,s ,o ,l ,'\0'=<space>
	cout<<*(p+i);		//Fryu ysol<space>
}
*/

//problem 16 
/*
int main()
{
	char str[]="Malayalam";
	char *s;
	s=str+8;	//s=address of last element			//str=base address
	while(s>=str)	
	{
		cout<<*s;
		s--;
	}
}
*/
//problem 17
/*
int main()
{
	char a[]="Able was I ere I saw elba";  //r at postion 12
	int count=0;
	char *t,*s,*b;
	s=a;			//address of first element in array
	b=a+strlen(a)-1;	//address of last element in array 
	t=b;
	while(s!=t)	//loop terminate when address of s is equal to t
	{
		++count;
		cout<<*s;
		s++;
		cout<<*t;
		t--;
	}
	cout<<"\nloop terminate at length position"<<count;
}
*/
//problem  18
/*
int main()
{
	char s[]="C is a philosophy of life";
	char t[40];
	char *ss,*tt;
	ss=s;
	tt=t;
	cout<<*ss;	//C
	while(*ss)
	{
	*tt++=*ss++;	//assign one element to other 
	if(*ss=='\0')
	cout<<"\nend of string s[]\n";
	}
	*tt='\0';
	cout<<t;
}
*/
//problem 19
/*
int main()
{
	char s[]="lumps, bumps, swollen veins, new pains";	//38 characters
	int count;
	int size=sizeof(s);
	cout<<"size of s[]"<<size<<"which includes the \0 character \n";
	char t[40];		//empty string
	char *ss,*tt;
	tt=t;		
	ss=s;		//ss have base address of s[]
	while(*tt++=*ss++)  //string s[] is copied to t[]  first 'l' 'u' 'm' ..... which evalutes true condition(including commas)  but at '\0' the ASCII value is 0 which is false
	count++;
	cout<<t<<endl<<"loop is executed "<<count<<"times which is equal to the no, of character in array";
}
*/

//problem 20 & 21
/*
int main()
{
	char *mess[]={"some love one",								//char=2 byte  ;pointer=4 byte  i.e, char pointer =8 byte for 1 element 
					"some love two",
					"i love you",
					"that is you"
							};
	cout<<sizeof(mess)<<"\t"<<sizeof(mess[1]);		//32 (4 element * 8)   //8											
}
*/
//problem 22 no explantion needed
/*
int main()
{
	char names[3][20]; //3 rows  20 coloums 
	int i;
	for(int i=0;i<=2;i++)
	{
		cout<<"enter names";
		cin>>names[i];
		cout<<"you entered "<<names[i];
	}	
}
*/

//problem 23
/*
int main()
{
	char name[5][20]={
						"Roshni",
						"Manish",
						"Mona",
						"Baiju",
						"Ritu"};
	int i;
	char *t;
	t=name[3];
	cout<<name[3]<<"hi";
//	name[3]=name[4];		tring to change the base address stored in name[3]
	
//	name[4]=t;
	
	for(i=0;i<=4;i++)
	cout<<name[i];					
}
*/
//problem 24
/*
int main()
{
	char mess[6][30]={"Don't walk in front of me..",
	"I may not follow",
	"Don't walk behind me...",
	"i may not lead...",
	"Just walk beside me....",
	"And be my friend"};
	cout<<*(mess[2]+9)<<*(*(mess+2)+9);	//9th element of 2nd string 	
}
*/
//ANSWER THE FOLLOWING
//q1

/*
int main()
{
	char *str="united";			//'u','n','i','t','e','d'   <--- 	str1="united"
					
	cout<<&str<<endl;			//0x70fe18
	cout<<*str<<endl;			//u
	cout<<str<<endl;			//united
	
	cout<<&(*str)<<endl;		//united											//DOUBT
	cout<<*(&str)<<endl;		//united
	cout<<&*(&str)<<endl;			//0x70fe18
	
	cout<<*(str+1)<<endl;				//n
	cout<<&*(str+1);			//nited
	//cout<<&(*str+1);			//error lvalue required
}
*/
//	Q2
/*
int main()
{
	char *str1="united";    //correction: str1[]=15
	char *str2="front";
	char *str3;
	str3=strcat(str1,str2);				//what is present in memory  beyond "united" is not known and we are attaching front ...i.e OVERWRITTING  which is unsafe   
	cout<<str3;
}
*/

//Q3
/*
int main()
{
	char str1[]="india is beutiful";
	char str2[40];
	strcpy(str2,str1);						//user-defined function get called
	cout<<str2;
}
int strcpy(char *t,char *s)
{
	while(*s)
	{
		*t=*s;
		t++;
		s++;
	}
	*t='\0';
}
*/

//Q4
/*
int main()
{
	char str1[]="keep india beautiful";
	char str2[40];
	strcpy(str2,str1);
	cout<<str2;
}
int strcpy(char *t,char *s)
{
	while(*t++=*s++);				//is same as while(*t++=*s++)  { };	
}
*/

//Q5 return the no.of character in each string
/*
int main()
{
	char *str[]={"frogs","do","not","walk"};
	int i;
	
	for(i=0;i<=5;i++)
	cout<<strlen(str[i]);
}
*/

//Q6
int main()
{
	cout<<1["pawanchoure"];
}






































































































































































































































































