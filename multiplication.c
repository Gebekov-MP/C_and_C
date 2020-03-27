/*
/Write a program multiplication.c that prints
out multiplication facts for multiplying all numbers
from 1 to 10 by each other.
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    for (int i = 1; i < 11; i++)
    {
        for (int j = 1; j < 11; j++)
        printf(" %i * %i = %i\n", i, j, i*j);
    }
}
