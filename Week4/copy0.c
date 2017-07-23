#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    printf("s is: ");
    string s = get_string();
    
    if (s == NULL)
    {
        return 1;
    }
    
    string t = s;
    
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }
    
    printf("s is: %s\n", s);
    printf("t is: %s\n", t);
}