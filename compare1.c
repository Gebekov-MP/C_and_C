//compare strings adreses

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //get two strings
    string s = get_string("first string: ");
    string t = get_string("second string: ");
    if (s == t)
    {
        printf("Same\n");
    }
    else
    {
        printf("Differen\n");
    }
}
