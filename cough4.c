// abstraction with parametrization and string function into abstraction

#include <stdio.h>
#include <cs50.h>

void cough(int n);
void say(string word, int n);
void sneeze(int n);

int main(void)
{
    cough(3);
    sneeze(3);
}
void cough(int n)
{
    say("cough", n);
}

/*
 * Say word n times
*/
void say(string word, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", word);
    }
}

void sneeze(int n)
{
    say("achoo", n);
}