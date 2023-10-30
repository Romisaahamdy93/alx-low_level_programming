#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: is the file name
 * @text_content: is the string
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int op, wr = 0;
int l = 0;
if (filename == NULL)
return (-1);
op = open(filename, O_WRONLY | O_APPEND);
if (op == -1)
return (-1);
if (text_content != NULL)
{
while (text_content[l] != '\0')
l++;
}
wr = write(op, text_content, l)
if (wr == - || wr != l)
return (-1);
close(op);
return (1);
}
