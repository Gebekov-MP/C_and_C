//print two strings and strings adreses

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //get strings
    string s = get_string("first: ");
    string t = get_string("second: ");
    
    //print strings and addreses
    
    printf("%s\n", s);
    printf("%s\n", t);
    
    printf("%p\n", s);
    printf("%p\n", t);
}