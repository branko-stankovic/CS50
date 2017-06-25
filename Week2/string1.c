#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    // get input from user
    string word = get_string();
    
    // make sure user inputs a valid string
    if (word != NULL)
    {
        // iterate over every character from string
        for (int i = 0, length = strlen(word); i < length; i++) 
        {
            // printf every i'th character
            printf("%c\n", word[i]);
        };
    }
}