#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("ERROR\n");
        return 1;
    }
    
    int key = atoi(argv[1])%26;

    printf("plaintext: ");
    string plaintext = get_string();
    
    printf("ciphertext: ");
    
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        if (!isalpha(plaintext[i]))
        {
            printf("%c", plaintext[i]);
        }
        else if (plaintext[i] <= 'z') 
        {
            if (plaintext[i] + key > 'z') 
            {
                printf("%c", plaintext[i] + key - 26);
            }
            else 
            {
                printf("%c", plaintext[i] + key);
            }
        }
        else if (plaintext[i] <= 'Z') 
        {
            if (plaintext[i] + key > 'Z') 
            {
                printf("%c", plaintext[i] + key - 26);
            }
            else
            {
                printf("%c", plaintext[i] + key);
            }
        }
    }
    printf("\n");
}