
//implements buffer overflow

#include <stdio.h>
#include <string.h>

void f(char* bar)
{
    char c[12];
    strncpy(c, bar, strle(bar));
}

int main(int c; char **argv)
{
    f(atgv[1]);
}