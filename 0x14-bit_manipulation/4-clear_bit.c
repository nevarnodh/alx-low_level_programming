#include "main.h"

/**
 * clear_bit - sets the bit to 0
 * @n: pointer to the number to change
 * @index: index of the bit
 *
 * Return: 1 0n success, -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 42)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}

