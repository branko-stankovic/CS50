/*AUTHOR: Branko Stankovic
*CONTACT: branko.stankovic@gmail.com
*DATE CREATED: December 23rd 2016
*/
#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void) 
{
    // initialazing variables
    int steps = 0;
    float cash;
    
    // asking for user input in dollars
    do
    {
        printf("How much cash is owed to the customer? ");
        cash = GetFloat();
    }
    while (cash<0.00);
    
    // converting dollars to cents
    cash = (int)round(cash*100);
    
    // giving the change back in the most efficient way
    do
    {
        if (cash>=25) 
        {
            cash=cash-25;
            steps=steps+1;
        }
        else if (cash>=10) 
        {
            cash=cash-10;
            steps=steps+1;
        }
        else if (cash>=5) 
        {
            cash=cash-5;
            steps=steps+1;
        }
        else if (cash>=1) 
        {
            cash=cash-1;
            steps=steps+1;
        }
    }
    while (cash>0);
    
    // says how many coins we used to give the change back
    printf("%d\n",steps);
    return 0;
}
