#include <stdio.h>
#include <string.h>

int main(void)
{
    char hash[4];
    hash[0] = 'F';
    hash[1] = 'U';
    hash[2] = '\0';
    hash[3] = 'K';
    
    printf("%s\n", hash);
    
    if (strcmp(hash, "FUC") == 0) 
    {
        printf("EQUAL!\n");
    }
}