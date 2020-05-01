//capitalizes a copy of a string

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <cs50.h>


int main(void)
{
    //get a string
    char *s = get_string("s: ");
    //allocate memory for another string
    char *t = malloc(strlen(s) + 1);
    //copy string into memory
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        //t[i] = s[i];
        *(t+i) = *(s+i);
    }
    //capitalize copy
    t[0] = toupper(t[0]);
    //print strings
    
    printf("s: %s\n", s);
    printf("t: %s\n", t);
    
}