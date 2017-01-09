/*AUTHOR: Branko Stankovic
CONTACT: branko.stankovic@gmail.com
WEBPAGE: http://meanwebdeveloper.wordpress.com
DATE CREATED: January 6th 2017 
DATE MODIFIED: January 9th 2017 
*/

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    // asks for user name
    string name = get_string();
    
    // loops trough every character of input
    for (int i=0; i<strlen(name); i++) 
    {
        // if the first character and it's not blank
        if ((i==0 && (int)name[i]!=32) || 
        // or any other nonblank character just after every blank
            ((int)name[i-1]==32 && (int)name[i]!=32)) 
        {
            // print that character uppercased
            printf("%c", toupper(name[i]));
        }
    }
    printf("\n");
    
}