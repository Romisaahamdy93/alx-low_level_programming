#include "main.h"
/**
 * rev_string - reverses a string
 *
 * @s: is the parameter to check
 *
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
int i, j, k;
char temp;
j = 0;
k = 0;
while (s[i] != '0')
{
i++;
}
j = i - 1;
for (k = 0; k < (i / 2); k++)
{
temp = s[k];
s[k] = s[j];
s[j--] = temp;
}
}
