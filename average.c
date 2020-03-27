/* Write a program average.c that asks the user to
provide ten integers as input and computes the sum.
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    int summ = 0;
    for (int i = 0; i < 10; i++)
    {
        n = get_int("prompt integer %i: ",i+1);
        summ += n;
    }
    printf("sum is %i\n", summ);
    float average = summ;   
    printf("average is %.2f\n", average/10);
}
