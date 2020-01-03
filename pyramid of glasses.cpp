#include<iostream>
using namespace std;
int main()
{
    int hei , tim ;
    cin>>hei>>tim;
    
    int glass=0 ,h=hei;
    while(hei>=1)
    {
        glass+=hei;
        --hei;
    }
    
    int arr[glass];
    memset(arr,0,glass*sizeof(arr[0]));
    
    
    return 0;
    
    
}
