// struct   user-defined data type combining data items of different kinds.
 //union    special data typestoring different data types in the same memory location.
 //Similarities between Structure and Union
 /*
 Both are user-defined data types store data of different types
 members can be objects of any type
 both structures and unions support only assignment = and sizeof operator
 both can be passed by value to functions and returned by value by functions. 
 dot operator is used for accessing members.
 */
 //Differences
 /*
 struct keyword is used 		; 			union keyword is used  
 size is greater or equal to size of it's member   			;		 size is equal to largest member 
 altering value do not affect the other member 				;		altering value affect the other member 			/IMPORTANT 
 indivisal element can be access 					;  		only one element can be access 						/IMPORTANT 
 sevral member can be intialise					; 	only one element can be intialise 							//IMPORTANT 
 */
 
// C program to illustrate differences 
// between structure and Union 
#include <stdio.h> 
#include <string.h> 

// declaring structure 
struct struct_example 
{ 
	int integer; 
	float decimal; 
	char name[20]; 
}; 

// declaraing union 

union union_example 
{ 
	int integer; 
	float decimal; 
	char name[20]; 
}; 

int main() 
{ 
	// creating variable for structure 
	// and initializing values difference 
	// six 
	struct struct_example s={18,38,"geeksforgeeks"}; 

	// creating variable for union 
	// and initializing values 
//	 union union_example u={18,38,"geeksforgeeks"};  //error too many intialiser 
	union union_example u={18}; 

		
	printf("structure data:\n integer: %d\n"
				"decimal: %.2f\n name: %s\n", 
				s.integer, s.decimal, s.name); 
	printf("\nunion data:\n integeer: %d\n"
				"decimal: %.2f\n name: %s\n", 
				u.integer, u.decimal, u.name); 


	// difference two and three 
	printf("\nsizeof structure : %d\n", sizeof(s)); 
	printf("sizeof union : %d\n", sizeof(u)); 
	
	// difference five 
	printf("\n Accessing all members at a time:"); 
	s.integer = 183; 
	s.decimal = 90; 
	strcpy(s.name, "geeksforgeeks"); 
	
	printf("structure data:\n integer: %d\n "
				"decimal: %.2f\n name: %s\n", 
			s.integer, s.decimal, s.name); 
	
	u.integer = 183; 
	u.decimal = 90; 
	strcpy(u.name, "geeksforgeeks"); 
	
	printf("\nunion data:\n integeer: %d\n "
				"decimal: %.2f\n name: %s\n", 
			u.integer, u.decimal, u.name); 
	
	printf("\n Accessing one member at time:"); 
	
	printf("\nstructure data:"); 
	s.integer = 240; 
	printf("\ninteger: %d", s.integer); 
	
	s.decimal = 120; 
	printf("\ndecimal: %f", s.decimal); 
	
	strcpy(s.name, "C programming"); 
	printf("\nname: %s\n", s.name); 
	
	printf("\n union data:"); 
	u.integer = 240; 
	printf("\ninteger: %d", u.integer); 
	
	u.decimal = 120; 
	printf("\ndecimal: %f", u.decimal); 
	
	strcpy(u.name, "C programming"); 
	printf("\nname: %s\n", u.name); 
	
	//difference four 
	printf("\nAltering a member value:\n"); 
	s.integer = 1218; 
	printf("structure data:\n integer: %d\n "
				" decimal: %.2f\n name: %s\n", 
				s.integer, s.decimal, s.name); 
	
	u.integer = 1218; 
	printf("union data:\n integer: %d\n"
		" decimal: %.2f\n name: %s\n", 
			u.integer, u.decimal, u.name); 
} 

