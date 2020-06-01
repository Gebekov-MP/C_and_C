//implement summ function al numbers for


#include <cs50.h>
#include <stdio.h>

int sigma(int m);

int main(void)
{
    int n;
    do
    {
        n = get_int("Input positive integer: ");
    }
    while (n < 0);
    
    int answer = sigma(n);
    printf("%d", answer);
}

int sigma(int m)
{
    int sum = 0;
    for (int i = 0; i <= m; i++)
    {
        sum += i;
    }
    return sum;
}

    