//Write a program that capitalizes a name provided as
//command-line arguments.


#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    for (int i = 1, n = argc; i < n; i++)
    {
        printf("%c%s ", toupper(argv[i][0]), argv[i]+1);
    }
    printf("\n");
}