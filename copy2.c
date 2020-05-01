//capitalize a first char of string using strcpy

#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    //get a string
    char *s = get_string("s: ");
    //allocate menory for another string
    char *t = malloc(strlen(s) + 1);
    //copy string into memory
    strcpy(t, s);
    //capitalize copy
    s[0] = toupper(s[0]);
    //print strings
    
    printf("s: %s\n", s);
    printf("t: %s\n", t);
    
    
    
}