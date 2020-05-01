//compare two strings using strcmp

#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main(void)
{
    string s = get_string("first: ");
    string t = get_string("second: ");
    
    if (strcmp(s, t) == 0)
    {
        printf("Same\n");
    }
    else
    {
        printf("Differend");
    }
}