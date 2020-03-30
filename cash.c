//opportunity to design

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float dollars;
    do
    {
        dollars = get_float("Give me a money: ");
    }
    while (dollars < 0);
    int coins = round(dollars*100);
    int n = 0;
    int summ = 0;
    while (coins != 0)
    {
        n = coins / 25;
        coins = coins % 25;
        summ += n;
        
        n = coins / 10;
        coins = coins % 10;
        summ += n;
        
        n = coins / 5;
        coins = coins % 5;
        summ += n;
        
        n = coins / 1; 
        coins = coins % 1;
        summ += n;
    }
    printf("%i\n", summ);
}    
    