//program that takes 5 integers and prints them in reverse order.

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
    for (int i = 1; i <= n; i++)
    {
        printf("%i ", s[n-i]);
    }
}