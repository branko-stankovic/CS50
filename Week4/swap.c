#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;
    
    printf("x is: %i\n", x);
    printf("y is: %i\n", y);
    printf("Swapping...\n");
    
    // get address of x and y and pass those instead of the values
    swap(&x, &y);
    
    printf("Swapped!\n");
    printf("x is: %i\n", x);
    printf("y is: %i\n", y);    
}

void swap(int *a, int *b)
{
    // goto memory location of a and get its value
    int temp = *a;
    // goto memory location of b and put it in memo location of a
    *a = *b;
    // goto memory location of b and put value of temp there
    *b = temp;
}