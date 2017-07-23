#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("s: ");
    string s = get_string();
    
    printf("t: ");
    string t = get_string();
    
    if (s == t) 
    {
        printf("They are equal!\n");
    }
    else
    {
        // Because strings get passed by reference 
        // and not by value!
        printf("Unequal!\n");
    }
}