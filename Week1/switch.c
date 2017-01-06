/*
*AUTHOR: Branko Stankovic
*CONTACT: branko.stankovic@gmail.com
*DATE CREATED: 21. December 2016.
*/
#include <stdio.h>
#include <cs50.h>

int main(void) 
{
    printf("Please enter an integer between 1 and 10:");
    int x = GetInt();
    
    switch(x)
    {
        case 1:
        case 2:
        case 3:
            printf("You picked a small number!");
            break;
        case 4:
        case 5:
        case 6:
        case 7:
            printf("You picked a medium number!");
            break;
        case 8:
        case 9:
        case 10:
            printf("You picked a large number!");
            break;
        default:
            printf("Your argument is invalid, please try again!");
    }   
}
