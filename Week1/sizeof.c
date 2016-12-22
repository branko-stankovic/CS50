#include <stdio.h>

int main(void) 
{
    char c;
    double d;
    float f;
    int i;
    
    printf("char: %ld\n", sizeof(c));
    printf("float: %ld\n", sizeof(f));
    printf("int: %ld\n", sizeof(i));
    printf("double: %ld\n", sizeof(d));
}
