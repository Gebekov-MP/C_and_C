#include <stdio.h>

#include <stdlib.h>

int lines = 10;         /* число строк треугольника */
int main(int argc, char **argv) 
{
    
    register int nline;  /* номер строки */
    register int naster; /* количество звездочек в строке */
    register int i;

    if( argc > 1 )
    {
        lines = atoi( argv[1] );
    }

    for(nline=0; nline < lines ; nline++ )
    {
        naster = 1 + 2 * nline;

                    /* лидирующие пробелы */
        printn(' ', lines - 1 - nline);

                    /* звездочки */
        printn('*', naster);

                    /* перевод строки */
        putchar( '\n' );
    }
    exit(0);        /* завершение программы */
}