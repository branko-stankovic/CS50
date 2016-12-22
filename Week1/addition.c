/*
*AUTHOR: Branko Stankovic
*CONTACT: branko.stankovic@gmail.com
*DATE CREATED: 21. December 2016.
*/
#include <stdio.h>
#include <cs50.h>

int main(void) {
    printf("Give me your first number: \n");
    int x = GetInt();
    printf("Give me your second number: \n");
    int y = GetInt();
    
    printf("The sum of your numbers is: %d\n", x+y);
}
