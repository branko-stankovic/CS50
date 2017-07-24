/**
 * Implements a dictionary's functionality.
 */

#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "dictionary.h"

// creates a node type for trie data structure
typedef struct node
{
    bool is_word;
    struct node* children[27];
}
node;

// initializes a root node that will containt all the data
node root = {false, {NULL}};

// keeps the track of dictionary size
unsigned int dictionarySize = 0;

// function declarations
int characterValue (char a);
void freeUp (node* thisNode);



/**
 * Returns true if word is in dictionary else false.
 */
bool check(const char *word)
{
    
    // for each letter in the word
    node* ptr = &root;
    for (int i = 0, n = strlen(word); i < n; i++) 
    {
        int place = characterValue(word[i]);
        
        // if it doesnt exist
        if (ptr->children[place] == NULL) 
        {
            return false;
        }
        
        // if it does exist, point  to it and continue checking
        else 
        {
            ptr = ptr->children[place];
        }
    }
    
    // return the result of is it a word
    return ptr->is_word;
}

/**
 * Loads dictionary into memory. Returns true if successful else false.
 */
bool load(const char *dictionary)
{
    // opens dictionary file for reading
    FILE* dict = fopen(dictionary, "r");
    
    // if it cannot be opened return an error and unload it
    if (dict == NULL) 
    {
        fprintf(stderr, "Could not open %s.\n", dictionary);
        unload();
        return 1;
    }
    
    // until it comes to the end of file
    // load up in trie data structure
    while (!feof(dict)) 
    {
        char word[LENGTH + 1];
        
        if (fscanf (dict, "%s", word) < 1) 
        {
            break;
        }
        node* ptr = &root;
        
        // for each letter
        for (int i = 0, n = strlen(word); i < n; i++) 
        {
            int place = characterValue(word[i]);
            
            // if it doesnt exist in structure, create it
            if (ptr->children[place] == NULL) 
            {
                node* new = malloc (sizeof(node));
                new->is_word = false;
                for (int i = 0; i <= 26; i++) 
                {
                    new->children[i] = NULL;
                }
                ptr->children[place] = new;
                ptr = new;
            }
            
            // if the letter already exists
            else
            {
                ptr = ptr->children[place];
            }
        }
        ptr->is_word = true;
        dictionarySize++;
    }
    
    // close the dictionary file
    fclose (dict);
    return true;
}

/**
 * Returns number of words in dictionary if loaded else 0 if not yet loaded.
 */
unsigned int size(void)
{
    return dictionarySize;
}

/**
 * Unloads dictionary from memory. Returns true if successful else false.
 */
bool unload(void)
{
    for (int i = 0; i <= 26; i++) 
    {
        if (root.children[i] != NULL) 
        {
            freeUp (root.children[i]);
        }
    }
    return true;
}


/**
 * Return array index value of the passed character, or 26 for the apostrophe sign ('') */
int characterValue (char c)
{
    if (c == '\'') 
    {
        return 26;
    }
    else 
    {
        return tolower (c) - 'a';
    }
}

/**
 * Recursive way to deallocate memory from the trie structure */
void freeUp (node* thisNode)
{
    for (int i = 0; i <= 26; i++) 
    {
        if (thisNode->children[i] != NULL) 
        {
            freeUp (thisNode->children[i]);
        }
    }
    free (thisNode);
}