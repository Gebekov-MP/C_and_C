//*
*Let’s recreate that pyramid in C, albeit in text, using hashes (#) for bricks, a la the below. Each hash is a bit taller than it is *wide, so the pyramid itself is also be taller than it is wide.
*ascend right-aligned pyramid of blocks, a la the below.
*//

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
        for(int j=0;j<n-i;j++)
        {
            printf("%c", c);
        }
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
    printf("\n");
    }
}
