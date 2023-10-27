#include "main.h"

/**
 * get_endianness - prog checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
int d;
char *e;

d = 1;
e = (char *)&d;
return (*e);
}
