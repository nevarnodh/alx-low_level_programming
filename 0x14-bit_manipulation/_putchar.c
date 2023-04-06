#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On erroe, -1 is returned, and error no is set appropriately
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
