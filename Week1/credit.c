#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    printf("Number: ");
    long long card_number = get_long_long();

    long long factor = 10;
    int checksum = 0;
    int digit;
    bool odd = true;
    
    while (factor<=card_number*10)
    {
        if (odd)
        {
            digit = (card_number%factor)/(factor/10);
            checksum += digit;
            factor *= 10;
            odd = false;
        }
        else
        {
            digit = (card_number%factor)/(factor/10);
            digit *= 2;
            if (digit >= 10)
            {
                digit = (digit % 10) + (digit / 10);
            }
            checksum += digit;
            factor *= 10;
            odd = true;
        }
    }
    
    if (checksum%10 != 0) {
        printf("INVALID\n");
    }
    else if (
                (card_number >= (pow(10.00, 14.00))) && 
                (card_number < (pow(10.00, 15.00))) &&
                (card_number/(factor/1000) == 37 ||
                card_number/(factor/1000) == 35)
            )
    {
        printf("AMEX\n");
    }
    else if (
                (card_number >= (pow(10.00, 15.00))) &&
                (card_number < (pow(10.00, 16.00))) &&
                (card_number/(factor/1000) >= 51 &&
                card_number/(factor/1000) <= 55)
            )
    {
        printf("MASTERCARD\n");
    }
    else if (
                ((card_number >= (pow(10.00, 12.00)) &&
                card_number < (pow(10.00, 13.00))) ||
                (card_number >= (pow(10.00, 15.00)) &&
                card_number < (pow(10.00, 16.00)))) &&
                card_number/(factor/100) == 4
            ) 
    {
        printf("VISA\n");
    }
}