#include<iostream>
#include<cstdio>  
#include<cstdlib> //system()
#include<string>


using namespace std;	//namespace : identical name but in different namespace i.e, no collision   //if not use namespaceoutput statment is std::cout
						//using : declartion and defination  
						//std : standard
int  main()			//main always return int 
{   printf("%d \n %d",sizeof(null),"");    // 2  1    null=0(int )     "" contain '\0' of 1 byte

	int i=7;
	printf("%f",i);     //0.0000000	LOL  and not 7.0000000

 //escape sequence

/*	cout<<"hello"<<"1\a"<<endl;		//alaram voice
	cout<<"hello geeks how are you\b\b\b\b\b\b\b\b"<<endl;	//backspace   cursor back with deleting or without deleting
	// \n new line
	cout<<"hello\tworld"<<endl;				//horizantal tab
	cout<<"love\vyou"<<"\vhandsome"<<endl;		//vertical tab
	cout<<"my name  is pawan \r choure"<<endl;		//carriage return     	MY FAVOURIATE
	cout<<"self\\passionate"<<"self\\respect"<<endl;					//backslash  \\\ gives warning
	cout<<"\'hello friends"<<endl;					//single quote
	cout<<"\"hey friends"<<endl;			//double quote
	cout<<"chaai piloo\?\?"<<endl;			//question mark presentation of trigraph
	char *o="A\0725";				//there must be one octal(0-7) digit after \ and  maximum 3	
	cout<<o<<endl;			//  \000 octal number		\072 replace by :  
	char *h="b\x4a" ;					//one or more hexadecimal (0-9,a-f,A-F)
	cout<<h<<endl;					//  \xhh hexadecimal no.  \x4a written as J
	
*/
	
/*	//no. in decimal, octal,hexadecimal
	cout<<"no. in decimal"<<dec<<15<<endl<<"in octal"<<oct<<15<<endl<<"in hexadecimal"<<hex<<15<<endl<<"non printing char (ESCAPE) "<<char(27)<<endl<<"print ASCII value i.is, A"<<char(65)<<endl ;
	cout<<"haa\n"		
	     "enjoy programming\n"
	     "this is called character array concatentation\n";
	//user no. in dec, hex,oct
	int num;
	cout<<"enter num."; cin>>num;     
	cout<<"in octal"<<oct<<num<<endl<<"in hex"<<hex<<num<<endl;   
	  
	//calling other programm	
	system("bool")  ;    //calls addhead programe and it print the output of bool.cpp file      MY FAVOURIE
*/
//string
    string s1,s2,s3,s4;  //empty string
	s3="hello world";
	s4=("ji sir");
	s1=s3+" " + s4; cout<<s1<<endl; //combining
	s1+="  concateation"; cout<<s1<<endl;
	cout<<s1+s2;  //s2 is empty string
	
	
    return 0;
	
}
