#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;
//Fill in the blank in the following program that draws a figure resembling the letter 'M' (lying on its side).  Remember that the turtle starts at the center of the canvas and facing right.

//forward(100); right(150); forward(50); left(120); forward(50); right(__); forward(100);
/*
int main()
{

repeat(3){
  repeat(3){
    cout << "b";
  }
  repeat(3){
    cout << "aa";
  }
}

}
*/

/*
#include <iostream> 
using namespace std;

void exchange(int x,int y) { // Line-1: Write the function header with 
                            // the variable x and y
    int t = x ^ y; // sum of x and y =15

    x = y;   //x=5

    y=t-x;  //x=10              // Line-2: Complete the swap
}
int main() {
    int a, b;

    cin >> a >> b;

    exchange(a, b);

    cout << a << ", " << b << endl;

    return 0;
}
*/	//swap no.




int  main()
{
  float fir,sec,thr,avg;
  
  scanf("%f %f ",&fir,&sec);
    
  
  while(fir!=-1&&sec!=1)
  {
  	scanf("%f",&thr);
  	if(thr!=-1)
  	{
  	avg=(fir+sec+thr)/3;
  	printf("%0.1f",avg);
  	fir=sec;
  	sec=thr;
	}
  }
  
  return 0;
}
  
  

