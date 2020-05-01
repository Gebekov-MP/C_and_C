//Implemenres matrix and sum add elements of last row

#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main()
{
    int S = 0; 
    
 
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
    for (int j = 0; j < 10; j ++)
    {    
        if (L[j][9] % 2 != 0)
        {
            S += L[j][9];
        }
    }    
    printf ("kvadrat summy nechetnyh elementov poslednego stolbca = %i\n", S * S );
    system("PAUSE");  
    return 0;
}