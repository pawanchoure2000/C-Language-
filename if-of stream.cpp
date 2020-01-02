#include<string>
#include<fstream>   //automaticlly included		 
#include<iostream>,    //to avoid risk             //MY FAVOURITE
#include<vector>
using namespace std;
int main()
{
/*	//copy one file to other
	ifstream in("scopy.cpp");    //read data   cin 
	ofstream out("scopy2.cpp");   //write data    cout      not used yet
	string s;
	while(getline(in,s))                              //getline reads single line(until newline is encounter) at a time
	cout<<s<<"\n";		//print to console

	//read file into siingle string
	ifstream in("scopy.cpp")	;
	string s1,line;               //s1 and line are empty string
	while(getline(in,line))          //line store the data
	s1+=line+"\n" ;			//we can put {} for fun                    don't worry for size of string
	cout<<s1;
*/

	//copy file to vector of string
	vector<string> v;      
	ifstream in("scopy.cpp");
	string line;
	while(getline(in,line))
	v.push_back(line);  
	cout<<"size of vector string"<<v.size()<<endl;       
	for(int i=0;i<v.size();i++)     //
	cout<<i<<":"<<v[i]<<endl;
	 
	
}
