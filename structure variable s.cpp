#include<stdio.h>
#include<math.h>

struct point 
{
	int x,y;
};

struct point make_point(int x,int y)
{
	struct point temp;
	temp.x=x;
	temp.y=y;
	return temp;
};

double  norm(struct point p)
{
	return sqrt(p.x*p.x+p.y*p.y);
}

int main()
{
	int x,y;
	//struct point pt;
	//scanf("%d %d",&x,&y);
	
	struct point arr[4];
	for(int i=0;i<6;i++)
	{
		arr[i].x=i;
		arr[i].y=i;
	}
	
	arr[1]=make_point(x,y);
	printf("distance from point p is %f",norm(arr[1]));
		
}
