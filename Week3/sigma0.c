#include <stdio.h>
#include <cs50.h>

int sigma(int m);

int main(void)
{
    int n;
    do
    {
        printf("Enter positive integer: ");
        n = get_int();
    }
    while (n<1);
    
    int answer = sigma(n);
    printf("%i\n", answer);
}

int sigma(int m)
{
    int sum = 0;
    
    for (int i = 0; i <= m; i++) 
    {
        sum += i;
    }
    
    return sum;
}