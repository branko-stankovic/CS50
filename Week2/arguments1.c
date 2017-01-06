/*AUTHOR: Branko Stankovic
contact: branko.stankovic@gmail.com
webpage: http://meanwebdeveloper.wordpress.com
DATE CREATED: January 6th 2017
*/
#include <stdio.h>
#include <cs50.h>

int main (int argc, string argv[]) 
{
    for (int i=0; i<argc; i++) 
    {
        printf("%s\n", argv[i]);
    }
}