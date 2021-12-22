#include <stdio.h>

typedef char Int8;
typedef short Int16;
typedef int Int32;

typedef struct{
    Int32 c;
    Int16 b;
    Int8 a;
    
    
} MyStruct;

int main() {
    
    MyStruct a;

    printf("%lu\n", sizeof(a));

    return 0;
}