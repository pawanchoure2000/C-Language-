#include<iostream>
using namespace std;

//in c
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

typedef  struct { 
int data[10][10]; 
}mat;

typedef struct{
int data[1][10];
}vecrow;

typedef struct {
int data[10][1];
}veccol;


int multiply( mat& a,const mat& b,mat& c)
{
};
int  multiply(const mat& a,const veccol& b,veccol& c)
{
};
int  multiply(const vecrow& a,const mat& b,vecrow& c)
{
};
int  multiply(const veccol& a,const vecrow& b,mat& c)
{
};
int  multiply(const vecrow& a,const veccol& b,int& c)
{
};

int main()
{
	mat m1,m2,rm;
	vecrow rv,rrv;
	veccol cv,rcv;
	int r;
	multiply(m1,m2,rm);
	multiply(m1,cv,rcv);
	multiply(rv,m2,rrv);
	multiply(cv,rv,rm);
	multiply(rv,cv,r);
}


