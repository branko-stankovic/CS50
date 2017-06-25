#include <stdio.h>
#include <cs50.h>
#define _XOPEN_SOURCE
#include <unistd.h>
#include <crypt.h>

int main(void)
{
    string word = "branko";
    string salt = "50";
    string hash = crypt(word, salt);
    printf("%s\n", hash);
}