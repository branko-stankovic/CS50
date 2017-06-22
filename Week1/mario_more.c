#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    
    do
    {
    printf("Height? ");
    height = get_int();
    }
    while (!(height>=0 && height<24));
    
    int spaces = height-1;
    int hashes = 2;
    
    for (int i=0; i<height; i++)
    {
        for (int j=0; j<spaces; j++)
        {
            printf(" ");
        }
        for (int k=0; k<hashes; k++) 
        {
            printf("#");
        }
        printf(" ");
        for (int l=0; l<hashes; l++) 
        {
            printf("#");
        }
        for (int m=0; m<spaces; m++)
        {
            printf(" ");
        }
        spaces--;
        hashes++;
        printf("\n");
    }
    
}