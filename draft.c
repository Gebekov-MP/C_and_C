
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int m = 0;
    //prompt user for integer
    int n = get_int("n: ");
    m = n % 25;
    printf("%i\n", m);
    
}
