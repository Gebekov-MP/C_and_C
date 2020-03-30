#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float dollars = 0;
    int numbers = 0; int summ = 0; int coins = 0;  //number of coins; summ of coins and coins
    do
    {
        dollars = get_float("Changes owed: ");
        coins = round(dollars * 100);
        n = coins / 25;
        coins = coins % 25;
        summ += numbers;
            
        n = coins / 10;
        coins = coins % 10;
        summ += numbers;
            
        n = coins / 5;
        coins = coins % 5;
        summ += numbers;
            
        n = coins / 1;
        coins = coins % 1;
        summ += numbers;
    }
    while (dollars < 0 || coins != 0);
    printf("%i\n", summ);
}
