//implements multiplicate of numbers to n

#include <cs50.h>
#include <stdio.h>
#include <math.h>


int main(void)
{
    int n = get_int("How many values? ");
    double values[n];
    for (int i = 0; i < n; i++)
    {
        values[i] = get_double("Value %i: ", i + 1);
    }
    double p = 1;
    for (int i = 0; i<n ; i++)
    {
        p *= fabs(values[i]);
    }
    printf("%f\n", p);
}