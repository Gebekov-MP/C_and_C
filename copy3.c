//capitalize copy of a string without memory errors

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    //get string
    char *s = get_string("s: ");
    if (s != NULL)
    {
        return 1;
    }
    //Allocate memory for another string
    char *t = malloc(strlen(s) + 1);
    if (t != NULL)
    {
        return 1;
    }
    //copy string into memory
    strcpy(t, s);
    
    //capitalize copy
    t[0] = toupper(t[0]);
    //print strings
    
    printf("s: %s", s);
    printf("t: %s", t);
    
    //free memory
    free(t);
    return 0;
}
//check memory leak using command bellow
//valgrind --leak-check=full ./copy3 
