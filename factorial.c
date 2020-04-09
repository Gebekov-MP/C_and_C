//implements fuctorial using recurtion

#include <cs50.h>
#include <stdio.h>

int factorial(int n)
{
    if (n == 0) 
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main(void)
{
    int number = get_int("Number: ");
    printf("Factorial of number %i = %i\n", number, factorial(number));
}

