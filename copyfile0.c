#include <stdio.h>
#include <stdlib.h>

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

    while(fread(buffer, sizeof(char), SIZE, fin) > 0)  //чтение копируемого файла до конца
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
    
int main(void)
{
    file_copy("1.txt", "2.txt"); 
    return 0;
}