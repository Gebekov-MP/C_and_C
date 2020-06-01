//implement struct with stack
//peration push and pop

#include <stdio.h>
#define CAPACITY 100

int main(void)
{
    //with out dinamic memory
    typedef struct
    {
        int number[CAPACITY];
        int size;
    }
    stack;
    
    typedef struct
    {
        int* numbers;
        int size;
    }
    stack;
    
}