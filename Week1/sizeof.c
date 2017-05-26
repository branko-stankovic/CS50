#include <stdio.h>
#include <cs50.h>

int main(void) 
{
    char c;
    double d;
    float f;
    int i;
    bool b;
    long long l;
    string s;
    
    printf("bool is %lu\n", sizeof(b));
    printf("char is %ld\n", sizeof(c));
    printf("float is %ld\n", sizeof(f));
    printf("int is %ld\n", sizeof(i));
    printf("double is %ld\n", sizeof(d));
    printf("long long is %lu\n", sizeof(l));
    printf("string is %lu\n", sizeof(s));
}