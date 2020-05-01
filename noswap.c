// falts to swap two integer

#include <stdio.h>

void swap(int a, int b);
int main(void)
{
    int x = 1;
    int y = 2;
    printf("x is %i, y is %i\n", x, y);
    swap(x, y);
    printf("x is %i, y is %i\n", x, y);
}

void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

/*interesting way to swap two variables with out additional variable

void swap(int a, int b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}
*/
