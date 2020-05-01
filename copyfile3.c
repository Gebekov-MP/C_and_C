/*копирование содержимого одного файла в другой, с вводом названия копирования
и имени нового файла, через командную строку.*/


#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>

#define SIZE  512

int file_copy(char *inptf, char *otptf)
{
    char   buffer[SIZE]; //буффер для записи
    FILE *fin, *fout; //входящий-исходящий файлы

    if((fin = fopen(inptf, "rb")) == NULL)   //обработка ошибки открытия файлов
    {
        fprintf(stderr,"Could not open file.\n");
        return 1;
    }

    if((fout = fopen(otptf, "wb")) == NULL)
    {
        fprintf(stderr,"Could not open file.\n");
        return 2;
        fclose(fin);
    }

    while((fread(buffer, sizeof(char), SIZE, fin)) > 0)  //чтение копируемого файла до конца
    {
        fwrite(buffer, sizeof(char), SIZE, fout);//запись копии в новый файл
    }
    //закрываем файлы
    fclose(fin); 
    fclose(fout);
    //очищаем буфер
    free(buffer);
    return 0;
}

int main(int argc, char **argv)
{
    if (argc != optind + 2)
    {
        fprintf(stderr, "Usage: infile outfile\n");
        return 1;
    }
    
    file_copy(argv[optind], argv[optind + 1]); //файлы вводим через командную строку
}
    