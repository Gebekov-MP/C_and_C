//Порядок байтов в конкретной машине можно определить с помощью программы на языке Си (testbyteorder.c):
//Символ U+FEFF изображается в UTF-16 последовательностью байтов 0xFE 0xFF (big-endian) или 0xFF 0xFE (little-endian), 
//а в UTF-32 — последовательностью 0x00 0x00 0xFE 0xFF (big-endian) или 0xFF 0xFE 0x00 0x00 (little-endian).
#include <stdio.h>
#include <stdint.h>

int main(void)
{
  uint16_t x = 1; /* 0x0001 */
  printf("%s\n", *((uint8_t *) &x) == 0 ? "big-endian" : "little-endian");
  return 0;
}

/*
Для преобразования между сетевым порядком байтов (англ. network byte order), который всегда big-endian, 
и порядком байтов, использующимся на машине (англ. host byte order), 
стандарт POSIX предусматривает функции htonl(), htons(), ntohl(), ntohs():

uint32_t htonl(uint32_t hostlong); — конвертирует 32-битную беззнаковую величину из локального порядка байтов в сетевой;
uint16_t htons(uint16_t hostshort); — конвертирует 16-битную беззнаковую величину из локального порядка байтов в сетевой;
uint32_t ntohl(uint32_t netlong); — конвертирует 32-битную беззнаковую величину из сетевого порядка байтов в локальный;
uint16_t ntohs(uint16_t netshort); — конвертирует 16-битную беззнаковую величину из сетевого порядка байтов в локальный.
*/