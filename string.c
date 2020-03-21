// get_string and printf with %s

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = get_string("Whats your name?\n");
    printf("Hello, %s!\n", s);
}

