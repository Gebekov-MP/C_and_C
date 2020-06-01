// Implements a list of numbers with linked list

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}
nodes;

int main()
{
    // List of size 0
    nodes *list = NULL;
    
    // Add number to list
    nodes *n = malloc(sizeof(nodes));
    
    if (n == 0)
    {
        return 1;
    }
    n->number = 1;
    n->next = NULL;
    list = n;
    
    // Add number to list
    n = malloc(sizeof(nodes));
    if (n == 0)
    {
        return 1;
    }
    n->number = 2;
    n->next = NULL;
    list->next = n;
    
    // Add number to list
    n = malloc(sizeof(nodes));
    if (n == 0)
    {
        return 1;
    }
    n->number = 3;
    n->next = NULL;
    list->next->next = n;
    
    // Print list
    for (nodes *tmp = list; tmp != NULL; tmp = tmp->next)
    {
        printf("%d\n", tmp->number);
    }
    
    // Free list
    while(list != NULL)
    {
        nodes *tmp = list->next;
        free(list);
        list = tmp;
    }
}
