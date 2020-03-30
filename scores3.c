//Averages numbers using a helper function

#include <stdio.h>
#include <cs50.h>

float average(int length, int array[]);

int main(void)
{
                            //Get number of scores
    int n = get_int("Numbers of scores: ");
    
                          //get scores
    int scores[n];
    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Scores %i: ", i+1);
    }
    //print average
    printf("Average: %.1f\n", average(n, scores));
}

float average(int length, int array[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return (float) sum / (float) length;
}

