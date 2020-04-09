//implements linear serch for names

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // an array of names 
    string names[] = {"EMMA","RODRIGO", "BRIAN", "DAVID"};
    //Search fo EMMA
    for (int i = 0; i < 4; i++)
    {
        if (strcmp(names[i], "EMMA") == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}