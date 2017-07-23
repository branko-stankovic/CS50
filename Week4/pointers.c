#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    printf("s is: ");
    char *s = get_string();
    
    if (s == NULL) 
    {
        return 1;
    }
    
    for (int i = 0, n = strlen(s); i < n; i++) 
    {
        // instead of s[i]
        printf("%c\n", *(s+i));
    }
}