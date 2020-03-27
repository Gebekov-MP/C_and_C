//floating-point arithmetic with double type

#include <cs50.h>
#include <stdio.h>

int main(void)
{

//prompt user for x:
double x = get_double("x: ");

//promt user for y
double y = get_double("y: ");

//perform division
printf("x / y = %.50f\n", x / y);

}
