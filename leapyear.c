//Write a program that tells you if a year is a leap year.

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    int n = atoi(argv[1]); //convert a string to an integer
    //condition Not leap your is not devide to 4 or divide to 100 but not devide 400
    if (n % 4 != 0 || (n % 100 == 0 && n % 400 != 0))
    {
        printf("Not a leap year");
    }
    else
    {
        printf("Leap year");
    }
    printf("\n");
}