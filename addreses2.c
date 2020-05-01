//stores and prints an integers adress and prints integer via its address


#include <stdio.h>
int main(void)
{
    int n = 50;
    int *p = &n;
    printf("%p\n", p);
    printf("%i\n", *p);
}