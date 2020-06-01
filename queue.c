//implement struct with queue - operation enqueue and dequeue

#include <stdio.h>
#define CAPACITY 100


int main()
{
    //static
    typedef struct 
    {
        int front;
        int number[CAPACITY];
        int size;
    }
    queue;
    
    typedef struct 
    {
        int front;
        int* numbers;
        int size;
    }
    queue;
}