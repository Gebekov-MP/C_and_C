#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int k;
int main (int argc, string argv[])
{
    if (argc == 2 && atoi(argv[1]) > 0)
    {
        for (int j = 0, m = strlen(argv[1]); j < m; j++)
        {
            if ((atoi(argv([1][j]))) == 0)
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
            else
            {
                k = atoi(argv[1]);
                string s = get_string("plaintext: ");
                printf("ciphertext:");
                for (int i = 0, n = strlen(s); i < n; i ++)
                {
                    if (s[i] >= 'a' && s[i]<= 'z')
                    {
                        int ki = (s[i] + k % 26);
                        if (ki > 'z')
                        {
                            printf("%c", ('a' + ((ki) - 'z') - 1));
                        }
                        else
                        {
                            printf("%c", ki);
                        }
                    }
                    else if (s[i] >= 'A' && s[i]<= 'Z')
                    {
                        int ki = (s[i] + k % 26);
                        if (ki > 'Z')
                        {
                            printf("%c", ('A' + ((ki) - 'Z') - 1));
                        }
                        else
                        {
                            printf("%c", ki);
                        }
                    }
                    else
                    {
                        printf("%c", s[i]);
                    }
                }
            printf("\n");
            }
        }
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}

 