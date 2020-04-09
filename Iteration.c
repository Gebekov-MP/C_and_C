//draw a piramid using iteration

#include <cs50.h>
#include <stdio.h>

void draw(int h);

int main(void)
{
    //get height of piramid
    int height = get_int("Height: ");
    //draw piramid
    draw(height);
}

void draw(int h)
{
    //draw piramid of height h
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}