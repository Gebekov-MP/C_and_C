
#include <stdio.h>
#include <stdlib.h>

#define SIZE 512
typedef unsigned char BYTE;
int main(int argc, char **argv)
{
    if (argc == 2)
    {
        return 1;
    }
    
    BYTE buffer[SIZE];
    
    FILE *inf, *outf;
    if (argc == 2)
    {
        return 1;
    }

    if ((inf = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr,"Could not open\n");
        return 1;
    }
    // if((outf = fopen("~/C_and_C/2.txt", "wb")) == NULL)
    // {
    //     fprintf(stderr,"Could not open file.\n");
    //     return 2;
    //     fclose(inf);
    // }

    while ((fread(buffer, SIZE, 1, inf)) == 1)
    {
        outf = fopen("2.txt", "w");
        fwrite(buffer, SIZE, 1, outf);
    }
    fclose(inf);
    fclose(outf);
    return 0;
}
