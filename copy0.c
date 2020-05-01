//Capitalizes a string

#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

int main(void)
{
    //get a string
    string s = get_string("s: ");
    
    //copy string address
    string t = s;
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }
    printf("s: %s\n", s);
    printf("t: %s\n", t);
}