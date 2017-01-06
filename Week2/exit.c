/*AUTHOR: Branko Stankovic
contact: branko.stankovic@gmail.com
webpage: http://meanwebdeveloper.wordpress.com
DATE CREATED: January 6th 2017
*/
#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    if (argc!=2) 
    {
        printf("missing command line arguments\n");
        return 1;
    }
    printf("Hello, %s\n", argv[1]);
    return 0;
}