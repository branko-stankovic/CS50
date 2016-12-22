/*
*AUTHOR: Branko Stankovic
*CONTACT: branko.stankovic@gmail.com
*DATE CREATED: 21. December 2016.
*/
#include <stdio.h>
#include <cs50.h>

int main(void) 
{
    printf("What is your name?\n");
    string name = GetString();
    
    printf("Hey there %s!\n", name);
}
