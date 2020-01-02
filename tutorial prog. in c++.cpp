#include<stdio.h>
struct geoobject
{
	enum { CIR =0,REC,TRG} gcode;
	
	union { struct cir{double x,y,r;} c;
	       struct rec{double x,y,w,h;} r;
	       struct trg{double x,y,b,h;} t;  };  //end of union
		
	
};//end of struct

typedef void(*drawfunc) (struct geoobject);

void drawcir(struct  geoobject go)
{
	printf("circle : %lf %lf %lf   \n ",go.c.x,go.c.y,go.c.r);
}
void drawrec(struct  geoobject go)
{
	
	printf("rectangle  :%lf %lf %lf %lf   \n ",go.r.x,go.r.y,go.r.w,go.r.h);
}
void drawtrg(struct  geoobject go)
{
	printf("traingle   :%lf %lf %lf %lf   \n ",go.t.x,go.t.y,go.t.b,go.t.h);
}

drawfunc drawarr[]={		//array of func ptr*
drawcir , drawrec , drawtrg    };

int main()
{
	struct geoobject go;
	
	go.gcode=CIR;
	go.c.x=2.3;
	go.c.y=3.6;
	go.c.r=1.2;
	drawarr[go.gcode](go);
	
	go.gcode=REC;
	go.r.x=4.5;
	go.r.y=1.0;
	go.r.w=4.2;
	go.r.h=3.0;
	drawarr[go.gcode](go);
	
	go.gcode=TRG;
	g0.t.x=3.1;
	go.t.y==2.8;
	go.t.b=4.4;
	g0.t.h=2.7;
	drawarr[go.gcode](go);
	
	return 0;

}

