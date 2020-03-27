// string abstraction
#include <cs50.h>
#include <stdio.h>

void PrintName(string name);

int main(void)
{
    string s = get_string("your name:\n");
    PrintName(s);
}

void PrintName(string name)
{
    printf("Hello, %s!\n", name);
}