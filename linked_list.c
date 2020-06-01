//implements serch in linked list 

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct node
{
    int n;
    struct node *next;
}
node;

bool search(int n, node *list);

int main()
{
    // 
}

bool search(int n, node *list)
{
    node *ptr = list;
    while (ptr != 0)
    {
        if (ptr->n == n)
        {
            return true;
        }
        ptr = ptr->next;
    }
    return false;
}



