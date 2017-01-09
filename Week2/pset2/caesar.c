/*AUTHOR: Branko Stankovic
CONTACT: branko.stankovic@gmail.com
WEBPAGE: http://meanwebdeveloper.wordpress.com
DATE CREATED: January 9th 2017 
DATE MODIFIED: 
*/
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // handles incorrect input
    if (argc!=2) 
    {
        printf("Error!");
        return 1;
    }
    
    (int)argv[1];
    
    
    // asks user for input
    printf("plaintext: ");
    string plaintext = get_string();
    
    printf("ciphertext: ");
    
    // converts each character
    for (int i=0; i<strlen(plaintext); i++) 
    {
        char helper = plaintext[i]+argv[1];
        printf("%c", helper);
    }
    

    
}