#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    // gets user name
    string name = get_string();
    
    // iterates over each letter
    for (int i = 0, n = strlen(name); i < n; i++) 
    {
        // if its first letter or comes after a space
        if ((i == 0) || (name[i-1] == 32)) 
        {
            // prints uppercase version of it
            printf("%c", toupper(name[i]));
        }
    }
    printf("\n");
}