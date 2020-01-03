
/*
#include<stdio.h>
typedef struct 
{
	int x,y;
}point;

typedef struct 
{
	point tl;
	point bl;
}rect;

int main()
{
	rect r {{0,2},{5,7}};
	// r.tl ={0,2}  //r.bl={5,7}
	//r.tl.x = 0   // r.tl.y = 2
	//r.bl.x = 5   //r.bl.y = 7  
	
	printf("%d %d %d %d ", r.tl.x ,r.tl.y ,r.bl.x ,r.bl.y );
		
}

*/


#include<iostream>
using namespace std;

class point 
{
	public :
		int x,y;
};

class rect
{
	public:
	point tl,br;
	
};

int main()
{
	rect r= {{0,2},{5,7}};
	cout<<r.tl.x<<r.tl.y<<r.br.x<<r.br.y;
}


