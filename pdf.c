//detect if the file is pdf

/*
Write a program pdf.c that checks if a file is a PDF.
Every PDF begins with the first five bytes: 0x25 0x50 0x44 0x46 0x2d
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        return 1;
    }
    
    FILE *f = fopen(argv[1], "r");
    
    if (!f)
    {
        return 1;
    }
    unsigned char bytes[5];
    fread(bytes, 5, 1, f);
    if (bytes[0] == 0x25 && bytes[1] == 0x50 && bytes[2] == 0x44 && bytes[3] == 0x46 && bytes[4] == 0x2d)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    fclose(f);
}