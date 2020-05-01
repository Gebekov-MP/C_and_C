#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //
    for (int i = 65; i < 65 + 26; i++)
    {
        printf("%c: %i\n", (char)i, i);
    }
    //separate uppercase frome lowercase
    for (int i = 97; i < 97 + 26; i++)
    {
        printf("%c : %i\n", (char)i, i);
    }
}