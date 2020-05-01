
#include <stdio.h>
#include <stdlib.h>

#define SIZE  512
    
int main(int argc, char **argv)
{
    if (argc == 2)
    {
        return 1;
    }
    
    char buffer[SIZE];
    size_t read;
    FILE *inf, *outf;
    if (argc == 2)
    {
        return 1;
    }

    if ((inf = fopen(argv[1], "rb")) == NULL)
    {
        fprintf(stderr,"Could not open\n");
        return 1;
    }
    if((outf = fopen("~/C_and_C/2.txt", "wb")) == NULL)
    {
        fprintf(stderr,"Could not open file.\n");
        return 2;
        fclose(inf);
    }

    while ((read = fread(buffer, sizeof(char), SIZE, inf)) > 0)
    {
        fwrite(buffer, sizeof(char), read, outf);
    }
    fclose(inf);
    fclose(outf);
    return 0;
}
