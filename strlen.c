// Determines the length of a string

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Prompt for user's name
    string s = get_string("Name: ");
     // Count number of characters up until '\0' (aka NUL)
    int n = 0;
    while (s[n] != '\0')
    {
        n++;
    }
    printf("%i\n", n);
}