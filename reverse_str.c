//Update your reverse program to take a string as input, and print
//out the reverse of the string

#include <string.h>
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = get_string("Text: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", s[n-i-1]);
    }
}