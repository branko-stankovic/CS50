/*AUTHOR: Branko Stankovic
contact: branko.stankovic@gmail.com
webpage: http://meanwebdeveloper.wordpress.com
DATE CREATED: January 6th 2017
*/
#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
    for (int i=0; i<argc; i++) 
    {
        for (int j=0; j<strlen(argv[i]); j++) 
        {
            printf("%c\n", argv[i][j]);
        }        
    }
}