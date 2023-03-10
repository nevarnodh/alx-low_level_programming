#include "main.h"
 /**
 * _strcat - function that concatenates two strings
 *
 * @dest: input value
 * @src: input value
 *
 * Return: memory address of fuction (string)
 */
char *_strcat(char *dest, char *src)
{
char *tmp = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
src++;
dest++;
}
*dest++ = '\0';
dest = tmp;
return (dest);
}
