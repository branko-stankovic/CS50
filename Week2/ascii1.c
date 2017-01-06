/*AUTHOR: Branko Stankovic
contact: branko.stankovic@gmail.com
webpage: http://meanwebdeveloper.wordpress.com
DATE CREATED: January 6th 2017
*/
#include <stdio.h>

int main(void)
{
    for (char x='A'; x<='Z'; x++) 
    {
        printf("%c is %i\n", x, (int)x);
    }
}