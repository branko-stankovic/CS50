/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm

    // lets start from the beginning of the array
    int left = 0;
    // and go to the end of it
    // remember last index of an array is one less than its size!
    int right = n-1;
    // declare the mid point of the array
    int middle = (right + left) / 2;
    
    // while start and end don't overlap, do this
    while (right - left >= 0) 
    {
        // if the value is found EURECA
        if (values[middle] == value) 
        {
            return true;
        }
        // if the middle value is bigger
        // look at the left half of the list
        else if (values[middle] > value) 
        {
            right = middle-1;
        }
        // if the middle value is less
        // look at the right half of the list
        else if (values[middle] < value) 
        {
            left = middle+1;
        }
        // declare new middle point
        middle = (right + left) / 2;
    }
    return false;
}


/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // bubble sort!
    
    // swaps won't work uninitialized, and should not be zero so
    // the loop starts
    // 42 is the answer to meaning of life and universe
    int swaps = 42;
    
    // a variable to keep value while swapping bubbles
    int helper;
    
    // while array is unsorted, keep on doing it
    while (swaps != 0) 
    {
        // resets the swap counter
        swaps = 0;
        
        // for each pair of values in the array
        for (int i = 0; i < n-1; i++) 
        {
            // if the left value is bigger
            if (values[i] > values[i+1]) 
            {
                // swap it with the right one, increase the counter
                helper = values[i];
                values[i] = values[i+1];
                values[i+1] = helper;
                swaps++;
            }
            // max value is all the way to the right, so next time
            // don't need to check for that one again
            n--;
        }
    }
}
