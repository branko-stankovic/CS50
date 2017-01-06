/*
*AUTHOR: Branko Stankovic
*CONTACT: branko.stankovic@gmail.com
*DATE CREATED: 21. December 2016.
*/
#include <stdio.h>
#include <cs50.h>

int main(void) 
{
    int n;
    do 
    {
    printf("Please enter a positive number: ");
    n = GetInt();
    }
    while (n<1);  
}
