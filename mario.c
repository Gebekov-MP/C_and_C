// Prints an n-by-n grid of bricks with a loop

#include <cs50.h>
#include <stdio.h>
char c = ' ';
int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n>8);
    for (int i = 1; i <= n; i++)
    {
        for(int j = 0;j < n-i; j++)
        {
            printf("%c", c);
        }
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }
    printf("\n");
    }
}