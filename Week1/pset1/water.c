/* 
AUTHOR: Branko Stankovic
contact: branko.stankovic@gmail.com
webpage: http://meanwebdeveloper.wordpress.com
DATE CREATED: December 22nd 2016.
*/
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // taking user input in minutes
    printf("How long did you shower in minutes?\n");
    int shower = GetInt();
    
    //prints the output in bottles
    printf("Wasted bottles: %i\n", shower*192/16);
}
