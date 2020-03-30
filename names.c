// Stores names using an array

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    //names
    string names[4];
    names[0] = "Emma";
    names[1] = "Rodrigo";
    names[2] = "BRIAN";
    names[3] = "DAVID";
    
    //print Emmas name
    printf("%s\n", names[0]);
    printf("%c%c%c%c\n", names[0][0], names[0][1], names[0][2], names[0][3]);
}