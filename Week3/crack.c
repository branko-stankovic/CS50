#include <stdio.h>
#include <cs50.h>
#define _XOPEN_SOURCE
#include <unistd.h>

int main(int argc, string argv[])
{
    for (char i = 'A'; i <= 'z'; i++) 
    {
        printf("%c\n", counter);
        
        for (char j = 'A'; j <= 'z'; j++)
        {
            printf("%s\n", i+j);
        }
    }
    printf("%i %s", argc, argv[1]);
}