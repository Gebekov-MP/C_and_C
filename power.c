//Math library

#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    double base = get_double("Base: ");
    double exponent = get_double("Exponent: ");
    printf("Output: %0.f\n", pow(base, exponent));
}

