#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file and print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t kh;
ssize_t n;
ssize_t a;
kh = open(filename, O_RDONLY);
if (kh == -1)
return (0);
buf = malloc(sizeof(char) * letters);
a = read(kh, buf, letters);
n = write(STDOUT_FILENO, buf, a);
free(buf);
close(kh);
return (n);
}



