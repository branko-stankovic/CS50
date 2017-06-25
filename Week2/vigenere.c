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
    
    string key = argv[1];
    
    printf("plaintext: ");
    string plaintext = get_string();
    
    printf("ciphertext: ");
    
    int index = 0;
    
    for (int i = 0, n = strlen(plaintext); i < n; i++) 
    {
        if (!isalpha(plaintext[i])) 
        {
            printf("%c", plaintext[i]);
        }
        else if (plaintext[i] <= 'z')
        {
            if (plaintext[i] + tolower(key[index]) > 'z') 
            {
                printf("%c", plaintext[i] + tolower(key[index])%97 - 26);
            }
            else 
            {
                printf("%c", plaintext[i] + tolower(key[index])%97);
            }
            index++;
        }
        else if (plaintext[i] <= 'Z') 
        {
            if (plaintext[i] + key[index] > 'Z') 
            {
                printf("%c", plaintext[i] + key[index] - 26);
            }
            else 
            {
                printf("%c", plaintext[i] + key[index]);
            }
            index++;
        }
        
        
        if (index > strlen(key)) 
        {
            index = 0;
        }
    }

}