//calculates a remainder

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //prompt user for integer
    int n = get_int("n: ");
    
    //Check parity of integer
    if (n % 2 == 0)
    {
        printf("even number\n");
    }
    else
    {
        printf("odd number\n");
    }
}