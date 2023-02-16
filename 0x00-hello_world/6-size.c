#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 on success
 */
int main(void)
{
printf("Size of char: %lu byte(s)", sizeof(char));
printf("Size of an int: %lu byte(s)", sizeof(int));
printf("Size of a long int: %lu byte(s)", sizeof(long int));
printf("Size of along long int: %lu byte(s)", sizeof(long long int));
printf("Size of float: %lu byte(s)", sizeof(float));
return (0);
}
