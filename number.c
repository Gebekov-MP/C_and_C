//implements linear serch for numbers

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //an array of numvers
    int numbers[] = {4, 8, 15, 16, 23, 43};
    
    //serch for 50
    for (int i = 0; i < 6; i++)
    {
        if (numbers[i] == 50)
        {
            printf("found\n");
            return 0;
        }
    }
    printf("not found\n");
    return 1;
}

