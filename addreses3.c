//prints a string and its address

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = "EMMA";
    printf("%s : %p\n", s, s);
}