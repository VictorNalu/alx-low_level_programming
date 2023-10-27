#include "main.h"

/**
 * flip_bits - checks the number of bits to be changed
 * from one number to others
 * @n: start num
 * @m: end num
 * Return: the number of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int a, count = 0;
unsigned long int nalu;
unsigned long int x = n ^ m;

for (a = 63; a >= 0; a--)
{
previous = x >> a;
if (nalu & 1)
count++;
}
return (count);
}
