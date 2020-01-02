#include<iostream>
using namespace std;

class mat; //forward declartion 

class vect
{
	int e[3],n;
	public:
		vect(int n_):n(n_)
		{
		  
		for(int i=0;i<n;i++)
		{
			e[i]=i+1;
		}
		
		}
		
		void clear()
		{
			for(int i=0;i<n;++i)
            e[i]=i;
		}
		
		void show()
		{
			for(int i=0;i<n;++i)
			cout<<e[i]<<" ";
			cout<<endl<<endl;
		}
		friend vect prod (mat *mp,vect *mv);				//function prod with returntype vect(class) is friend function for class  vect
};

class mat
{
	int e[3][3],m,n;
	public:
		mat(int m_,int n_):m(m_),n(n_)
		{
			for(int i=0;i<m;++i)
			for(int j=0;j<n;++j)
			e[i][j]=i+j;
		}
		
		void show()
		{
			for(int i=0;i<m;++i)
			{
			for(int j=0;j<n;++j)
			cout<<e[i][j]<<" ";
			}
			cout<<endl;
				
		}
		
friend vect prod(mat *pm,vect *pv);		//function prod with returntype vect(class)[vect prod,name of function] is friend function for class  mat 
};

vect prod(mat *pm,vect  *pv)		//prod is friend function  of both these classes			//return type class vect(userdefined type ) 
{
	vect v(pm->m);
	v.clear();
	for(int i=0;i<pm->m;++i)
	for(int j=0;j<pm->n;++j)
	v.e[i] +=pm->e[i][j] * pv->e[j];
	return v;
}
//vect prod (global function) is friend fuction of two class 
//it can also be as , like make prod friend function of vect and make vect::prod a friend function of mat   or   vice versa 
int main()
{
	mat  m(2,3);
	vect v(3);
	
	vect pv=prod(&m,&v);
	
	m.show();
	v.show();
	pv.show();
}

