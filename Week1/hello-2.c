#include <stdio.h>
#include <cs50.h>

int main(void) {
    printf("What is your name?\n");
    string name = GetString();
    printf("Hey there %s!\n", name);
}