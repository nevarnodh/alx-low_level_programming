#include "main.h"
/**
 * _puts - function that prints a string
 *
 * @str: parameter defined in main
 *
 * Return: Always 0
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
#include<stdio.h>
/**
 * main - Entry point puts
 * description - puts
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
puts("\"Programming is like building a multilingual puzzle");
return (0);
}

