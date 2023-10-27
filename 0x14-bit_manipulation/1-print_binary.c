#include "main.h"

/**
 *print_binary - prints the binary representation of a number
 *@n: the number to be printed
 *Return: void
*/

void print_binary(unsigned long int n)
{
int a,  b = 0;
unsigned long int temp;

for (a = 50; a >= 0; a--)
{

temp = n >> a;
if (temp & 1)

{
_putchar('1');
b++;
}
else if (temp)
_putchar('0');
}
if (!temp)
_putchar('0');
}
