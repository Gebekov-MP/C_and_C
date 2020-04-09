//Implements Fibonacci using recursion.

#include <stdio.h>
#include <cs50.h>

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fib(n-1) + fib(n-2);
    }
}

int main(void)
{
    int n = get_int("Number: ");
    printf("Fibonacci is %i", fib(n));
}