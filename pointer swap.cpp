#include <iostream>

using namespace std;
int swap(int,int);
int change(int ,int);

int main()
{
    int c=10,d=10;                 //adddress willl always be different as  c and d value have different scope   LOL
    cout<<"in main \n";
    cout<<"address of c\n  d \n "<<c<<"\n"<<d; 
    swap(c,d);
    cout<<"back in main\n";
    cout<<"after swap \n"<<c<<"\n"<<d;
}
int  swap(int c,int d)
{
    cout<<"in swap \n ";
    cout<<"address of c and d\n"<<&c<<"\n"<<&d;
    cout<<"before change\n "<<c<<"\n"<<d;
    change(c,d);
    cout<<"back in swap\n";
    cout<<"after change\n "<<c<<"\n"<<d;
    
}
 int change (int c,int d)
{
    int t;
    cout<<"in  change\n";
    cout<<"address of c and d\n"<<&c<<"\n"<<&d;
    cout<<"before interchange\n"<<c<<"\n"<<d;
    t=c;
    c=d;
    d=t;
    cout<<"after interchange\n"<<c<<"\n"<<d;
    
}

