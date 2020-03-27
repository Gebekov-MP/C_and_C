#include <stdio.h>
#include <cs50.h>

int main(void)

{
    int n;
    do
    {
        n = get_int("Number of people in room: ");
    }
    while (n < 1);
    //array
    int age[n];
    //ger everyones age
    for (int i = 0; i < n; i++)
    {
        age[i] = get_int("Age of person %i: ", i+1);
    }
    //report everyone's age a year hence
    for (int i = 0; i < n; i++)
    {
        printf("A year from now, person %i will be %i years old.\n", i+1, age[i]+1);
    }
}