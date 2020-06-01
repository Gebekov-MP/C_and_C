
//swap using ecsor
#include <stdio.h>
int main()
{
    int a = 1;
    int b = 4;
    a = a^b;
    printf("a = %d\nb = %d\n", a, b);
    b = a^b;
    printf("a = %d\nb = %d\n", a, b);
    a = a^b;
    printf("a = %d\nb = %d\n", a, b);
}