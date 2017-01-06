/*AUTHOR: Branko Stankovic
CONTACT: branko.stankovic@gmail.com
WEBPAGE: http://meanwebdeveloper.wordpress.com
DATE CREATED: January 6th 2017 */

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string word = get_string();
    
    if (word!=NULL) 
    {
        for (int i=0; i<strlen(word); i++) 
        {
            printf("%c\n", word[i]);
        }
    }
}