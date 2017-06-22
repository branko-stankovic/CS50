#include <stdio.h>
#include <cs50.h>

int main(void) 
{
    int height;

    // takes the user input
    do
    {
    printf("Height? ");
    height = get_int();
    }
    while (!(height>=0 && height<24));
    
    int spaces = height-1;
    int hashes = 2;
    
    // draws the pyramid
    for (int i=0; i<height; i++) 
    {
        for (int k=spaces; k>0; k--) 
        {
            printf(" ");
        }
        spaces--;
        for (int j=hashes; j>0; j--) 
        {
            printf("#");
        }
        printf("\n");
        hashes++;
    }
}