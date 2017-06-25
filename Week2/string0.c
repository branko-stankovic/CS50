#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string word = get_string();
    
    if (word != NULL)
    {
        for (int i = 0; i < strlen(word); i++) 
        {
            printf("%c\n", word[i]);
        };
    }
}