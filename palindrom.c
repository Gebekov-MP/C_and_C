/*
/A program that takes a string as input, and
/determines whether it is a palindrome (the same backwards and
/forwards).
*/

#include <string.h>
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = get_string("Text: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[n-i-1] == s[i])
        {
            printf("Palindrom");
            return(0);
        }
        else
        {
            printf("Not palindrom");
            return(1);
        }
    }
}