#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: is the file name
 * @text_content: is a string
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int op, wr = 0;
int len = 0;
if (filename == NULL)
return (-1);
op = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (op == -1)
return (-1);
if (text_content != NULL)
{
while (text_content[len] != '\0')
len++;
}
wr = write(op, text_content, len);
if (wr == -1 || wr != len)
return (-1);
close(op);
return (1);
}
