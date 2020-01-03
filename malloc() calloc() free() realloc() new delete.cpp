
#include <stdio.h> 
#include <stdlib.h>  //malloc() calloc() realloc()  free()

#include<iostream>		//new delete 
using namespace std;

/*
int main() 
{ 
																	
	// This pointer will hold the 								//returns a pointer of type void 
	// base address of the block created 						//	allocate a single large block of memory with the specified size   //default garbage value
	int *ptr; 
	int n, i, sum = 0; 

	// Get the number of elements for the array 

	printf("Enter number of elements: %d\n", n); 
	scanf("%d",&n);
	// Dynamically allocate memory using malloc() 
	ptr = (int*)malloc(n * sizeof(int)); 							//returns a pointer of type void // explict conversion of pointer (void to int ) //ptr = (cast-type*) malloc(byte-size)
 
	// Check if the memory has been successfully                   
	// allocated by malloc or not          
	if (ptr == NULL) { 
		printf("Memory not allocated.\n"); 
		exit(0); 
	} 
	else { 

		// Memory has been successfully allocated 
		printf("Memory successfully allocated using malloc.\n"); 
		
		unsigned char *p=(unsigned char*)ptr;
		printf("%x \n",*p++);    //%x hexadecimal 
		printf("%x \n",*p++);
		printf("%x \n",*p++);
		printf("%x \n",*p++);
		
		
		free(ptr);
		printf("memory deallocated \n");
		
		ptr=(int*)realloc(ptr,n*sizeof(int));        //use of ptr in realloc   MY FAVOURITE    
		printf("memory reallocated");
		
		// Get the elements of the array 
		for (i = 0; i < n; ++i) { 
			ptr[i] = i + 1; 
		} 

		// Print the elements of the array 
		printf("The elements of the array are: "); 
		for (i = 0; i < n; ++i) { 
			printf("%d, ", ptr[i]); 
		} 
	} 

	return 0; 
} 

*/


//									//“calloc” or “contiguous allocation”  dynamically allocate the specified number of blocks of memory of the specified type //  default zero
/*
#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 

	// This pointer will hold the 
	// base address of the block created 
	int* ptr; 
	int n, i, sum = 0; 

	// Get the number of elements for the array 
 
	printf("Enter number of elements: %d\n", n); 
	scanf("%d",&n);

	// Dynamically allocate memory using calloc() 
	ptr = (int*)calloc(n, sizeof(int));     				//ptr = (cast-type*)calloc(n, element-size);     USE COMMAA OPERATAR

	// Check if the memory has been successfully 
	// allocated by malloc or not 
	if (ptr == NULL) { 
		printf("Memory not allocated.\n"); 
		exit(0); 
	} 
	else { 

		// Memory has been successfully allocated 
		printf("Memory successfully allocated using calloc.\n"); 
		
		free(ptr);
		printf("memory deallocated \n");
		
		printf("enter array");
		// Get the elements of the array 
		for (i = 0; i < n; ++i) { 
			scanf("%d",&ptr[i]);
		} 

		// Print the elements of the array 
		printf("The elements of the array are: "); 
		for (i = 0; i < n; ++i) { 
			printf("%d, ", ptr[i]); 
		} 
	} 

	return 0; 
} 														//malloc and calloc do not dealloacate memory on thier own .... which is done by free   
*/
//   		free()		de-allocate the memory     //used, whenever the dynamic memory allocation takes place.    //reduce waste of memory 		//free(ptr);

//realloc()					dynamically re-allocate memory.
//ptr=realloc(n element,sizeof(int));



 //write opertar function for new and delete
 /*
 int main()
 {
 	int *p=(int*)operator new(sizeof(int));		//opertar new malloc allocate from heap 
 	*p=5;
 	cout<<*p;
 	operator delete(p);
 	
 }
 */

// new and delete keyword  for array to dynamicallyya allocate memory   
/*
int main()
{
	
	int *a= new int[3];
	a[0]=10,a[1]=20,a[2]=30;
	
	delete []a;
}
*/

//placment new in c++
//address are not coming from dynamic store but are coming from the buffer that we have provided  
int main()
{
	unsigned char buf[sizeof(int)*2];		//buffer  on stack 
	
	int *pint= new (buf) int (3);		int *qint=new (buf +sizeof(int)) int(5);		//placment new in buffer buf  	//do not have corrresponding delete 
	
	
	cout<<"pint hi  "<<pint<<"qint  hello"<<qint;
	
	int *pbuf=(int*) (buf +0) ;				int *qbuf=(int*)(buf + sizeof(int));
	
	cout<<"buffer address  pbuf="<<pbuf<<endl<<"pint="<<pint<<endl<<"qbuf="<<qbuf<<endl<<"qint="<<qint<<endl;
	
	cout<<"1st int "<<*pbuf<<"2nd int "<<*qbuf;
	
	int *rint=new int(7);	//heap alloaction 
	
	cout<<"heap address  3rd int "<<rint<<*rint ;
	
	cout<<"  rint="<<rint<<"  *rint="<<*rint ;

	delete rint ;		//delete integer from heap 
	
	
	
	delete pint;	
	//no delete for placment new 		
	
}




























