/*
*AUTHOR: Branko Stankovic
*CONTACT: branko.stankovic@gmail.com
*DATE CREATED: 21. December 2016.
*/
#include <stdio.h>
#include <cs50.h>

int main(void) 
{
    printf("Please enter temperature in F: ");
    float f = GetFloat();
    
    float c = 5.0 / 9.0 * (f - 32.0);
    printf("Temperature in C is: %.1f\n", c);
}
