/*
#include<iostream>
using namespace std;
class print
{
	int totpag;
	public:
		static int rempag;
		static int job;
		
		print(int np):totpag(np)
		{
			++job;
			cout<<"printing "<<np<<"pages ";
			rempag=rempag-np;
		}
		
		~print()
		{
			--job;
		}		
};

int print::rempag=500;
int print::job=0;

int main()
{
	cout<<"jobs "<<print::job<<endl;
	cout<<"pages ="<<print::rempag<<endl;
	
	print job(10);
	cout<<"jobs ="<<print::job<<endl;
	cout<<"pages ="<<print::rempag<<endl;
	
	{
		print job1(20), job2(40);
		cout<<"jobs ="<<print::job<<endl;
		cout<<"pages s ="<<print::rempag<<endl;
		print::job+=100;
	}
	cout<<"job1 ="<<print::job<<endl;
	cout<<"pages "<<print::rempag<<endl;
}

*/

#include<iostream>
using namespace std;
class print
{
	int totpag;
	static int rempag;
	static int job;
	public:
		print(int np):totpag(np)
		{
			++job;
			cout<<"printing "<<np<<"pages ";
			rempag=rempag-np;
		}
		
		~print()
		{
			--job;
		}
		
		static getjob(){
			return job;
		}		
		
		static checkpage(){
			return rempag;
		}	
		
		static loadpage(int np)
		{
			rempag+=np;
			}	
		
		
};

int print::rempag=500;
int print::job=0;

int main()
{
	cout<<"jobs "<<print::getjob()<<endl;
	cout<<"pages ="<<print::checkpage()<<endl;
	
	print job(10);
	cout<<"jobs ="<<print::getjob()<<endl;
	cout<<"pages ="<<print::checkpage()<<endl;
	
	{
		print job1(20), job2(40);
		cout<<"jobs ="<<print::getjob()<<endl;
		cout<<"pages s ="<<print::checkpage()<<endl;
		print::loadpage(100);
	}
	cout<<"job1 ="<<print::getjob()<<endl;
	cout<<"pages "<<print::checkpage()<<endl;
}


