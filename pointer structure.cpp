#include<stdio.h>
struct point 
{
	int x;
	int y;
};

struct rect 
{
	struct point left;
	struuct point right;
};

int area(struct rect r)		//struct rect *pr 
{
	return(r.righttop.x-r.left.x)*(r.right.y-r.left.y);		//replace r by *pr
}
int main()
{
	
	struct r={{0,0},{1,1}};
	area(r);	//area(&r)
	return 0;
}

//pass oe returun structure is not posible .......
