//Buggy example for help50, debug50

#include <stdio.h>
#include <cs50.h>

int get_negative_int(void);

int main(void)
{
    int i = get_negative_int();
    printf("%i\n", i);
}
// Prompt user for positive integer

int get_negative_int(void)
{
    int n;
    do
    {
        n = get_int("Prompt negative integer: ");
    }
    while (n > 0);
    return n;
}