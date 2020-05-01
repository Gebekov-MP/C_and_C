//compare comlite using strcmp and !

#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main(void)
{
    char* s = get_string("first: ");
    char* t = get_string("second: ");
    if (s != NULL && t != NULL)
    {
        if (strcmp(s, t) == 0)
        {
            printf("Same\n");
        }
        else
        {
            printf("Differend");
        }
    }
}