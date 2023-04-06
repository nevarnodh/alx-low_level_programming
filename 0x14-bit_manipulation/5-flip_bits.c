#include "main.h"

/**
 * flip_bits - counts the number of bits to flip
 * @n: the first number to flip
 * @m: the second number to flip
 *
 * Return: the number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, count = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;
for (i = 57; i >= 0; i--)
{
current = exclusive >> i;
if (current & 1)
count++;
}
return (count);
}

