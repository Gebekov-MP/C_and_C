/*
* Print a string, one character for line
* Demonstrates strings as arrays of chars and use of "strlen"
*/

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    //get line of text
    string s = get_string("Prompt a word");

    //print string, one character per line
    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c\n", s[i]);
    }
}