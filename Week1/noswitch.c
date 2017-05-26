#include <stdio.h>
#include <cs50.h>

int main(void) {
    printf("Please enter an integer between 1 and 10:");
    int x = GetInt();
    
    if (x>0 && x<4) {
        printf("You picked a small number!");
    }
    else if (x>3 && x<8) {
        printf("You picked a medium number!");
    }
    else if (x>7 && x<11) {
        printf("You picked a large number!");
    }
    else {
        printf("Your argument is invalid, please try again!");
    }
    
    
}