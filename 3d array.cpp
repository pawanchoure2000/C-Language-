#include<iostream>
using namespace std;
int main()
{
	int a[3][4][2]={         
		             { {2,4},
		               {7,8},    
		               {3,4},        //0 2d array         1 2d array        2 2d array
					   {5,6} },      //2 4 7 8 3 4  5 6 _ 7  6 3 4 5 3 2 3 _8  9 7 2 3 4 5 1
					                //401                417 		    	433
					 { {7,6},
					   {3,4},
					   {5,3},
					   {2,3} },
					   
					 { {8,9},
					   {7,2},
					    {3,4},
						{5,1} } //refer 1:  [2] array in 3rd 2D array ; [3] array in fourth row ;[2] array in second coloum
						       };
						       
						       
				//	          ARRAY  <----    a    <-----    *a    <-----     **a       <-----  ***a     
			//address	 	 a[n][r]c[]       a[0][][]       a[0][0][]       a[0][0][0]         
				
	cout<<"address of 0th 2D array \n"<<a<<"\nand value is +";   //address of  0 2D
	cout<<"address of 0th 1D array\n 	"<<*a<<"\n and value is+";   
	cout<<"address of 0th element  "<<**a<<"\n and value is+ \n";
	cout<<***a;
	
	cout<<a+1;     //address of 1st 2D array 					       
	cout<<*a+1;  //address of 0th  1D {7,6} 
	cout<<**a+1;  //address of 0th element i.e 7            
	cout<<***a+1;  //value  i.e 7
//*(*(*(arr + i ) + j ) + k) is equivalent to the subscript expression arr[i][j][k].							      
/*  

		*()           point to 0th element
				    	i.e  BASE ADDRESS


		arr 				point to 0th 2D array
		
		arr+i 				point to ith 2D array	
								      
		*(arr+i)       		 BASE ADDRESS of ith 2D array					      
							point to 0th element of ith 2D array
							point to 0th 1D array of ith 2D array [element of 2D array is 1D array]	 
							     
		*(arr+i)+j     		 point to jth 1D array of ith 2D array		
					      
		*(*(arr+i)+j) or arr[i][j].	base address of jth 1D array of ith  2D array
							point to 0th element of jth 1D array of ith 2D array	
							
		*(*(arr+i)+j)+k		valuue of jth element of ith 1D array			      
							      
		 *(*(*(arr + i) + j) +k))	  valur of kth element of jth 1D array of Ith 2D  array				      
							      
*/							      
							      
							      
							      
							      
							      
							      
}
