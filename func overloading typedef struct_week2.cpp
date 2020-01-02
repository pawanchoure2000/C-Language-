#include<iostream>
using namespace std;

//in c
///function must have different name
/*
typedef  struct { 
int data[10][10]; 
}mat;

typedef struct{
int data[1][10];
}vecrow;

typedef struct {
int data[10][1];
}veccol;

int multiply_m_m(mat a,mat b,mat* c )
{
	//c=a*b;
}
int multiply_m_vc(mat a,veccol b,veccol* c )
{
	//c=a*b;
}
int multiply_vr_m(vecrow a,mat b,vecrow* c )
{
	//c=a*b;
}
int multiply_vc_vr(veccol a,vecrow b,mat* c )
{
	//c=a*b;
}
int  multiply_vr_vc(vecrow a,veccol b,int*c )
{
	//c=a*b;
}


int main()
{
	mat m1,m2,rm;
	vecrow rv,rrv;
	veccol cv,rcv;
	int r;
	multiply_m_m(m1,m2,&rm);
	multiply_m_vc(m1,cv,&rcv);
	multiply_vr_m(rv,m2,&rrv);
	multiply_vc_vr(cv,rv,&rm);
	multiply_vr_vc(rv,cv,&r);
}
*/

//in c++
//function overloding decided on the basis of signature(no. of parameter /type of parameter) of function 
/*
typedef  struct { 
int data[3][3]; 	int x,y,z;
}mat;

typedef struct{
int data[1][3];
}vecrow;

typedef struct {
int data[3][1];
}veccol;


int multiply( mat& a, mat& b,mat& c)		//canrun without  constant
{
	
	for(int i=0;i<3;++i)
	{
	for(int j=0;j<3;++j)
	cin>>a.data[i][j];} 
	
	for(int i=0;i<3;++i)
	{
	for(int j=0;i<3;++j)
	cin>>b.data[i][j]; }
	
	for(int i=0;i<3;++i)
	{
	for(int j=0;i<3;++j)
	c.data[i][j]=a.data[i][j] * b.data[i][j]; }
}
int  multiply(const mat& a,const veccol& b,veccol& c)
{
}
int  multiply(const vecrow& a,const mat& b,vecrow& c)
{
}
int  multiply(const veccol& a,const vecrow& b,mat& c)
{
}
int  multiply(const vecrow& a,const veccol& b,int& c)
{
}

int main()
{
	mat m1,m2,rm;		//[10][10]
	vecrow rv,rrv;		//[1][10]
	veccol cv,rcv;		//[10][1]
	int r;
	
	multiply(m1,m2,rm);		//matrix multiplication of m1 m2 is stored in rm
	multiply(m1,cv,rcv);
	multiply(rv,m2,rrv);
	multiply(cv,rv,rm);
	multiply(rv,cv,r);
}

*/

//what is function have same no. of parameter and same type of parameter 
int area(int a,int b){			//call by value ... but here we are not talking about changes in value of a nad b ....it is about computation
	return a*b;
}					//signature of func:int ,int   return type int 

double area(int a,int b){		//[Error] ambiguating new declaration of 'double area(int, int)'
	return a*b;
}					//new declartion of func:int ,int return type double

int main()
{
	int x=10,y=12;
	int a=area(x,y);
	cout<<"a="<<a<<endl;
	double b=area(x,y);
	cout<<"b="<<b<<endl;
}



































