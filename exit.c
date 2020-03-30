// Returns explicit value from main

#include <stdio.h>
#include <cs50.h>

int main (int argc, string argv[])
{
    if (argc != 2)
    {
        printf("missing command-line argument.\n");
        return 1;
    }
    printf("%s\n", argv[1]);
    return 0;
}

