#include<stdio.h>
 
int main()
{
   int n, i = 3, count, c;
 
   printf("Enter the number of prime numbers required\n");
   scanf("%d",&n); 											//n=2    //n=3
 
   if ( n >= 1 )
   {
      printf("First %d prime numbers are :\n",n);
      printf("2\n");
   }
 
   for ( count = 2 ; count <= n ;  )   // count=2       //n=2,3
   {
      for ( c = 2 ; c <= i - 1 ; c++ )  //c=2         //c=2
      {   printf("i  c  is %d %d",i,c );//3,2         //3,2_ 4,2_ 5,2  5,3   5,4 
         if ( i%c == 0 )			//false          
            break;
      }                                                //c=3 as c++ is encountered
      printf("%d  hi %d",c,i);  //3,3                 //3,3 ; 2,4 ;  5,5
      if ( c == i )
      {
         printf("%d\n", i);			//i=3             //i=3,5
         count++;				//count=3              //count=3,4
      }
      i++; 
	  printf("at end i %d",i); //i=4     //i=4,5,6
   }
 
   return 0;
}


