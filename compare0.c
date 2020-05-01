//compare two integer

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //get integer
    int i = get_int("first int: ");
    int j = get_int("second int: ");
    //compare integer
    if (i == j)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}