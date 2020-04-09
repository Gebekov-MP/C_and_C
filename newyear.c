#include <stdio.h>

void count(int n)
{
    if (n == 0)
    {
        printf("Happy new year!\n");
    }
    else
    {
        count(n-1);
        printf("%i\n", n);
    }
}

int main(void)
{
    count(10);
}