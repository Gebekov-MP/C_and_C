//draw a piramid using recurtion

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
    if (h == 0)
    {
        return;
    }
    //draw piramid of heifht h-1
    draw(h-1);
    
    //draw one more row of width h
    for (int i = 0; i < h; i++)
    {
        printf("#");
    }
    printf("\n");
}
