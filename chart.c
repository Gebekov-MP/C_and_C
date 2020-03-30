//program that takes 5 integers and prints out a bar chart of them.

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = 5;
    int s[n];
    for (int i = 0; i < n; i++)
    {
        s[i] = get_int("Number %i: ", i+1);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s[i]; j++)
        {
            printf("#");
        }
    printf("\n");
    }
}