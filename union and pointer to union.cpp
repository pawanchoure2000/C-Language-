//union is a user defined data type. In union, all members share the same memory location.
//memory that is used to store variables of different data types
//simply the mathematical union of its constituting typesmap //smaller data elements to larger ones for easier manipulation
//by default public
//Structure and union specifiers have the same form. [ . . . ]
//in c++ union data members do not need to be referenced
// structure, all of its data members are stored in contiguous memory locations.
/*
typedef enum { STR, INT } tType;
typedef struct {
    tType typ;          // typ is separate.
    union {
        int ival;       // ival and sval occupy same memory.
        char *sval;
    };
} tVal;
*/
//
#include <stdio.h> 

// Declaration of union is same as structures 
union test { 
	int x, y;		// 
}; 

int main() 
{ 
	// A union variable t 
	union test t; 

	t.x = 2; // t.y also gets value 2 
	printf("After making x = 2:\n x = %d, y = %d\n\n", t.x, t.y); 

	t.y = 10; // t.x is also updated to 10 
	printf("After making y = 10:\n x = %d, y = %d\n\n", t.x, t.y); 
	return 0; 
	
	printf("size of union \n");
	printf("%d ",sizeof(t));
	
	union test *ptr=&t;
	printf("%d %d  \n ",ptr->x,ptr->y);
	printf("%d %d  \n ",(*ptr).x,(*ptr).y);
		
	
} 










