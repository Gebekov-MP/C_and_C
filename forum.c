#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main()
{
    int S; 
    S = 0;
 
    int L[10][10];
    srand((unsigned int)time(NULL)/2 );
    for (int i = 0; i < 10; i++)
    {
        for (int j=0; j < 10; j++)
        {    
            L [i] [j] = rand () % 8+4;
        }
    }
    for (int i=0; i < 10; i++)
    { 
        for (int j = 0; j < 10; j++)
        {
            printf("%4d", L[i][j]); 
        }
        printf ("\n");
    }  
    for (int i=0; i < 10; i++)
    {
        for (int j = 1; j < 10; j += 2)
        {    
            S += L[9][j];
            printf("%i\n",L[9][j] );
            
        } 
        printf ("kvadrat summy nechetnyh elementov poslednego stolbca = %i\n", S * S );
        system("PAUSE");  
        return 0;
    }
}