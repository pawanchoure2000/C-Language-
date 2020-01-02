//union is a user defined data type. In union, all members share the same memory location.
//memory that is used to store variables of different data types
//simply the mathematical union of its constituting typesmap //smaller data elements to larger ones for easier manipulation
//by default public
//Structure and union specifiers have the same form. [ . . . ]
//in c++ union data members do not need to be referenced
// structure, all of its data members are stored in contiguous memory locations.
typedef enum { STR, INT } tType;
typedef struct {
    tType typ;          // typ is separate.
    union {
        int ival;       // ival and sval occupy same memory.
        char *sval;
    };
} tVal;

