#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = 1;
    
    for (int i = 0; i<33; i++)
    {
        printf("i is %i\n", n);
        n *= 2;
    }
}