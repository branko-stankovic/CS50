/*
*AUTHOR: Branko Stankovic
*CONTACT: branko.stankovic@gmail.com
*DATE CREATED: 21. December 2016.
*/
#include <stdio.h>
#include <cs50.h>

int main(void) 
{
    printf("Please enter a number: \n");
    int x = GetInt();
    
    if (x>0) 
    {
        printf("You picked a positive number!\n");
    }
    else if (x==0) 
    {
        printf("You picked zero!!\n");
    }
    else 
    {
        printf("You picked a negative number!!!\n");
    }

}
