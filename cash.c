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
    int numbers = coins / 25;
    printf("numbers = %.2d\n", coins / 25);
    
    int coins1 = (coins - numbers*25);
    int numbers1 = coins1 / 10;
    printf("numbers1 = %.2d\n", coins1 / 10);
    
    int coins2 = (coins1 - numbers1*10);
    int numbers2 = coins2 / 5;
    printf("numbers2 = %.2d\n", coins2 / 5);
    
    int coins3 = (coins2 - numbers2*5);
    int numbers3 = coins2 / 1;
    printf("numbers3 = %.2d\n", coins3 / 1);
    
    //int number = numbers + numbers1 + numbers2 + numbers3;
    
    printf("numbers + numbers1 + numbers2 + numbers3\n", numbers + numbers1 + numbers2 + numbers3);
    
    
    
    
    
    //printf("%i cents\n", coins);
    //printf("numbers = %.2d\n", coins / 25);
    //if (coins > 25);
    {
        //for (int i, i < coins, i++)
        //printf("coins / 25 = %.2f\n", coins / 25);
    }

 }