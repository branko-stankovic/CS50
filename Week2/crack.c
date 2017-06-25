#include <stdio.h>
#include <cs50.h>
#define _XOPEN_SOURCE
#include <unistd.h>
#include <crypt.h>
#include <string.h>

int main(int argc, string argv[])
{
    // handling invalid user input
    if (argc != 2) 
    {
        printf("Usage: ./crack hash\n");
        return 1;
    }
    
    string salt = "50";
    string hash;
    
    // initialazing empty password string up to length 4
    char password[4];
    password[0] = '\0';
    password[1] = '\0';
    password[2] = '\0';
    password[3] = '\0';
    
    // iterating through possible passwords of length 1
    for (char i = 'A'; i <= 'z'; i++) 
    {
        password[0] = i;
        hash = crypt(password, salt);
        
        if (strcmp(hash, argv[1]) == 0)
        {
            printf("%s\n", password);
            return 0;
        }
        
    }
    
    // iterating through possible passwords of length 2
    for (char i = 'A'; i <= 'z'; i++) 
    {
        for (char j = 'A'; j <= 'z'; j++) {
            password[0] = i;
            password[1] = j;
            
            if (strcmp(crypt(password, salt), argv[1]) == 0) 
            {
                printf("%s\n", password);
                return 0;
            }
        }
    }
    
    // iterating through possible passwords of length 3
    for (char i = 'A'; i <= 'z'; i++) 
    {
        for (char j = 'A'; j <= 'z'; j++) 
        {
            for (char k = 'A'; k <= 'z'; k++) 
            {
                password[0] = i;
                password[1] = j;
                password[2] = k;
                
                if (strcmp(crypt(password, salt), argv[1]) == 0) 
                {
                    printf("%s\n", password);
                    return 0;
                }
            }
        }
    }
    
    // iterating through possible passwords of length 4
    for (char i = 'A'; i <= 'z'; i++) 
    {
        for (char j = 'A'; j <= 'z'; j++) 
        {
            for (char k = 'A'; k <= 'z'; k++) 
            {
                for (char l = 'A'; l <= 'z'; l++) 
                {
                    password[0] = i;
                    password[1] = j;
                    password[2] = k;
                    password[3] = l;
                    
                    if (strcmp(crypt(password, salt), argv[1]) == 0) 
                    {
                        printf("%s\n", password);
                        return 0;
                    }
                }
            }
        }
    }
}