//implement summ function all numbers for n using recursion


#include <cs50.h>
#include <stdio.h>

int sigma(int m);

int main(void)
{
    int n;
    do
    {
        n = get_int("Input positive integer: ");
    }
    while (n < 0);
    
    int answer = sigma(n);
    printf("%d", answer);
}

int sigma(int m)
{
    if (m <= 0)
    {
        return 0;
    }
    else
    {
        return (sigma(m - 1) + m);
    }
}