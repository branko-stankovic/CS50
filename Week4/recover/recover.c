#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <cs50.h>

// magic number! the size of the memory block
const int BLOCK_SIZE = 512;

int main(int argc, string argv[]) 
{
    // checks for proper usage
    if (argc != 2) 
    {
        fprintf(stderr, "Usage: %s name", argv[0]);
        return 1;
    }
    
    // opens the raw file
    FILE* fp = fopen("card.raw", "r");
    
    // checks if it can be opened
    if (fp == NULL) 
    {
        fclose(fp);
        fprintf(stderr, "Unable to open the raw file\n");
        return 2;
    }
    
    uint8_t buf[512];
    
    // how many images have we found
    int counter = 0;
    
    // placeholder for the new file
    FILE *fw = NULL;
    
    // start reading the raw file
    while (fread(buf, BLOCK_SIZE, 1, fp)) 
    {
        // check is it the start of a JEPG
        if (buf[0] == 0xff &&
            buf[1] == 0xd8 &&
            buf[2] == 0xff &&
            (buf[3] == 0xe0 || buf[3] == 0xe1)) 
        {
            // close the previous file if  opened
            if (fw != NULL) 
            {
                fclose(fw);
            }
            
            // creates name for the new file
            char filename[8];
            sprintf(filename, "%03d.jpg", counter);
            
            // opens new file for writing
            fw = fopen(filename, "w");
            
            // found one more file!
            counter++;
        }
        
        // if it is still the previous file
        if (fw != NULL) 
        {
            fwrite(buf, BLOCK_SIZE, 1, fw);
        }
    }
    
    if (fw != NULL) 
    {
        fclose(fp);
    }
    
    return 0;
    
}