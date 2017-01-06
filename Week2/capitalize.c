/*AUTHOR: Branko Stankovic
contact: branko.stankovic@gmail.com
webpage: http://meanwebdeveloper.wordpress.com
DATE CREATED: January 6th 2017
*/
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string word = get_string();
    
    if (word!=NULL) 
    {
        for (int i=0; i<strlen(word); i++) 
        {
            printf("%c", toupper(word[i]));
        }
        printf("\n");
    }
}