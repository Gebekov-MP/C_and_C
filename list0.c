//implements list of numbers with an array of fixed size

#include <stdio.h>

int main()
{
     // Initialize list of size 3 with numbers
    int list[3] = { 0, 1, 2};
    
    // Print list
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", list[i]);
    }
    
}