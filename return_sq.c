// Return value

#include <cs50.h>
#include <stdio.h>

int square(int n);

int main(void)
{
    int n = get_int("Input: ");
    printf("Output: %i\n", square(n));
}

// Square n
int square(int n)
{
    return n * n;
}