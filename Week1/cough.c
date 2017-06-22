#include <stdio.h>
#include <cs50.h>

void say(string, int);

int main(void)
{
        say("cough", 3);
}

void say(string s, int x)
{
    for (int i = 0; i < x; i++)
    {
        printf("%s\n", s);
    }
    
}