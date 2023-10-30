#include "main.h"
/**
 * main - Entry point
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 always (success)
 */
int main(int argc, char *argv[])
{
int from_op, to_op, re;
char buff[BUFSIZ];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
from_op = open(argv[1], O_RDONLY);
if (from_op == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
to_op = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
while ((re = read(from_op, buff, BUFSIZ)) > 0)
if (to_op == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
else if (write(to_op, buff, re) != re)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
if (re == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(100);
}
else if (close(to_op) == -1 )
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_op);
exit(100);
}
return (0);
}
