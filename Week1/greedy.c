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
        cash = get_float();
    }
    while (cash < 0.00);
    
    // converting dollars to cents
    cash = (int)round(cash*100);
    
    // giving the change back in the most efficient way
    do
    {
        if (cash >= 25) 
        {
            cash -= 25;
            steps++;
        }
        else if (cash >= 10) 
        {
            cash -= 10;
            steps++;
        }
        else if (cash >= 5) 
        {
            cash -= 5;
            steps++;
        }
        else if (cash >= 1) 
        {
            cash -= 1;
            steps++;
        }
    }
    while (cash > 0);
    
    // says how many coins we used to give the change back
    printf("%d\n",steps);
    return 0;
}