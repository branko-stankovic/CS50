#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    printf("s is: ");
    char *s = get_string();
    
    if (s == NULL) 
    {
        return 1;
    }
    
    // allocate the memory for
    // length of the string + 1 place for "\0"
    // times the memory it takes for every single character
    char *t = malloc((strlen(s) + 1) * sizeof(char));
    
    // or if we know the length in advance
    // char *t = malloc(7);
    
    if (t == NULL)
    {
        return 1;
    }
    
    for (int i = 0, n = strlen(s); i <= n; i++) 
    {
        t[i] = s[i];
    }
    
    if (strlen(t) > 0) 
    {
        t[0] = toupper(t[0]);
    }
    
    printf("s is: %s\n", s);
    printf("t is: %s\n", t);
    
    free(t);
    
    return 0;
}