//Write a program consonants.c that takes a string as input, and
//prints it out without vowels.

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get_string("Text: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] == 'i')
        {
            printf("%c", s[i+n]);
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    //printf("\n");
}