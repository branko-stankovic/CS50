#include <stdio.h>
#include <cs50.h>
#include <string.h>

// include our own file in the header
#include "structs.h"

// define a constant with a value of 3
#define STUDENTS 3

int main(void)
{
    // value type student; array students; size STUDENTS or 3
    student students[STUDENTS];
    
    for (int i = 0; i < STUDENTS; i++) 
    {
        printf("name: ");
        students[i].name = get_string();
        
        printf("dorm: ");
        students[i].dorm = get_string();
    }
    
    // get a variable with pointer to a file
    // open it in w-write mode
    FILE *file = fopen("students.csv", "w");
    if (file != NULL)
    {
        for (int i = 0; i < STUDENTS; i++) 
        {
            fprintf(file, "%s,%s\n", students[i].name, students[i].dorm);
        }
        fclose(file);
    }
}