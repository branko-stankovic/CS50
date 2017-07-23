#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    printf("s is: ");
    // equivalent with string s = get string
    char *s = get_string();
    // char *s is the memory location of the first
    // character from a string
    
    printf("t is: ");
    char *t = get_string();
    
    if (s != NULL && t != NULL)
    {
        // strcmp iterates over string to check are they the same
        if (strcmp(s, t) == 0)
        {
            printf("they are the same\n");
        }
        else
        {
            printf("they are not same\n");
        }
    }
}