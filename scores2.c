//averages numbers using an array and a constant

#include <stdio.h>
#include <cs50.h>

const int N = 3;

int main(void)
{
    //Scores
    int scores [N];
    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;
    printf("Average: %i\n", (scores[0] + scores[1] + scores[2]) / N);
}

