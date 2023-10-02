#include "main.h"
/**
 * read_textfile -  reads a text file and prints it to standard output
 * @filename: the name of the file
 * @letters: the number of letters it should read and print
 * Return:  the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int op, re, wr;
char *buf;
if (filename == NULL)
return (0);
buf = malloc(sizeof(letters));
if (buf == NULL)
return (0);
op = open(filename, O_RDONLY);
if (op == -1)
return (0);
re = read(op, buf, letters);
if (re == -1)
return (0);
wr = write(STDOUT_FILENO, buf, re);
if (wr == -1 || wr != re)
return (0);
free(buf);
close(op);
return (wr);
}
