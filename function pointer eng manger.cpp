#include<iostream>
#include<cstring>
using namespace std;

typedef enum etype {
	er , mgr ,dir
}etype;

typedef void(*funptr)(void*);

typedef struct engineer{        //mention the relationship between type and object 
	char *name;
}engineer;

engineer *initengineer(const char *name_)
{
	engineer *e=(engineer*)malloc(sizeof(engineer));
	e->name_=strdup(name);
}

int psalaryeng(void *v)
{
	engineer *e=(enineer*)v;
	printf("%s ",e->name);
}

typedef struct manager{
	char *name;
	engineer *report[10];
}manager;

manager *initmanager(const char *name)
{
	manager *m=(manager*)malloc(sizeof(manager));
	m->name=strdup(name);
	return m;
}

int psalaryman(void *v)
{
	manager *m=(manager *)v;
	printf("%s ",m->name);
}

typedef struct director 
{
	char *name;
	manager *report[10];
}director;


director *initdirector(const char *name)
{
	director *d=(director*)malloc(sizeof(director));
	d->name=strdup(name);
	return d;
}

void psalarydir(void *v)
{
	director *d=(director*)v;
	printf("%s",d->name);
}

typedef struct staff
{
	etype type;
	void *p;
}staff;


int main()
{
	funptr parray[]={
						psalaryeng,
						psalaryman,
						psalarydir
	};
	
	staff staffobj[]={
							{er,initengineer("rohit")} ,
		                    {mgr,initengineer("kamala")},
		                    {mgr,initengineer("rajib")},
		                    {er,initengineer("kavita")},
		                    {er,initengineer("shambu")},
		                    {dir,initengineer(" ranahna")}
																					
                    };
               
               
               
    for(int i=0;i<sizeof(staff)/sizeof(staff);++i)
	parray[staff[i].type](staff[i].p);
	
	           

}//main
























