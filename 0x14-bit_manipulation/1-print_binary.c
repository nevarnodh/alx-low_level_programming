#include "main.h"

/**
 * print_binary- prints binary representation of the number
 * @n: number to be printed in binary
 *
 */

void print_binary(unsigned long int n)
{
int i, count = 0;
unsigned long int current;
for (i = 30; i >= 0; i--)
{
current = n >> i;
if (current & 1)
{
_putchar('1');
count++;
}
else if (count)
_putchar('0');
}
if (!count)
_putchar('0');
}
