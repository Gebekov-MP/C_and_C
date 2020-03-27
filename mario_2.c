
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
        for(int j = 0; j < n-i; j++)
        {
            printf("%c", c);
        }
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }
        for(int m = 0; m < 2; m++)
        {
            printf("%c", c);
        }
        for (int l = 0; l < i; l++)
        {
            printf("#");
        }
    printf("\n");
    }
}