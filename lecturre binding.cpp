#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;

typedef enum E_TYPE{
	er , mgr} E_TYPE;


typedef struct engineer {
	char *name;
}engineer;

engineer *initgraph(const char *name)
{
	engineer *s=(engineer*)malloc(sizeof(engineer)
	);
	e->name=strdup(name);
}

int processsalaryengineer(engineer *s)
{
	printf("%s",e->name);
}

typedef struct manager{
	char *name;
	engineer *report[10];
}manager;

manager *initmanager(const char *name)
{
	manager *s=(manager*)malloc(sizeof(manager));
	m->name=strdup(name);
	return m;
}

int processsalarymanager(manager *s)
{
printf("%s",m->name);	
}

typedef struct staff{
	e_type type;
	union {engineer *pe ,manager *pm};
}staff;


int main()
{
	staff allstaff[10];
	allstaff[0].type=er;
	allstaff[0].pe=initgraph("rohit");
	allstaff[1].type=mgr;
	allstaff[1].pm=initmanager("kamla");
	allstaff[2].type=mgr;
	allstaff[2].pm=initgraph("rajib");
	allstaff[3].type=er;
	allstaff[3].pe=inintgraph("kavita");
	allstaff[4].type=er;
	allstaff[4].pe=initgraph("shambhu");
	
	for(int i=0;i<6;++i)
	{
		etype=allstaff[i].type;
		if(t==er)
		processsalaryengineer(allstaff[i].pe)
		else if
		processsalarymanager(allstaff[i].pm)
		else
		cout<<"invalid staff";
	}
}






